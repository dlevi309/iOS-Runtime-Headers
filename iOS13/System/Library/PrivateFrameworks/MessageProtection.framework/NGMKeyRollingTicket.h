/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@class NGMFullPrekey, NGMPublicDeviceIdentity;

@interface NGMKeyRollingTicket : NSObject {

	NGMFullPrekey* _prekey;
	NGMPublicDeviceIdentity* _registrationInfo;

}

@property (nonatomic,readonly) NGMFullPrekey * prekey;                                  //@synthesize prekey=_prekey - In the implementation block
@property (nonatomic,readonly) NGMPublicDeviceIdentity * registrationInfo;              //@synthesize registrationInfo=_registrationInfo - In the implementation block
-(id)identityData;
-(NGMPublicDeviceIdentity *)registrationInfo;
-(id)prekeyData;
-(id)publicDeviceIdentity;
-(id)initTicketWithSigningKey:(id)arg1 error:(id*)arg2 ;
-(NGMFullPrekey *)prekey;
@end

