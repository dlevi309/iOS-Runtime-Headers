/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationBezelBaseTextView.h>

@class NTKColoringLabel;

@interface NTKStopwatchRichComplicationBezelView : NTKRichComplicationBezelBaseTextView {

	NTKColoringLabel* _textLabel;

}
-(id)init;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)_createLabelViewWithFont:(id)arg1 ;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_editingDidEnd;
-(void)_applyPausedUpdate;
-(void)_updateTextProvider;
@end

