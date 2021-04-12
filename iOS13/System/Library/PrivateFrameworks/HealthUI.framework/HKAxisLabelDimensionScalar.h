/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSNumberFormatter *)formatter;
-(void)setFormatter:(NSNumberFormatter *)arg1 ;
-(id)stringForLocation:(id)arg1 ;
-(double)niceStepSizeLargerThan:(double)arg1 ;
-(double)ticksPerStepSize:(double)arg1 ;
-(void)setStepSizeForLabels:(double)arg1 ;
-(NSString *)negativeZeroString;
-(void)setNegativeZeroString:(NSString *)arg1 ;
@end

