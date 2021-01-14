/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentRemoteCredentialsRequest : PKPaymentWebServiceRequest {

	BOOL _includeMetadata;
	NSString* _productIdentifier;
	long long _credentialType;

}

@property (assign,nonatomic) BOOL includeMetadata;                    //@synthesize includeMetadata=_includeMetadata - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) long long credentialType;                //@synthesize credentialType=_credentialType - In the implementation block
-(BOOL)includeMetadata;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(void)setCredentialType:(long long)arg1 ;
-(NSString *)productIdentifier;
-(void)setIncludeMetadata:(BOOL)arg1 ;
-(long long)credentialType;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
@end

