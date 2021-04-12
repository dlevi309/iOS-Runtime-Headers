/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)query;
-(NSString *)countryCode;
-(void)setQuery:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithCountryCode:(id)arg1 query:(id)arg2 ;
@end

