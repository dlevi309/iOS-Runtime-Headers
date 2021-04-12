/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_updateVisualStylingIfNecessary;
-(void)_invalidateVisualStyling;
-(void)_configureGlyphViewWithGlyph:(id)arg1 ;
-(void)_configureExplanationLabelWithExplanation:(id)arg1 ;
-(id)initWithGlyph:(id)arg1 andExplanation:(id)arg2 ;
@end

