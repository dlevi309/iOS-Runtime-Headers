/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@class HFNumberValueConstraints, HUElasticSliderValueNormalizationOptions;

@interface HUElasticSliderValueNormalizer : NSObject {

	BOOL _hasSecondaryValue;
	HFNumberValueConstraints* _minValueConstraints;
	HFNumberValueConstraints* _maxValueConstraints;
	HUElasticSliderValueNormalizationOptions* _options;
	CGPoint _currentValueRange;

}

@property (nonatomic,retain) HFNumberValueConstraints * minValueConstraints;                  //@synthesize minValueConstraints=_minValueConstraints - In the implementation block
@property (nonatomic,retain) HFNumberValueConstraints * maxValueConstraints;                  //@synthesize maxValueConstraints=_maxValueConstraints - In the implementation block
@property (assign,nonatomic) CGPoint currentValueRange;                                       //@synthesize currentValueRange=_currentValueRange - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryValue;                                          //@synthesize hasSecondaryValue=_hasSecondaryValue - In the implementation block
@property (nonatomic,retain) HUElasticSliderValueNormalizationOptions * options;              //@synthesize options=_options - In the implementation block
-(HUElasticSliderValueNormalizationOptions *)options;
-(void)setOptions:(HUElasticSliderValueNormalizationOptions *)arg1 ;
-(void)setHasSecondaryValue:(BOOL)arg1 ;
-(BOOL)hasSecondaryValue;
-(CGPoint)normalizeRange:(CGPoint)arg1 ;
-(double)normalizeValue:(double)arg1 ofType:(unsigned long long)arg2 ;
-(id)initWithCurrentValueRange:(CGPoint)arg1 hasSecondaryValue:(BOOL)arg2 ;
-(void)setMaxValueConstraints:(HFNumberValueConstraints *)arg1 ;
-(void)setMinValueConstraints:(HFNumberValueConstraints *)arg1 ;
-(double)_rubberBandValue:(double)arg1 ofType:(unsigned long long)arg2 ;
-(id)_effectiveConstraintsForValueOfType:(unsigned long long)arg1 boundRange:(BOOL)arg2 ;
-(id)_originalConstraintsForValueType:(unsigned long long)arg1 ;
-(CGPoint)currentValueRange;
-(HFNumberValueConstraints *)minValueConstraints;
-(HFNumberValueConstraints *)maxValueConstraints;
-(void)setCurrentValueRange:(CGPoint)arg1 ;
@end

