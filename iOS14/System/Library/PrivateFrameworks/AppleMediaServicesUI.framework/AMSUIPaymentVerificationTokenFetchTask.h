/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>
#import <libobjc.A.dylib/AMSUIWebDelegate.h>

@protocol AMSBagProtocol;
@class ACAccount, NSDictionary, AMSProcessInfo, NSString, UIViewController, AMSUIPaymentVerificationMetrics, AMSPromise, WrappedAMSUIWebViewController;

@interface AMSUIPaymentVerificationTokenFetchTask : AMSTask <AMSBagConsumer, AMSUIWebDelegate> {

	ACAccount* _account;
	NSDictionary* _accountParameters;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	NSString* _displayName;
	unsigned long long _mode;
	UIViewController* _viewController;
	AMSUIPaymentVerificationMetrics* _metrics;
	AMSPromise* _resultPromise;
	WrappedAMSUIWebViewController* _webVC;

}

@property (nonatomic,retain) AMSUIPaymentVerificationMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) AMSPromise * resultPromise;                             //@synthesize resultPromise=_resultPromise - In the implementation block
@property (nonatomic,retain) WrappedAMSUIWebViewController * webVC;                  //@synthesize webVC=_webVC - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSDictionary * accountParameters;                     //@synthesize accountParameters=_accountParameters - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                               //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                            //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                    //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)_promiseToTryNextFlowWithResult:(id)arg1 error:(id)arg2 continuationBlock:(/*^block*/id)arg3 ;
+(id)performApplePayTask:(id)arg1 ;
+(id)performCardOnFileTask:(id)arg1 ;
+(id)accountForNetworkingFromAccount:(id)arg1 accountParameters:(id)arg2 accountStore:(id)arg3 ;
+(id)_tokenFromDictionary:(id)arg1 ;
-(void)setMetrics:(AMSUIPaymentVerificationMetrics *)arg1 ;
-(ACAccount *)account;
-(AMSUIPaymentVerificationMetrics *)metrics;
-(unsigned long long)mode;
-(AMSProcessInfo *)clientInfo;
-(WrappedAMSUIWebViewController *)webVC;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(UIViewController *)viewController;
-(id)performTask;
-(NSString *)displayName;
-(void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)webViewController:(id)arg1 didEncodeNetworkRequest:(id)arg2 ;
-(NSDictionary *)accountParameters;
-(id)performCardOnFileTaskWithFeatureFlag:(BOOL)arg1 ;
-(id)performWebFlowTask;
-(void)setResultPromise:(AMSPromise *)arg1 ;
-(AMSPromise *)resultPromise;
-(void)setWebVC:(WrappedAMSUIWebViewController *)arg1 ;
-(void)_finishPromiseWithResult:(id)arg1 error:(id)arg2 ;
-(void)setHeader:(id)arg1 withValueIn:(id)arg2 forKey:(id)arg3 onRequest:(id)arg4 ;
-(id)initWithMode:(unsigned long long)arg1 account:(id)arg2 viewController:(id)arg3 bag:(id)arg4 displayName:(id)arg5 ;
-(id)initWithMode:(unsigned long long)arg1 accountParameters:(id)arg2 viewController:(id)arg3 bag:(id)arg4 displayName:(id)arg5 ;
-(id)performApplePayTaskWithFeatureFlag:(BOOL)arg1 ;
@end

