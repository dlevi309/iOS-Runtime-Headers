/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) id<UIViewControllerContextTransitioning> mainContext; 
@property (nonatomic,readonly) UIView * fromKeyboard; 
@property (nonatomic,readonly) CGRect fromKeyboardFrame; 
@property (nonatomic,readonly) UIView * toKeyboard; 
@property (nonatomic,readonly) CGRect toKeyboardFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4 ;
-(id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4 ;
-(UIView *)toKeyboard;
-(UIView *)fromKeyboard;
-(CGRect)fromKeyboardFrame;
-(id<UIViewControllerContextTransitioning>)mainContext;
-(CGRect)toKeyboardFrame;
-(void)dealloc;
@end

