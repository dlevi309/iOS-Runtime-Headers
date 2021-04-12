/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class BCAuthenticationRequest, NSString;

@interface BCAuthenticationManager : NSObject <NSURLSessionDelegate> {

	BCAuthenticationRequest* _authenticationRequest;

}

@property (nonatomic,retain) BCAuthenticationRequest * authenticationRequest;              //@synthesize authenticationRequest=_authenticationRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BCAuthenticationRequest *)authenticationRequest;
-(id)initWithAuthenticationRequest:(id)arg1 ;
-(void)setAuthenticationRequest:(BCAuthenticationRequest *)arg1 ;
-(BOOL)processQueryItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)processFragments:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)exchangeCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accessTokenForData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchTokenWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

