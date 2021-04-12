/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceTermsRequest : PKAccountWebServiceRequest {

	BOOL _termsAccepted;
	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSString* _termsIdentifier;

}

@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                         //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * termsIdentifier;                //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (assign,nonatomic) BOOL termsAccepted;                      //@synthesize termsAccepted=_termsAccepted - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSString *)termsIdentifier;
-(void)setTermsIdentifier:(NSString *)arg1 ;
-(BOOL)termsAccepted;
-(void)setTermsAccepted:(BOOL)arg1 ;
@end

