/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <libobjc.A.dylib/PSCloudStorageOffersManagerDelegate.h>
#import <libobjc.A.dylib/AMSPurchaseResponseProtocol.h>
#import <libobjc.A.dylib/AAUIServerHook.h>

@protocol ICQServerHookDelegate, AAUIServerHookDelegate;
@class ICQOffer, NSURLSession, PSCloudStorageOffersManager, NSDictionary, RUIElement, NSTimer, NSArray, NSString, AAUIServerHookResponse, RUIObjectModel;

@interface ICQUpgradeStorageHook : NSObject <PSCloudStorageOffersManagerDelegate, AMSPurchaseResponseProtocol, AAUIServerHook> {

	ICQOffer* _offer;
	NSURLSession* _session;
	PSCloudStorageOffersManager* _cloudStorageOffersManager;
	id<ICQServerHookDelegate> _flowDelegate;
	NSDictionary* _clientInfo;
	long long _statusCode;
	long long _amsServerErrorCode;
	RUIElement* _ruiElement;
	NSTimer* _stopActivityIndicatorTimer;
	/*^block*/id _interruptedCompletion;
	BOOL _isListeningToAMS;
	NSArray* _interruptedBuyErrorCodes;
	id<AAUIServerHookDelegate> _delegate;
	/*^block*/id _completionHandler;
	NSString* _buttonId;
	NSString* _flowtype;

}

@property (nonatomic,copy) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSString * buttonId;                                      //@synthesize buttonId=_buttonId - In the implementation block
@property (nonatomic,retain) NSString * flowtype;                                      //@synthesize flowtype=_flowtype - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse; 
@property (nonatomic,retain) RUIObjectModel * objectModel; 
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id<AAUIServerHookDelegate>)delegate;
-(void)_registerForDarwinNotifications;
-(id)completionHandler;
-(void)managerDidCancel:(id)arg1 ;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)manager:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)manager:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)setDelegate:(id<AAUIServerHookDelegate>)arg1 ;
-(void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)buttonId;
-(void)setButtonId:(NSString *)arg1 ;
-(void)_stopActivityIndicator;
-(BOOL)shouldMatchElement:(id)arg1 ;
-(BOOL)shouldMatchModel:(id)arg1 ;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(AAUIServerHookResponse *)serverHookResponse;
-(id)initWithOffer:(id)arg1 flowDelegate:(id)arg2 ;
-(void)setFlowtype:(NSString *)arg1 ;
-(void)beginOsloPurchaseFlow;
-(void)_firedStopActivityIndicatorTimer:(id)arg1 ;
-(long long)offerAction;
-(id)parseParameters:(id)arg1 action:(long long)arg2 ;
-(void)beginPurchaseFlow;
-(void)mockPurchaseFlow;
-(void)beginLegacyPurchaseFlow;
-(id)upgradeStorageContextHeaderDictionary;
-(id)dummyRequestWithAccount:(id)arg1 token:(id)arg2 ;
-(id)upgradeStorageQueryDictionary;
-(void)registerAMSBagKeySets;
-(void)_enableCloudPhotoLibraryWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)flowtype;
-(id)storageContextJSONString;
-(id)upgradeStorageKeyBag;
-(id)upgradeStorageQueryKeySet;
-(void)_appGoesToBackground:(id)arg1 ;
-(void)_handlePurchaseRequestSucceededNotification;
@end

