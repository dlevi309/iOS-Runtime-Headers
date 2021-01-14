/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationBezelBaseTextView.h>

@class NTKColoringLabel;

@interface NTKStopwatchRichComplicationBezelView : NTKRichComplicationBezelBaseTextView {

	NTKColoringLabel* _textLabel;

}
-(id)init;
-(id)_createLabelViewWithFont:(id)arg1 ;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_editingDidEnd;
-(void)_applyPausedUpdate;
-(void)_updateTextProvider;
@end

