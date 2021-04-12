/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL, PKPaymentRemoteCredential;

@interface PKPeerPaymentPassDetailsResponse : PKPeerPaymentWebServiceResponse {

	NSString* _provisioningIdentifier;
	long long _cardType;
	long long _status;
	NSURL* _passURL;
	NSString* _passTypeIdentifier;
	NSString* _passSerialNumber;
	NSString* _ownershipTokenIdentifier;
	PKPaymentRemoteCredential* _remoteCredential;

}

@property (nonatomic,copy,readonly) NSString * provisioningIdentifier;                    //@synthesize provisioningIdentifier=_provisioningIdentifier - In the implementation block
@property (nonatomic,readonly) long long cardType;                                        //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,readonly) long long status;                                          //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSURL * passURL;                                      //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * passTypeIdentifier;                        //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * passSerialNumber;                          //@synthesize passSerialNumber=_passSerialNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier;                  //@synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier - In the implementation block
@property (nonatomic,readonly) PKPaymentRemoteCredential * remoteCredential;              //@synthesize remoteCredential=_remoteCredential - In the implementation block
-(id)initWithData:(id)arg1 ;
-(long long)status;
-(NSString *)passSerialNumber;
-(NSString *)passTypeIdentifier;
-(long long)cardType;
-(PKPaymentRemoteCredential *)remoteCredential;
-(NSURL *)passURL;
-(NSString *)ownershipTokenIdentifier;
-(NSString *)provisioningIdentifier;
@end

