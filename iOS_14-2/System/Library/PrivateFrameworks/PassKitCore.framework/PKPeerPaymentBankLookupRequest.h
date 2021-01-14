/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentBankLookupRequest : PKPeerPaymentWebServiceRequest {

	NSString* _countryCode;
	NSString* _query;

}

@property (nonatomic,copy) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * query;                    //@synthesize query=_query - In the implementation block
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)query;
-(NSString *)countryCode;
-(id)initWithCountryCode:(id)arg1 query:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(void)setQuery:(NSString *)arg1 ;
@end

