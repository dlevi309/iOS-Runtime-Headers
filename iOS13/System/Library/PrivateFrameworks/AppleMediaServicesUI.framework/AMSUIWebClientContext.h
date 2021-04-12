/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@protocol AMSUIWebActionRunnerDelegate, AMSBagProtocol;
@class ACAccount, AMSProcessInfo, AMSUIWebJSDataProvider, AMSUIWebFlowController, NSString, AMSMetrics, AMSURLSession, AMSUIWebPageViewController;

@interface AMSUIWebClientContext : NSObject {

	BOOL _loadUsingWebKit;
	ACAccount* _account;
	id<AMSUIWebActionRunnerDelegate> _actionDelegate;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	AMSUIWebJSDataProvider* _dataProvider;
	AMSUIWebFlowController* _flowController;
	NSString* _logKey;
	AMSMetrics* _metrics;
	AMSURLSession* _URLSession;
	AMSUIWebPageViewController* _webPage;

}

@property (nonatomic,retain) ACAccount * account;                                                 //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIWebActionRunnerDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                                              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                                         //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) AMSUIWebJSDataProvider * dataProvider;                               //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) AMSUIWebFlowController * flowController;                             //@synthesize flowController=_flowController - In the implementation block
@property (assign,nonatomic) BOOL loadUsingWebKit;                                                //@synthesize loadUsingWebKit=_loadUsingWebKit - In the implementation block
@property (nonatomic,retain) NSString * logKey;                                                   //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) AMSMetrics * metrics;                                                //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) AMSURLSession * URLSession;                                          //@synthesize URLSession=_URLSession - In the implementation block
@property (assign,nonatomic,__weak) AMSUIWebPageViewController * webPage;                         //@synthesize webPage=_webPage - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(AMSMetrics *)metrics;
-(void)setMetrics:(AMSMetrics *)arg1 ;
-(id<AMSUIWebActionRunnerDelegate>)actionDelegate;
-(void)setActionDelegate:(id<AMSUIWebActionRunnerDelegate>)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)setWebPage:(AMSUIWebPageViewController *)arg1 ;
-(void)setURLSession:(AMSURLSession *)arg1 ;
-(AMSURLSession *)URLSession;
-(void)setDataProvider:(AMSUIWebJSDataProvider *)arg1 ;
-(AMSUIWebJSDataProvider *)dataProvider;
-(id<AMSBagProtocol>)bag;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(AMSUIWebFlowController *)flowController;
-(void)setFlowController:(AMSUIWebFlowController *)arg1 ;
-(AMSUIWebPageViewController *)webPage;
-(BOOL)loadUsingWebKit;
-(void)setLoadUsingWebKit:(BOOL)arg1 ;
@end

