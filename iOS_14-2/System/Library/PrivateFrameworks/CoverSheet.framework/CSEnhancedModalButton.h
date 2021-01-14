/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)_buttonPressed:(id)arg1 ;
-(void)_buttonReleased:(id)arg1 ;
-(void)_addVisualEffect;
-(void)_addBackgroundHighlightView;
@end

