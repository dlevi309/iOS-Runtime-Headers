/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class NSString, IDSAuthenticationCertificate, NSData;

@interface IDSAuthenticationCertificateSignature : NSObject {

	NSString* _subscriptionIdentifier;
	IDSAuthenticationCertificate* _authenticationCertificate;
	NSData* _signature;
	NSString* _serverVerifiableEncoding;

}

@property (nonatomic,readonly) NSString * subscriptionIdentifier;                                     //@synthesize subscriptionIdentifier=_subscriptionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * serverVerifiableEncoding;                                   //@synthesize serverVerifiableEncoding=_serverVerifiableEncoding - In the implementation block
@property (nonatomic,readonly) IDSAuthenticationCertificate * authenticationCertificate;              //@synthesize authenticationCertificate=_authenticationCertificate - In the implementation block
@property (nonatomic,readonly) NSData * signature;                                                    //@synthesize signature=_signature - In the implementation block
-(id)description;
-(NSData *)signature;
-(NSString *)subscriptionIdentifier;
-(NSString *)serverVerifiableEncoding;
-(id)initWithSubscriptionIdentifier:(id)arg1 authenticationCertificate:(id)arg2 signature:(id)arg3 serverVerifiableEncoding:(id)arg4 ;
-(IDSAuthenticationCertificate *)authenticationCertificate;
@end

