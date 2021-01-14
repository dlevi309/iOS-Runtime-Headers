/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUINavigationController.h>
#import <libobjc.A.dylib/SKUIScrollingTabBarBottomInsetAwareContent.h>
#import <libobjc.A.dylib/SKUIObservableNavigationStack.h>

@protocol SKUINavigationStackObserver;
@class NSString;

@interface SKUIScrollingTabNavigationController : SKUINavigationController <SKUIScrollingTabBarBottomInsetAwareContent, SKUIObservableNavigationStack> {

	id<SKUINavigationStackObserver> _navigationStackObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SKUINavigationStackObserver> navigationStackObserver;                                 //@synthesize navigationStackObserver=_navigationStackObserver - In the implementation block
@property (assign,getter=isShowingNavigationStackRootContent,nonatomic) BOOL showingNavigationStackRootContent; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(double)_scrollViewBottomContentInsetForViewController:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollingTabBarBottomInsetAdjustmentDidChange;
-(void)popToNavigationStackRootContentAnimated:(BOOL)arg1 withBehavior:(long long)arg2 ;
-(id<SKUINavigationStackObserver>)navigationStackObserver;
-(void)setNavigationStackObserver:(id<SKUINavigationStackObserver>)arg1 ;
-(BOOL)isShowingNavigationStackRootContent;
-(void)_observedNavigationStackDidChange;
@end

