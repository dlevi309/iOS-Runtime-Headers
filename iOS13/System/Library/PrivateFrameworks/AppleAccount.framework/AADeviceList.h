/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@protocol AADeviceListDelegate;
@class AKAppleIDAuthenticationController, AIDAAccountManager, NSArray, NSError;

@interface AADeviceList : NSObject {

	AKAppleIDAuthenticationController* _authController;
	AIDAAccountManager* _accountManager;
	NSArray* _devices;
	NSError* _loadError;
	id<AADeviceListDelegate> _delegate;

}

@property (nonatomic,readonly) NSArray * devices;                                   //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) NSError * loadError;                                 //@synthesize loadError=_loadError - In the implementation block
@property (assign,nonatomic,__weak) id<AADeviceListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AADeviceListDelegate>)delegate;
-(void)setDelegate:(id<AADeviceListDelegate>)arg1 ;
-(NSArray *)devices;
-(id)_accountStore;
-(id)_appleAccount;
-(void)refreshDeviceList;
-(void)_setDeviceList:(id)arg1 loadError:(id)arg2 ;
-(void)_loadDeviceList;
-(void)_loadRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_createRequestForAccount:(id)arg1 requestHandler:(/*^block*/id)arg2 ;
-(id)_authController;
-(void)_renewCredentials;
-(id)_aidaAccount;
-(id)initWithAccountManager:(id)arg1 ;
-(NSError *)loadError;
@end

