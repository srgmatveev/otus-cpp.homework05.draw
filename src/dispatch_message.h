/**
 * @file dispatch_message.h
 * @brief Класс содержит перечисление типов событий очереди обработчика событий.
 */
#pragma once
/**
 * @brief Типы событий
 */
enum class Message {
    New_Document, ///< Создать новый документ
    Open_Document, ///< Открыть существующий документ
    Set_Active_Document, ///< Сделать документ активным (с которым идет работа)
    Close_Document, ///< Закрыть активный документ
    Close_All_Documents, ///< Закрыть все документы
    Save_Document, ///< Сохранить активный документ
    Save_All_Documents, ///< Сохранить все документы
    Import_From_File, ///< Импоритровать из формата другого редактора в новый документ
    Export_to_File, ///< Экспортировать в формат другого редактора
    DrawLine, ///< Нарисовать линию
    DrawCircle, ///< Нарисовать окружность.
    DrawRectangle, ///< Нарисовать прямоугольник
    DrawSquare, ///< Нарисовать квадрат
    DeleteSelected, ///< Удалить выделенный графический элемент
};