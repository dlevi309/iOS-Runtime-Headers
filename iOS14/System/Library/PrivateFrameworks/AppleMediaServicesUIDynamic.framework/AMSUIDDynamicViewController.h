/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
*/

#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class ACAccount, AMSProcessInfo, NSDictionary, UINavigationItem, NSString;

@interface AMSUIDDynamicViewController : AMSUICommonViewController <UIViewControllerTransitioningDelegate> {

	 account;
	 anonymousMetrics;
	 bag;
	 clientInfo;
	 clientOptions;
	 delegate;
	 internalClientOptions;
	 metricsOverlay;
	 automaticErrorRetry;
	 child;
	 $__lazy_storage_$_childNavigationController;
	 objectGraph;
	 urlPromise;

}

@property (retain,nonatomic) ACAccount * account; 
@property (assign,nonatomic) BOOL anonymousMetrics; 
@property (retain,nonatomic) id<AMSBagProtocol> bag; 
@property (retain,nonatomic) AMSProcessInfo * clientInfo; 
@property (copy,nonatomic) NSDictionary * clientOptions; 
@property (assign,__weak,nonatomic) id<AMSUIDDynamicViewControllerDelegate> delegate; 
@property (copy,nonatomic) NSDictionary * internalClientOptions; 
@property (copy,nonatomic) NSDictionary * metricsOverlay; 
@property (readonly,nonatomic) UINavigationItem * navigationItem; 
@property (copy,nonatomic) NSString * title; 
-(id)animationControllerForDismissedController:(id)arg1 ;
-(ACAccount *)account;
-(UINavigationItem *)navigationItem;
-(void)viewWillLayoutSubviews;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSDictionary *)metricsOverlay;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(id)init;
-(AMSProcessInfo *)clientInfo;
-(id<AMSUIDDynamicViewControllerDelegate>)delegate;
-(void)setClientOptions:(NSDictionary *)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)willEnterForeground;
-(void)setTitle:(NSString *)arg1 ;
-(void)cancelButtonAction;
-(id<AMSBagProtocol>)bag;
-(void)didEnterBackground;
-(void)setDelegate:(id<AMSUIDDynamicViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(NSString *)title;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setAnonymousMetrics:(BOOL)arg1 ;
-(id)initWithBag:(id)arg1 URL:(id)arg2 ;
-(id)initWithBag:(id)arg1 bagValue:(id)arg2 ;
-(BOOL)anonymousMetrics;
-(NSDictionary *)clientOptions;
-(NSDictionary *)internalClientOptions;
-(void)setInternalClientOptions:(NSDictionary *)arg1 ;
-(void)reloadContentViewImpressionItems;
-(void)legacyPurchaseDidSucceed:(id)arg1 ;
@end

