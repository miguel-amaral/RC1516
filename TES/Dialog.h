#pragma once
#ifndef abc__
#define abc__
#include <mutex>
#include <string>

namespace UI{
  class Dialog{
    static const std::string REGULAR;
    static const std::string RED;
    static const std::string GREEN;
    static const std::string YELLOW;
    static const std::string BLUE;
    static const std::string MAGENT;
    static const std::string CYAN;
    static const std::string WHITE;

    static const char BOOL_FALSE = 'n';
    static const char BOOL_TRUE = 'y';

    std::mutex _mutex;
    std::string filterString(std::string);
  public:
    static Dialog* IO;
    Dialog();
    void closeDown();

    /**
     * Read a boolean from the input. 'y' corresponds to true and 'n' to false.
     * @param prompt
     *            a prompt (may be null)
     * @return the bool read from the input
     */
    bool readBoolean(std::string = "");
    /**
     * Read a string
     * @param prompt
     *            a prompt (may be null)
     * @return the string read from the input
     */
    std::string readString(std::string = "");

    /**
     * @param std::string
     *                 prompt to display
     *                 may be null
     * @return double
     */
    double readDouble(std::string = "");
    /**
     * @param std::string
     *                 prompt to display
     *                 may be null
     * @return int
     */
    int readInteger(std::string = "");

    void print(std::string);

    void println(std::string = "");

    void flush();
  };
}

#endif
