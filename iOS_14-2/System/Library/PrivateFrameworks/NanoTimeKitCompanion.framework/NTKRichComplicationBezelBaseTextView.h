/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationBezelView.h>

@protocol NTKColoringView;
@class UIView;

@interface NTKRichComplicationBezelBaseTextView : NTKRichComplicationBezelView {

	UIView*<NTKColoringView> _label;
	double _labelRotationInDegree;
	double _labelScale;

}
-(void)setForegroundColor:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id)_labelFont;
-(id)label;
-(id)_createLabelViewWithFont:(id)arg1 ;
-(void)_editingDidEnd;
-(void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2 ;
-(void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 ;
-(void)_layoutLabel;
@end

