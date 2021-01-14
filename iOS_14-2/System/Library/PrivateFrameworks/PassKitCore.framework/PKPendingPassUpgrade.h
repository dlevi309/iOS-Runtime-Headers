/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKPassUpgradeRequest, NSMutableArray, PKPaymentPass, NSURL;

@interface PKPendingPassUpgrade : NSObject {

	BOOL _appletDidUpgrade;
	BOOL _webRequestFinished;
	BOOL _requiresAppletUpgrade;
	BOOL _passUpgradeInProgress;
	PKPassUpgradeRequest* _upgradeRequest;
	NSMutableArray* _completionHandlers;
	PKPaymentPass* _upgradedPass;
	NSURL* _upgradePassURL;

}

@property (nonatomic,readonly) PKPassUpgradeRequest * upgradeRequest;              //@synthesize upgradeRequest=_upgradeRequest - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;                  //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (assign,nonatomic) BOOL webRequestFinished;                              //@synthesize webRequestFinished=_webRequestFinished - In the implementation block
@property (assign,nonatomic) BOOL requiresAppletUpgrade;                           //@synthesize requiresAppletUpgrade=_requiresAppletUpgrade - In the implementation block
@property (assign,nonatomic) BOOL appletDidUpgrade;                                //@synthesize appletDidUpgrade=_appletDidUpgrade - In the implementation block
@property (nonatomic,retain) PKPaymentPass * upgradedPass;                         //@synthesize upgradedPass=_upgradedPass - In the implementation block
@property (nonatomic,copy) NSURL * upgradePassURL;                                 //@synthesize upgradePassURL=_upgradePassURL - In the implementation block
@property (assign,nonatomic) BOOL passUpgradeInProgress;                           //@synthesize passUpgradeInProgress=_passUpgradeInProgress - In the implementation block
@property (nonatomic,readonly) BOOL upgradeIsComplete; 
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(BOOL)requiresAppletUpgrade;
-(NSURL *)upgradePassURL;
-(BOOL)passUpgradeInProgress;
-(PKPassUpgradeRequest *)upgradeRequest;
-(BOOL)webRequestFinished;
-(NSMutableArray *)completionHandlers;
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setWebRequestFinished:(BOOL)arg1 ;
-(void)setRequiresAppletUpgrade:(BOOL)arg1 ;
-(void)setUpgradePassURL:(NSURL *)arg1 ;
-(BOOL)appletDidUpgrade;
-(void)setPassUpgradeInProgress:(BOOL)arg1 ;
-(BOOL)upgradeIsComplete;
-(void)setUpgradedPass:(PKPaymentPass *)arg1 ;
-(PKPaymentPass *)upgradedPass;
-(void)setAppletDidUpgrade:(BOOL)arg1 ;
@end

