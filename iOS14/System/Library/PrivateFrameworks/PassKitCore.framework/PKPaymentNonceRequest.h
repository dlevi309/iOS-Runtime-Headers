/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAugmentBaseRequest.h>

@class NSString;

@interface PKPaymentNonceRequest : PKPaymentAugmentBaseRequest {

	BOOL _useLegacyGetAPI;
	NSString* _merchantIdentifier;

}

@property (assign,nonatomic) BOOL useLegacyGetAPI;                     //@synthesize useLegacyGetAPI=_useLegacyGetAPI - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
-(id)endpointName;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(id)bodyDictionary;
-(id)_legacyGetURLRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(BOOL)useLegacyGetAPI;
-(void)setUseLegacyGetAPI:(BOOL)arg1 ;
@end

