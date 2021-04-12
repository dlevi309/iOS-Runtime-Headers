/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@class HFNumberValueConstraints, HUElasticSliderValueNormalizationOptions;

@interface HUElasticSliderValueNormalizer : NSObject {

	BOOL _hasSecondaryValue;
	HFNumberValueConstraints* _minValueConstraints;
	HFNumberValueConstraints* _maxValueConstraints;
	HUElasticSliderValueNormalizationOptions* _options;
	CGSize _currentValueRange;

}

@property (nonatomic,retain) HFNumberValueConstraints * minValueConstraints;                  //@synthesize minValueConstraints=_minValueConstraints - In the implementation block
@property (nonatomic,retain) HFNumberValueConstraints * maxValueConstraints;                  //@synthesize maxValueConstraints=_maxValueConstraints - In the implementation block
@property (assign,nonatomic) CGSize currentValueRange;                                        //@synthesize currentValueRange=_currentValueRange - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryValue;                                          //@synthesize hasSecondaryValue=_hasSecondaryValue - In the implementation block
@property (nonatomic,retain) HUElasticSliderValueNormalizationOptions * options;              //@synthesize options=_options - In the implementation block
-(HUElasticSliderValueNormalizationOptions *)options;
-(void)setOptions:(HUElasticSliderValueNormalizationOptions *)arg1 ;
-(void)setHasSecondaryValue:(BOOL)arg1 ;
-(BOOL)hasSecondaryValue;
-(CGSize)normalizeRange:(CGSize)arg1 ;
-(double)normalizeValue:(double)arg1 ofType:(unsigned long long)arg2 ;
-(id)initWithCurrentValueRange:(CGSize)arg1 hasSecondaryValue:(BOOL)arg2 ;
-(void)setMaxValueConstraints:(HFNumberValueConstraints *)arg1 ;
-(void)setMinValueConstraints:(HFNumberValueConstraints *)arg1 ;
-(double)_rubberBandValue:(double)arg1 ofType:(unsigned long long)arg2 ;
-(id)_effectiveConstraintsForValueOfType:(unsigned long long)arg1 boundRange:(BOOL)arg2 ;
-(id)_originalConstraintsForValueType:(unsigned long long)arg1 ;
-(CGSize)currentValueRange;
-(HFNumberValueConstraints *)minValueConstraints;
-(HFNumberValueConstraints *)maxValueConstraints;
-(void)setCurrentValueRange:(CGSize)arg1 ;
@end

