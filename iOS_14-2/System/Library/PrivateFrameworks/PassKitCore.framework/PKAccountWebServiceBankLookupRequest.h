/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceBankLookupRequest : PKAccountWebServiceRequest {

	NSString* _countryCode;
	NSString* _query;
	NSURL* _baseURL;

}

@property (nonatomic,copy) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * query;                    //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                   //@synthesize baseURL=_baseURL - In the implementation block
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)query;
-(NSString *)countryCode;
-(NSURL *)baseURL;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

