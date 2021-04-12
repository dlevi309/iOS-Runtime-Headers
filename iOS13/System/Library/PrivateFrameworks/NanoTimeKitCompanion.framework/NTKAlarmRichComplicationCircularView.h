/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class UIImageView, NTKColoringLabel, NTKRichComplicationRingProgressView;

@interface NTKAlarmRichComplicationCircularView : NTKRichComplicationCircularBaseView {

	UIImageView* _idleImageView;
	NTKColoringLabel* _timeLabel;
	NTKColoringLabel* _designatorLabel;
	UIImageView* _snoozeImageView;
	NTKRichComplicationRingProgressView* _snoozeProgressView;
	SCD_Struct_NT22 _layoutConstants;
	unsigned long long _layout;

}
-(id)init;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
@end

