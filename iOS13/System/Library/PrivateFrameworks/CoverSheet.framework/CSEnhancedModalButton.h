/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIVisualEffectView, UIView;

@interface CSEnhancedModalButton : UIButton {

	UIVisualEffectView* _effectView;
	UIView* _highlightedView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)_buttonReleased:(id)arg1 ;
-(void)_addVisualEffect;
-(void)_addBackgroundHighlightView;
@end

