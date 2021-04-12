/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKDecimalPrecisionRule.h>

@class NSString;

@interface HKStaticDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule> {

	long long _decimalPrecision;

}

@property (assign,nonatomic) long long decimalPrecision;              //@synthesize decimalPrecision=_decimalPrecision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)numberFormatter;
-(void)setDecimalPrecision:(long long)arg1 ;
-(long long)decimalPrecision;
-(long long)maximumDecimalPrecision;
-(id)initWithDecimalPrecision:(long long)arg1 ;
-(long long)decimalPrecisionForValue:(double)arg1 ;
-(long long)minimumDecimalPrecision;
@end

