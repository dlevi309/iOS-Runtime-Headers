/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITransitionState.h>

@class UIView, UIViewController;

@interface _UIQueuingScrollViewState : _UITransitionState {

	UIView* _view;
	UIViewController* _viewController;
	BOOL _manual;

}

@property (nonatomic,readonly) UIView * view;                            //@synthesize view=_view - In the implementation block
@property (getter=isManual,nonatomic,readonly) BOOL manual;              //@synthesize manual=_manual - In the implementation block
-(id)description;
-(UIView *)view;
-(BOOL)isCompatibleWithTransitionInDirection:(long long)arg1 ;
-(id)initWithTransitionDirection:(long long)arg1 view:(id)arg2 manual:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isManual;
@end

