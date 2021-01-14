/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString;

@interface TSCardView : UIView <UIGestureRecognizerDelegate> {

	 onTap;
	 onCloseTap;
	 expandAccessibilityActionHandler;
	 expandAccessibilityAction;
	 collapseAccessibilityActionHandler;
	 collapseAccessibilityAction;
	 contentView;
	 clippingView;
	 grabberView;
	 contentOverlayButtonView;
	 barView;
	 titleView;
	 layout;
	 isFullscreen;

}

@property (copy,nonatomic) NSString * accessibilityLabel; 
-(BOOL)expandCard:(id)arg1 ;
-(BOOL)collapseCard:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)toggleExpansion;
-(id)initWithCoder:(id)arg1 ;
@end

