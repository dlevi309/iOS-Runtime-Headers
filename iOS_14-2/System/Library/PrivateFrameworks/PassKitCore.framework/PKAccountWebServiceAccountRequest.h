/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceAccountRequest : PKAccountWebServiceRequest {

	BOOL _extended;
	NSString* _accountIdentifier;
	NSURL* _baseURL;

}

@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                         //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) BOOL extended;                           //@synthesize extended=_extended - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(BOOL)extended;
-(void)setExtended:(BOOL)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

