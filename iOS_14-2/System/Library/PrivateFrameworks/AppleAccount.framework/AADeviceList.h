/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)devices;
-(id)_accountStore;
-(id)_authController;
-(id<AADeviceListDelegate>)delegate;
-(NSError *)loadError;
-(void)refreshDeviceList;
-(void)_setDeviceList:(id)arg1 loadError:(id)arg2 ;
-(void)_loadDeviceList;
-(void)_loadRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_createRequestForAccount:(id)arg1 requestHandler:(/*^block*/id)arg2 ;
-(void)_renewCredentials;
-(id)initWithAccountManager:(id)arg1 ;
-(void)setDelegate:(id<AADeviceListDelegate>)arg1 ;
-(id)_aidaAccount;
-(id)_appleAccount;
@end

