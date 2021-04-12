/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFOAuth2AuthorizationSession.h>

@class NSArray, NSURL, NSString;

@interface WFDropboxAppAuthorizationSession : NSObject <WFOAuth2AuthorizationSession> {

	NSArray* _authorizationURLs;
	NSURL* _successURI;
	NSURL* _cancelURI;
	NSString* _clientID;
	NSString* _state;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSString * clientID;                      //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) NSString * state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSArray * authorizationURLs;              //@synthesize authorizationURLs=_authorizationURLs - In the implementation block
@property (nonatomic,readonly) NSURL * successURI;                       //@synthesize successURI=_successURI - In the implementation block
@property (nonatomic,readonly) NSURL * cancelURI;                        //@synthesize cancelURI=_cancelURI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)state;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSString *)clientID;
-(BOOL)resumeSessionWithURL:(id)arg1 ;
-(id)initWithClientID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)authorizationURLs;
-(NSURL *)successURI;
-(NSURL *)cancelURI;
@end

