/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContentSize:(CGSize)arg1 ;
-(CGRect)_boundsForPinningToBottomWithNewBounds:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_updateScrollabilityAndShadow;
-(void)setShouldPinToBottomOnResize:(BOOL)arg1 ;
-(BOOL)shouldPinToBottomOnResize;
@end

