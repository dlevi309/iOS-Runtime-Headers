/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(NSString *)merchantIdentifier;
-(id)initWithMerchantIdentifier:(id)arg1 domainName:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg1 ;
@end

