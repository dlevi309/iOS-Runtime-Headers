/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, MTVisualStylingProvider, UITapGestureRecognizer;

@interface WGExplanatoryView : UIView {

	UIImageView* _glyphView;
	UILabel* _label;
	MTVisualStylingProvider* _visualStylingProvider;
	UITapGestureRecognizer* _tapGesture;

}
-(void)willMoveToSuperview:(id)arg1 ;
-(void)layoutSubviews;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_updateVisualStylingIfNecessary;
-(void)_invalidateVisualStyling;
-(void)_configureGlyphViewWithGlyph:(id)arg1 ;
-(void)_configureExplanationLabelWithExplanation:(id)arg1 ;
-(id)initWithGlyph:(id)arg1 andExplanation:(id)arg2 ;
@end

