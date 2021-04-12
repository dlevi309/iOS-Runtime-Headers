/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <libobjc.A.dylib/PSCloudStorageOffersManagerDelegate.h>
#import <libobjc.A.dylib/AAUIServerHook.h>

@protocol ICQServerHookDelegate, AAUIServerHookDelegate;
@class ICQOffer, NSURLSession, PSCloudStorageOffersManager, NSDictionary, NSString, AAUIServerHookResponse;

@interface ICQUpgradeStorageHook : NSObject <PSCloudStorageOffersManagerDelegate, AAUIServerHook> {

	ICQOffer* _offer;
	NSURLSession* _session;
	PSCloudStorageOffersManager* _cloudStorageOffersManager;
	/*^block*/id _completionHandler;
	id<ICQServerHookDelegate> _flowDelegate;
	NSDictionary* _clientInfo;
	long long _statusCode;
	id<AAUIServerHookDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse; 
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id<AAUIServerHookDelegate>)arg1 ;
-(void)manager:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)managerDidCancel:(id)arg1 ;
-(void)manager:(id)arg1 didCompleteWithError:(id)arg2 ;
-(BOOL)shouldMatchElement:(id)arg1 ;
-(BOOL)shouldMatchModel:(id)arg1 ;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(AAUIServerHookResponse *)serverHookResponse;
-(id)initWithOffer:(id)arg1 flowDelegate:(id)arg2 ;
-(id)parseParameters:(id)arg1 ;
-(void)beginPurchaseFlow;
-(id)upgradeStorageContextHeaderDictionary;
-(id)dummyRequestWithAccount:(id)arg1 token:(id)arg2 ;
-(id)upgradeStorageQueryDictionary;
-(id)storageContextJSONString;
-(id)upgradeStorageKeyBag;
-(id)upgradeStorageQueryKeySet;
-(void)_enableCloudPhotoLibraryWithCompletion:(/*^block*/id)arg1 ;
@end

