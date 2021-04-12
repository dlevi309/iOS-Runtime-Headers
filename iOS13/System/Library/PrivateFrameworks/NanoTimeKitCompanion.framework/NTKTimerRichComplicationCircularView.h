/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationDialView, UIImageView, NTKColoringLabel, NSDate, NSNumber;

@interface NTKTimerRichComplicationCircularView : NTKRichComplicationCircularBaseView {

	NTKRichComplicationDialView* _backgroundDial;
	NTKRichComplicationDialView* _foregroundDial;
	UIImageView* _timerImageView;
	NTKColoringLabel* _timerLabel;
	NSDate* _timerDate;
	double _timerDuration;
	NSNumber* _updateToken;
	SCD_Struct_NT35 _layoutConstants;

}
-(id)init;
-(void)dealloc;
-(void)_resume;
-(void)layoutSubviews;
-(void)_pause;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_applyPausedUpdate;
-(void)_updateDialProgress;
@end

