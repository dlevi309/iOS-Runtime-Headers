/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/SOAuthorizationDelegate.h>

@class NSString;

@interface WKSOAuthorizationDelegate : NSObject <SOAuthorizationDelegate> {

	RefPtr<WebKit::SOAuthorizationSession, WTF::DumbPtrTraits<WebKit::SOAuthorizationSession> >* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSession:(RefPtr<WebKit::SOAuthorizationSession, WTF::DumbPtrTraits<WebKit::SOAuthorizationSession> >*)arg1 ;
-(void)authorizationDidNotHandle:(id)arg1 ;
-(void)authorizationDidCancel:(id)arg1 ;
-(void)authorizationDidComplete:(id)arg1 ;
-(void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2 ;
-(void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3 ;
-(void)authorization:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)authorization:(id)arg1 presentViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

