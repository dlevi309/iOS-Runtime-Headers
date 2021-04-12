/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPanGestureRecognizer, UIView, NSString;

@interface _UIContextMenuContainerView : UIView <UIGestureRecognizerDelegate> {

	UIPanGestureRecognizer* _panGestureRecognizer;
	BOOL _dismissesInstantly;
	UIView* _contentWrapperView;
	/*^block*/id _dismissalHandler;

}

@property (assign,nonatomic) BOOL dismissesInstantly;                         //@synthesize dismissesInstantly=_dismissesInstantly - In the implementation block
@property (assign,nonatomic,__weak) UIView * contentWrapperView;              //@synthesize contentWrapperView=_contentWrapperView - In the implementation block
@property (nonatomic,copy) id dismissalHandler;                               //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)didMoveToWindow;
-(void)_swipeToDismiss:(id)arg1 ;
-(BOOL)dismissesInstantly;
-(UIView *)contentWrapperView;
-(void)_attemptDismiss:(BOOL)arg1 ;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
-(void)setDismissesInstantly:(BOOL)arg1 ;
-(void)setContentWrapperView:(UIView *)arg1 ;
@end

