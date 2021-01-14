/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKAxisLabelDimension.h>

@class NSNumberFormatter, NSString;

@interface HKAxisLabelDimensionScalar : NSObject <HKAxisLabelDimension> {

	NSNumberFormatter* _formatter;
	NSString* _negativeZeroString;

}

@property (nonatomic,retain) NSNumberFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) NSString * negativeZeroString;              //@synthesize negativeZeroString=_negativeZeroString - In the implementation block
+(long long)_fractionDigitsForStep:(double)arg1 ;
-(NSNumberFormatter *)formatter;
-(id)init;
-(void)setFormatter:(NSNumberFormatter *)arg1 ;
-(id)stringForLocation:(id)arg1 ;
-(double)niceStepSizeLargerThan:(double)arg1 ;
-(double)ticksPerStepSize:(double)arg1 ;
-(void)setStepSizeForLabels:(double)arg1 ;
-(NSString *)negativeZeroString;
-(void)setNegativeZeroString:(NSString *)arg1 ;
@end

