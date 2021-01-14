/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceStatementActionRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSString* _statementIdentifier;
	long long _action;

}

@property (nonatomic,copy) NSString * accountIdentifier;                //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                           //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * statementIdentifier;              //@synthesize statementIdentifier=_statementIdentifier - In the implementation block
@property (assign,nonatomic) long long action;                          //@synthesize action=_action - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(NSString *)statementIdentifier;
-(void)setStatementIdentifier:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

