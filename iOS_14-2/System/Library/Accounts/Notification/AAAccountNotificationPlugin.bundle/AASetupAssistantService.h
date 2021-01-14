/*
* Generated on Thursday, January 14, 2021 at 2:29:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/AAAccountNotificationPlugin.bundle/AAAccountNotificationPlugin
*/


#import <AAAccountNotificationPlugin/AAAccountNotificationPlugin-Structs.h>
@class NSOperationQueue, NSString, ACAccount, AASigningSession, NSDate;

@interface AASetupAssistantService : NSObject {

	NSOperationQueue* _requesterQueue;
	NSString* _appleID;
	NSString* _password;
	NSString* _emailChoice;
	ACAccount* _account;
	OpaqueCFHTTPCookieStorageRef _cookieStorage;
	AASigningSession* _signingSession;
	NSDate* _signingSessionCreationDate;

}

@property (nonatomic,copy) NSString * appleID;                  //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * password;                 //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * emailChoice;              //@synthesize emailChoice=_emailChoice - In the implementation block
+(id)urlConfiguration;
+(void)resetURLConfiguration;
-(id)init;
-(NSString *)password;
-(id)_signingSession;
-(void)setPassword:(NSString *)arg1 ;
-(void)setCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)createAppleIDWithParameters:(id)arg1 handlerWithResponse:(/*^block*/id)arg2 ;
-(NSString *)emailChoice;
-(void)upgradeiCloudTermsIfNecessaryWithCustomHeaders:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithAppleID:(id)arg1 password:(id)arg2 ;
-(void)authenticateWithHandler:(/*^block*/id)arg1 ;
-(void)createAppleIDWithParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setEmailChoice:(NSString *)arg1 ;
-(void)updateAppleIDWithParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setupDelegateAccountsWithParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)loginDelegatesWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)upgradeiCloudTermsIfNecessaryWithHandler:(/*^block*/id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)shouldPresentUpgradeFlowWithCompletion:(/*^block*/id)arg1 ;
-(void)_doHSADeviceProvisioningWithDSID:(id)arg1 data:(id)arg2 ;
-(void)_doHSADeviceProvisioningSynchronizationWithDSID:(id)arg1 data:(id)arg2 ;
-(void)_doHSADeviceReprovisioningWithDSID:(id)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(void)downloadURLConfiguration:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

