/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSString, NSURL, NSArray, PKPaymentRemoteCredential;

@interface PKAccountWebServicePassDetailsResponse : PKAccountWebServiceResponse {

	NSString* _provisioningIdentifier;
	long long _cardType;
	long long _status;
	NSURL* _passURL;
	NSString* _passTypeIdentifier;
	NSString* _passSerialNumber;
	NSString* _ownershipTokenIdentifier;
	NSArray* _postProvisioningContent;
	PKPaymentRemoteCredential* _remoteCredential;

}

@property (nonatomic,copy,readonly) NSString * provisioningIdentifier;                  //@synthesize provisioningIdentifier=_provisioningIdentifier - In the implementation block
@property (nonatomic,readonly) long long cardType;                                      //@synthesize cardType=_cardType - In the implementation block
@property (assign,nonatomic) long long status;                                          //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSURL * passURL;                                    //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * passTypeIdentifier;                      //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * passSerialNumber;                        //@synthesize passSerialNumber=_passSerialNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier;                //@synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * postProvisioningContent;                       //@synthesize postProvisioningContent=_postProvisioningContent - In the implementation block
@property (nonatomic,retain) PKPaymentRemoteCredential * remoteCredential;              //@synthesize remoteCredential=_remoteCredential - In the implementation block
-(NSString *)ownershipTokenIdentifier;
-(NSURL *)passURL;
-(id)initWithData:(id)arg1 ;
-(long long)cardType;
-(NSString *)provisioningIdentifier;
-(NSArray *)postProvisioningContent;
-(void)setRemoteCredential:(PKPaymentRemoteCredential *)arg1 ;
-(PKPaymentRemoteCredential *)remoteCredential;
-(NSString *)passSerialNumber;
-(NSString *)passTypeIdentifier;
-(void)setStatus:(long long)arg1 ;
-(long long)status;
@end

