/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setForegroundColor:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id)_labelFont;
-(id)label;
-(id)_createLabelViewWithFont:(id)arg1 ;
-(void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2 ;
-(void)_layoutLabel;
-(void)_setLayoutTransformToView:(id)arg1 origin:(CGPoint)arg2 centerScale:(double)arg3 ;
@end

