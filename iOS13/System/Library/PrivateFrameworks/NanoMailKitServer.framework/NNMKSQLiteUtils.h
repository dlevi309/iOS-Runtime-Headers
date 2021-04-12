/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
@interface NNMKSQLiteUtils : NSObject
+(void)bindUnsignedInteger:(unsigned long long)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(void)bindBool:(BOOL)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(void)bindDouble:(double)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(void)bindDate:(id)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(void)bindString:(id)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(BOOL)isResponseOkFromPreparedStatementExecution:(int)arg1 ;
+(void)closeExecutedPreparedStatement:(sqlite3_stmtRef)arg1 ;
+(id)dateFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(unsigned long long)unsignedIntegerFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(id)stringFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(void)bindInteger:(long long)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(unsigned long long)integerFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(BOOL)boolFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(double)doubleFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(void)bindData:(id)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(id)dataFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
@end

