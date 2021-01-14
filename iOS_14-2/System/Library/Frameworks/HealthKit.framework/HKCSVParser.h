/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

