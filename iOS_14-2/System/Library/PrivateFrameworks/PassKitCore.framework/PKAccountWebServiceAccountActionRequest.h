/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, PKAccountAction, NSURL;

@interface PKAccountWebServiceAccountActionRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	PKAccountAction* _action;
	NSURL* _baseURL;

}

@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) PKAccountAction * action;                //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                         //@synthesize baseURL=_baseURL - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(PKAccountAction *)action;
-(void)setAction:(PKAccountAction *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

