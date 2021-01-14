/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceDeleteFundingSourceRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSString* _fundingSourceIdentifier;

}

@property (nonatomic,copy) NSString * accountIdentifier;                      //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                 //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSString * fundingSourceIdentifier;              //@synthesize fundingSourceIdentifier=_fundingSourceIdentifier - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(NSString *)fundingSourceIdentifier;
-(void)setFundingSourceIdentifier:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

