/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)baseURL;
-(NSString *)query;
-(NSString *)countryCode;
-(void)setQuery:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
@end

