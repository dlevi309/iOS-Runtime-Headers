/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class UIImageView, NTKColoringLabel, NTKRichComplicationRingProgressView;

@interface NTKAlarmRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {

	UIImageView* _idleImageView;
	NTKColoringLabel* _timeLabel;
	NTKColoringLabel* _designatorLabel;
	UIImageView* _snoozeImageView;
	NTKRichComplicationRingProgressView* _snoozeProgressView;
	SCD_Struct_NT25 _layoutConstants;
	unsigned long long _layout;

}
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(void)layoutSubviews;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)makeBackgroundTransparent;
@end

