/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSString *)fundingSourceIdentifier;
-(void)setFundingSourceIdentifier:(NSString *)arg1 ;
@end

