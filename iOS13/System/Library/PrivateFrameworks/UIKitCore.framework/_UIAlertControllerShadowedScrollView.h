/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class _UIAlertControllerGradientView;

@interface _UIAlertControllerShadowedScrollView : UIScrollView {

	_UIAlertControllerGradientView* _shadowView;
	BOOL _shouldPinToBottomOnResize;

}

@property (assign,nonatomic) BOOL shouldPinToBottomOnResize;              //@synthesize shouldPinToBottomOnResize=_shouldPinToBottomOnResize - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(BOOL)shouldPinToBottomOnResize;
-(CGRect)_boundsForPinningToBottomWithNewBounds:(CGRect)arg1 ;
-(void)_updateScrollabilityAndShadow;
-(void)setShouldPinToBottomOnResize:(BOOL)arg1 ;
@end

