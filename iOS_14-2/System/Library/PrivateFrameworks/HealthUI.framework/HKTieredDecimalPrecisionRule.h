/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKDecimalPrecisionRule.h>

@class NSString;

@interface HKTieredDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)percentageFormatter;
-(id)numberFormatter;
-(long long)maximumDecimalPrecision;
-(long long)decimalPrecisionForValue:(double)arg1 ;
-(long long)minimumDecimalPrecision;
@end

