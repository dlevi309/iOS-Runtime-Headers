/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
-(void)setRequestedScopes:(NSArray *)arg1 ;
-(NSArray *)requestedScopes;
-(NSString *)requestedOperation;
-(void)setRequestedOperation:(NSString *)arg1 ;
@end

