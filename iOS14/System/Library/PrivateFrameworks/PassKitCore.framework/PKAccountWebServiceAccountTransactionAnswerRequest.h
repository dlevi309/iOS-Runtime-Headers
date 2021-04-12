/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, NSDictionary;

@interface PKAccountWebServiceAccountTransactionAnswerRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSString* _transactionIdentifier;
	NSDictionary* _answers;

}

@property (nonatomic,copy) NSString * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                               //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * answers;                        //@synthesize answers=_answers - In the implementation block
-(NSURL *)baseURL;
-(NSDictionary *)answers;
-(NSString *)accountIdentifier;
-(void)setAnswers:(NSDictionary *)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSString *)transactionIdentifier;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

