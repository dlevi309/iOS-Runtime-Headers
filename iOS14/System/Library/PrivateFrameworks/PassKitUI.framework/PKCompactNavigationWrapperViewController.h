/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKWrapperViewController.h>

@class PKCompactNavigationContainedNavigationController;

@interface PKCompactNavigationWrapperViewController : PKWrapperViewController {

	PKCompactNavigationContainedNavigationController* _parentNavigationController;
	double _navigationBarHeight;
	BOOL _needsInitialLayout;
	BOOL _hasExplicitTargetNavigationHeight;
	double _targetNavigationHeight;

}

@property (nonatomic,readonly) BOOL needsInitialLayout;                             //@synthesize needsInitialLayout=_needsInitialLayout - In the implementation block
@property (nonatomic,readonly) BOOL hasExplicitTargetNavigationHeight;              //@synthesize hasExplicitTargetNavigationHeight=_hasExplicitTargetNavigationHeight - In the implementation block
@property (assign,nonatomic) double targetNavigationHeight;                         //@synthesize targetNavigationHeight=_targetNavigationHeight - In the implementation block
-(void)viewWillLayoutSubviews;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(BOOL)needsInitialLayout;
-(id)initWithWrappedViewController:(id)arg1 type:(long long)arg2 ;
-(CGRect)_wrappedViewControllerFrameForBounds:(CGRect)arg1 navigationBarHeight:(double)arg2 ;
-(id)initWithWrappedViewController:(id)arg1 parentNavigationController:(id)arg2 ;
-(void)setTargetNavigationHeight:(double)arg1 ;
-(BOOL)hasExplicitTargetNavigationHeight;
-(double)targetNavigationHeight;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(void)viewDidLayoutSubviews;
@end

