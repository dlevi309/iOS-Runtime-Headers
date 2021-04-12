/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIView, UIResponder, UIWindow;

@interface UINavigationTransitionView : UIView <NSCoding> {

	UIView* _fromView;
	UIView* _toView;
	long long _transition;
	UIResponder* _firstResponderToRestore;
	UIWindow* _originalWindow;
	double _fromViewAlpha;
	unsigned _isTransitioning : 1;
	unsigned _popoverWillCleanUpNavigationTransition : 1;
	unsigned _usesRoundedCorners : 1;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) UIView * fromView;                                                //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic) BOOL usesRoundedCorners; 
@property (readonly) BOOL isTransitioning; 
@property (assign,nonatomic) BOOL popoverWillCleanUpNavigationTransition; 
+(double)defaultDurationForTransition:(long long)arg1 ;
-(void)_cleanupTransition;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_navigationTransitionDidStop;
-(BOOL)transition:(long long)arg1 toView:(id)arg2 ;
-(BOOL)transition:(long long)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(UIView *)fromView;
-(id)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isTransitioningFromView:(id)arg1 ;
-(void)setUsesRoundedCorners:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)_notifyDelegateTransitionDidStopWithContext:(id)arg1 ;
-(void)_cleanupTransitionFromPopover;
-(BOOL)isTransitioning;
-(BOOL)usesRoundedCorners;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)popoverWillCleanUpNavigationTransition;
-(void)setPopoverWillCleanUpNavigationTransition:(BOOL)arg1 ;
-(void)dealloc;
@end

