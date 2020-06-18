/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_LED_H
#define _MOCK_LED_H

#include "unity.h"
#include "Led.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_Led_Init(void);
void mock_Led_Destroy(void);
void mock_Led_Verify(void);




#define turnLed_Ignore() turnLed_CMockIgnore()
void turnLed_CMockIgnore(void);
#define turnLed_StopIgnore() turnLed_CMockStopIgnore()
void turnLed_CMockStopIgnore(void);
#define turnLed_Expect(state) turnLed_CMockExpect(__LINE__, state)
void turnLed_CMockExpect(UNITY_LINE_TYPE cmock_line, OnOffState state);
typedef void (* CMOCK_turnLed_CALLBACK)(OnOffState state, int cmock_num_calls);
void turnLed_AddCallback(CMOCK_turnLed_CALLBACK Callback);
void turnLed_Stub(CMOCK_turnLed_CALLBACK Callback);
#define turnLed_StubWithCallback turnLed_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
