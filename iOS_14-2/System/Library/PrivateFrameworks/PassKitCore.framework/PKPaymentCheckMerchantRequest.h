/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentCheckMerchantRequest : PKPaymentWebServiceRequest {

	NSString* _merchantIdentifier;
	NSString* _domainName;

}

@property (nonatomic,copy) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * domainName;                      //@synthesize domainName=_domainName - In the implementation block
-(NSString *)domainName;
-(void)setDomainName:(NSString *)arg1 ;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(id)initWithMerchantIdentifier:(id)arg1 domainName:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg1 ;
@end

