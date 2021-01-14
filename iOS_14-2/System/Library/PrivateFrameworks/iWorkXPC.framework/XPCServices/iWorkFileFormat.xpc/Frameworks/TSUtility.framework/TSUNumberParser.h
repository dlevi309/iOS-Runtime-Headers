/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSUNumberParser : NSObject
+(BOOL)numberValueFromString:(id)arg1 locale:(id)arg2 outDoubleValue:(double*)arg3 ;
+(BOOL)numberValueFromString:(id)arg1 locale:(id)arg2 outDecimalValue:(TSUDecimal*)arg3 outValueType:(int*)arg4 outCurrencyCode:(id*)arg5 ;
+(BOOL)numberValueFromString:(id)arg1 locale:(id)arg2 outDecimalValue:(TSUDecimal*)arg3 ;
+(BOOL)numberValueFromString:(id)arg1 locale:(id)arg2 outDoubleValue:(double*)arg3 outValueType:(int*)arg4 ;
+(BOOL)numberValueFromString:(id)arg1 locale:(id)arg2 outDoubleValue:(double*)arg3 outValueType:(int*)arg4 outCurrencyCode:(id*)arg5 ;
+(BOOL)numberValueFromString:(id)arg1 locale:(id)arg2 outDecimalValue:(TSUDecimal*)arg3 outValueType:(int*)arg4 ;
@end

