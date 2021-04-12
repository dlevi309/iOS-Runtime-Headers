/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@interface HUElasticSliderValueNormalizationOptions : NSObject {

	BOOL _applyStepValue;
	BOOL _applyMinimumVisualRangeSpan;
	unsigned long long _boundingStrategy;

}

@property (assign,nonatomic) unsigned long long boundingStrategy;              //@synthesize boundingStrategy=_boundingStrategy - In the implementation block
@property (assign,nonatomic) BOOL applyStepValue;                              //@synthesize applyStepValue=_applyStepValue - In the implementation block
@property (assign,nonatomic) BOOL applyMinimumVisualRangeSpan;                 //@synthesize applyMinimumVisualRangeSpan=_applyMinimumVisualRangeSpan - In the implementation block
-(id)init;
-(void)setBoundingStrategy:(unsigned long long)arg1 ;
-(void)setApplyStepValue:(BOOL)arg1 ;
-(void)setApplyMinimumVisualRangeSpan:(BOOL)arg1 ;
-(unsigned long long)boundingStrategy;
-(BOOL)applyMinimumVisualRangeSpan;
-(BOOL)applyStepValue;
@end

