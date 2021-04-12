/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/

#import <libobjc.A.dylib/ASWebAuthenticationPresentationContextProviding.h>

@class ASWebAuthenticationSession, NSString;

@interface BridgedWebAuthenticationSession : NSObject <ASWebAuthenticationPresentationContextProviding> {

	ASWebAuthenticationSession* _authenticationSession;

}

@property (nonatomic,retain) ASWebAuthenticationSession * authenticationSession;              //@synthesize authenticationSession=_authenticationSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)start;
-(ASWebAuthenticationSession *)authenticationSession;
-(id)presentationAnchorForWebAuthenticationSession:(id)arg1 ;
-(id)initWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAuthenticationSession:(ASWebAuthenticationSession *)arg1 ;
@end

