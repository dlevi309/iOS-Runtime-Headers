/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isManual;
-(id)initWithTransitionDirection:(long long)arg1 view:(id)arg2 manual:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)description;
-(UIView *)view;
-(BOOL)isCompatibleWithTransitionInDirection:(long long)arg1 ;
@end

