/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@interface DDURLifier : NSObject
+(id)urlMatchesForString:(id)arg1 ;
+(id)urlMatchesForString:(id)arg1 includingTel:(BOOL)arg2 ;
+(id)urlMatchesForString:(id)arg1 phoneNumberTypes:(unsigned long long)arg2 ;
+(id)urlMatchesForString:(id)arg1 usingScanner:(DDScannerRef)arg2 withPhoneNumberTypes:(unsigned long long)arg3 referenceDate:(id)arg4 timeZone:(id)arg5 storingResultsIn:(id)arg6 ;
+(BOOL)urlIfyTextNode:(id)arg1 inNode:(id)arg2 forMatches:(id)arg3 ;
+(BOOL)urlIfyNode:(id)arg1 phoneNumberTypes:(unsigned long long)arg2 ;
+(BOOL)urlIfyNode:(id)arg1 ;
+(id)urlIfyNode:(id)arg1 usingScanner:(DDScannerRef)arg2 phoneNumberTypes:(unsigned long long)arg3 ;
+(id)urlIfyNode:(id)arg1 usingScanner:(DDScannerRef)arg2 phoneNumberTypes:(unsigned long long)arg3 withReferenceDate:(id)arg4 andTimeZone:(id)arg5 ;
@end

