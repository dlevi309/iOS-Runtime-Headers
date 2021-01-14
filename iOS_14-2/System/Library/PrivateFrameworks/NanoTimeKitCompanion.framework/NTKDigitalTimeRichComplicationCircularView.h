/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseTextView.h>

@class NTKDigitalTimeLabel;

@interface NTKDigitalTimeRichComplicationCircularView : NTKRichComplicationCircularBaseTextView {

	NTKDigitalTimeLabel* _timeLabel;

}
-(id)init;
-(void)updateDate;
-(void)dealloc;
-(id)_createLabelViewWithFont:(id)arg1 ;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)timeOffsetChanged;
@end

