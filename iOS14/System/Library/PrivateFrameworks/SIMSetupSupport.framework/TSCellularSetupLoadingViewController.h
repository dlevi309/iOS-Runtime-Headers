/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class CoreTelephonyClient, NSURL, NSDictionary, TSCellularSetupLoadingView, NSString, CTXPCServiceSubscriptionContext;

@interface TSCellularSetupLoadingViewController : UIViewController <TSSetupFlowItem> {

	CoreTelephonyClient* _coreTelephonyClient;
	BOOL _isRemotePlan;
	id<TSSIMSetupFlowDelegate> _delegate;
	NSURL* _carrierURL;
	NSDictionary* _postdata;
	TSCellularSetupLoadingView* _loadingView;
	NSString* _carrierName;
	CTXPCServiceSubscriptionContext* _subscriptionContext;

}

@property (nonatomic,retain) NSURL * carrierURL;                                                 //@synthesize carrierURL=_carrierURL - In the implementation block
@property (nonatomic,retain) NSDictionary * postdata;                                            //@synthesize postdata=_postdata - In the implementation block
@property (nonatomic,retain) TSCellularSetupLoadingView * loadingView;                           //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) NSString * carrierName;                                             //@synthesize carrierName=_carrierName - In the implementation block
@property (assign,nonatomic) CTXPCServiceSubscriptionContext * subscriptionContext;              //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (assign,nonatomic) BOOL isRemotePlan;                                                  //@synthesize isRemotePlan=_isRemotePlan - In the implementation block
@property (__weak) id<TSSIMSetupFlowDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TSSIMSetupFlowDelegate>)delegate;
-(NSString *)carrierName;
-(void)setSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(void)cancelButtonTapped;
-(void)viewDidLoad;
-(TSCellularSetupLoadingView *)loadingView;
-(void)setLoadingView:(TSCellularSetupLoadingView *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setCarrierName:(NSString *)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)navBarTitle;
-(void)setIsRemotePlan:(BOOL)arg1 ;
-(void)setupNavigationBarItems;
-(BOOL)isRemotePlan;
-(void)setupCoreTelephonyClientForRemoteSignup;
-(void)_showFailureAlert:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCarrierURL:(NSURL *)arg1 ;
-(void)setPostdata:(NSDictionary *)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 carrier:(id)arg2 isRemotePlan:(BOOL)arg3 ;
-(NSURL *)carrierURL;
-(NSDictionary *)postdata;
@end

