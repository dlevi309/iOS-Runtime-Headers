/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationDialView, UIImageView, NTKColoringLabel, NSDate, NSNumber;

@interface NTKTimerRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {

	NTKRichComplicationDialView* _backgroundDial;
	NTKRichComplicationDialView* _foregroundDial;
	UIImageView* _timerImageView;
	NTKColoringLabel* _timerLabel;
	NSDate* _timerDate;
	double _timerDuration;
	NSNumber* _updateToken;
	SCD_Struct_NT21 _layoutConstants;

}
-(void)_pause;
-(void)layoutSubviews;
-(void)_resume;
-(void)dealloc;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_applyPausedUpdate;
-(void)_updateDialProgress;
-(void)makeBackgroundTransparent;
@end

