/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TUPluggable.h>

@class NSArray;

@interface NewsSubscription.PaywallViewController : UIViewController <TUPluggable> {

	 delegate;
	 isBeingUsedAsPlugin;
	 pluggableDelegate;
	 viewProvider;
	 eventHandler;
	 paywallModel;
	 paywallViewportSizeProvider;
	 paywallHeightProvider;
	 purchasingSpinnerViewControllerFactory;
	 $__lazy_storage_$_verificationSpinner;
	 purchasePresenter;
	 sceneStateManager;
	 webOptinFlowManager;

}

@property (readonly,nonatomic) long long pluginItemCount; 
@property (readonly,nonatomic) long long pluginVisibleItemCount; 
@property (readonly,nonatomic) NSArray * pluginItemIdentifiers; 
@property (assign,nonatomic) BOOL isBeingUsedAsPlugin; 
@property (assign,__weak,nonatomic) id<TUPluggableDelegate> pluggableDelegate; 
-(long long)pluginItemCount;
-(long long)pluginVisibleItemCount;
-(NSArray *)pluginItemIdentifiers;
-(void)initializeWithCompletion:(/*^block*/id)arg1 ;
-(void)relayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id<TUPluggableDelegate>)pluggableDelegate;
-(void)setPluggableDelegate:(id<TUPluggableDelegate>)arg1 ;
-(BOOL)isBeingUsedAsPlugin;
-(void)setIsBeingUsedAsPlugin:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

