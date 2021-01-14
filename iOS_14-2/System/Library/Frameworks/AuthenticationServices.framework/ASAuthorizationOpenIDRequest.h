/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/ASAuthorizationRequest.h>

@class NSArray, NSString;

@interface ASAuthorizationOpenIDRequest : ASAuthorizationRequest {

	NSArray* _requestedScopes;
	NSString* _state;
	NSString* _nonce;
	NSString* _requestedOperation;

}

@property (nonatomic,copy) NSArray * requestedScopes;                  //@synthesize requestedScopes=_requestedScopes - In the implementation block
@property (nonatomic,copy) NSString * state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * nonce;                           //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSString * requestedOperation;              //@synthesize requestedOperation=_requestedOperation - In the implementation block
-(void)setNonce:(NSString *)arg1 ;
-(void)setRequestedScopes:(NSArray *)arg1 ;
-(NSArray *)requestedScopes;
-(NSString *)requestedOperation;
-(void)setRequestedOperation:(NSString *)arg1 ;
-(void)setState:(NSString *)arg1 ;
-(NSString *)state;
-(NSString *)nonce;
@end

