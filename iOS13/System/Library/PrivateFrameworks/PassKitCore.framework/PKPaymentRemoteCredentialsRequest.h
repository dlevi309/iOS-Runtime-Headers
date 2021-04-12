/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentRemoteCredentialsRequest : PKPaymentWebServiceRequest {

	BOOL _includeMetadata;
	NSString* _productIdentifier;
	long long _credentialType;

}

@property (assign,nonatomic) BOOL includeMetadata;                      //@synthesize includeMetadata=_includeMetadata - In the implementation block
@property (assign,nonatomic) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) long long credentialType;                  //@synthesize credentialType=_credentialType - In the implementation block
-(long long)credentialType;
-(void)setCredentialType:(long long)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(void)setIncludeMetadata:(BOOL)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(BOOL)includeMetadata;
@end

