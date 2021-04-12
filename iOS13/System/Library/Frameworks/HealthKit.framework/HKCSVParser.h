/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKCSVParser : NSObject
+(id)newlineCharacterSet;
+(id)commaCharacterSet;
+(id)quoteCharacterSet;
+(id)terminatingCharacterSet;
+(BOOL)newlineWithScanner:(id)arg1 ;
+(id)fieldWithScanner:(id)arg1 error:(out id*)arg2 ;
+(id)recordWithScanner:(id)arg1 error:(out id*)arg2 ;
+(id)parseCSV:(id)arg1 error:(out id*)arg2 ;
@end

