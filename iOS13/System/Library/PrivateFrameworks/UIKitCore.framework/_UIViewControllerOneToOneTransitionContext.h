/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIViewControllerTransitionContext.h>

@class UIView, UIViewController;

@interface _UIViewControllerOneToOneTransitionContext : _UIViewControllerTransitionContext {

	BOOL _isToViewSet;
	BOOL _isFromViewSet;
	UIView* _toView;
	UIView* _fromView;
	BOOL __isDeferred;
	UIViewController* _fromViewController;
	UIViewController* _toViewController;
	CGRect _fromStartFrame;
	CGRect _fromEndFrame;
	CGRect _toEndFrame;
	CGRect _toStartFrame;

}

@property (setter=_setFromViewController:,nonatomic,retain) UIViewController * fromViewController;              //@synthesize fromViewController=_fromViewController - In the implementation block
@property (setter=_setToViewController:,nonatomic,retain) UIViewController * toViewController;                  //@synthesize toViewController=_toViewController - In the implementation block
@property (setter=_setFromView:,getter=_fromView,nonatomic,retain) UIView * fromView; 
@property (setter=_setToView:,getter=_toView,nonatomic,retain) UIView * toView; 
@property (assign,setter=_setFromStartFrame:,nonatomic) CGRect fromStartFrame;                                  //@synthesize fromStartFrame=_fromStartFrame - In the implementation block
@property (assign,setter=_setFromEndFrame:,nonatomic) CGRect fromEndFrame;                                      //@synthesize fromEndFrame=_fromEndFrame - In the implementation block
@property (assign,setter=_setToEndFrame:,nonatomic) CGRect toEndFrame;                                          //@synthesize toEndFrame=_toEndFrame - In the implementation block
@property (assign,setter=_setToStartFrame:,nonatomic) CGRect toStartFrame;                                      //@synthesize toStartFrame=_toStartFrame - In the implementation block
@property (assign,setter=_setIsDeferred:,nonatomic) BOOL _isDeferred;                                           //@synthesize _isDeferred=__isDeferred - In the implementation block
-(void)dealloc;
-(id)viewControllerForKey:(id)arg1 ;
-(id)_toView;
-(id)_fromView;
-(id)viewForKey:(id)arg1 ;
-(void)_setFromViewController:(id)arg1 ;
-(void)_setToViewController:(id)arg1 ;
-(void)_setIsDeferred:(BOOL)arg1 ;
-(BOOL)_isDeferred;
-(void)_setFromView:(id)arg1 ;
-(void)_setToView:(id)arg1 ;
-(void)_setFromStartFrame:(CGRect)arg1 ;
-(void)_setFromEndFrame:(CGRect)arg1 ;
-(void)_setToEndFrame:(CGRect)arg1 ;
-(void)_setToStartFrame:(CGRect)arg1 ;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(UIViewController *)fromViewController;
-(UIViewController *)toViewController;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(CGRect)toStartFrame;
-(CGRect)fromStartFrame;
-(CGRect)toEndFrame;
-(CGRect)fromEndFrame;
@end

