/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(id)ringColor;
-(float)fillFraction;
-(void)setFillFraction:(float)arg1 ;
-(void)updateRingWithRingDescription:(id)arg1 ;
-(void)_enumerateColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_applyForegroundAlpha;
-(void)updateRingWithRingDescription:(id)arg1 backgroundRingAlpha:(double)arg2 ;
-(NTKColoringImageView *)fillFractionRing;
-(void)setFillFractionRing:(NTKColoringImageView *)arg1 ;
@end

