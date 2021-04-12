/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIViewControllerKeyboardContextTransitioning.h>

@protocol UIInputViewAnimationHost;
@class UIView, _UIViewControllerTransitionContext, UIKBViewTreeSnapshotter, NSString;

@interface UIInputViewAnimationControllerViewControllerContext : NSObject <UIViewControllerKeyboardContextTransitioning> {

	_UIViewControllerTransitionContext* _context;
	id<UIInputViewAnimationHost> _host;
	UIView* _from;
	UIView* _to;
	CGRect _fromRect;
	CGRect _toRect;
	UIKBViewTreeSnapshotter* _kbSnapshotter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UIViewControllerContextTransitioning> mainContext; 
@property (nonatomic,readonly) UIView * fromKeyboard; 
@property (nonatomic,readonly) CGRect fromKeyboardFrame; 
@property (nonatomic,readonly) UIView * toKeyboard; 
@property (nonatomic,readonly) CGRect toKeyboardFrame; 
+(id)contextWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4 ;
-(void)dealloc;
-(UIView *)toKeyboard;
-(UIView *)fromKeyboard;
-(CGRect)fromKeyboardFrame;
-(CGRect)toKeyboardFrame;
-(id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4 ;
-(id<UIViewControllerContextTransitioning>)mainContext;
@end

