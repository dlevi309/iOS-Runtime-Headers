/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningLocalDeviceConfiguration.h>

@class PKAppletSubcredentialPairingSession, NSString;

@interface PKSubcredentialProvisioningOwnerConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration {

	PKAppletSubcredentialPairingSession* _session;
	NSString* _pairingPassword;
	NSString* _keyName;
	NSString* _issuerName;
	NSString* _appIdentifier;

}

@property (nonatomic,__weak,readonly) PKAppletSubcredentialPairingSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSString * pairingPassword;                                        //@synthesize pairingPassword=_pairingPassword - In the implementation block
@property (nonatomic,readonly) NSString * keyName;                                                //@synthesize keyName=_keyName - In the implementation block
@property (nonatomic,readonly) NSString * issuerName;                                             //@synthesize issuerName=_issuerName - In the implementation block
@property (nonatomic,retain) NSString * appIdentifier;                                            //@synthesize appIdentifier=_appIdentifier - In the implementation block
-(id)description;
-(PKAppletSubcredentialPairingSession *)session;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(NSString *)keyName;
-(NSString *)pairingPassword;
-(NSString *)issuerName;
-(id)transitionTable;
-(long long)startingState;
-(id)initWithSession:(id)arg1 pairingPassword:(id)arg2 keyName:(id)arg3 issuerName:(id)arg4 webService:(id)arg5 registrationMetadata:(id)arg6 ;
@end

