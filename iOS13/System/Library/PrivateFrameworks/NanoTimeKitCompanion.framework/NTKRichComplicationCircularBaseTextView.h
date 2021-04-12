/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@protocol NTKColoringView;
@class UIView;

@interface NTKRichComplicationCircularBaseTextView : NTKRichComplicationCircularBaseView {

	UIView*<NTKColoringView> _label;
	double _labelScale;

}
-(id)init;
-(id)label;
-(void)layoutSubviews;
-(id)_labelFont;
-(void)setForegroundColor:(id)arg1 ;
-(id)_createLabelViewWithFont:(id)arg1 ;
-(void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2 ;
-(void)_layoutLabel;
-(void)_setLayoutTransformToView:(id)arg1 origin:(CGPoint)arg2 centerScale:(double)arg3 ;
@end

