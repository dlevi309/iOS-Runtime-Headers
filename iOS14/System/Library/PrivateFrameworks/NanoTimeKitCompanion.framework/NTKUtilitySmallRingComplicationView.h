/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilityCircularComplicationView.h>

@class NTKColoringImageView;

@interface NTKUtilitySmallRingComplicationView : NTKUtilityCircularComplicationView {

	BOOL _didDrawOnce;
	float _fillFraction;
	NTKColoringImageView* _fillFractionRing;

}

@property (nonatomic,retain) NTKColoringImageView * fillFractionRing;              //@synthesize fillFractionRing=_fillFractionRing - In the implementation block
@property (assign,nonatomic) float fillFraction;                                   //@synthesize fillFraction=_fillFraction - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)ringColor;
-(void)layoutSubviews;
-(void)setFillFraction:(float)arg1 ;
-(float)fillFraction;
-(void)updateRingWithRingDescription:(id)arg1 ;
-(void)_enumerateColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_applyForegroundAlpha;
-(void)updateRingWithRingDescription:(id)arg1 backgroundRingAlpha:(double)arg2 ;
-(NTKColoringImageView *)fillFractionRing;
-(void)setFillFractionRing:(NTKColoringImageView *)arg1 ;
@end

