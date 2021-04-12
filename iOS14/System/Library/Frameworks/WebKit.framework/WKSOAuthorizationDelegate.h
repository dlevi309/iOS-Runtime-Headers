/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)authorizationDidCancel:(id)arg1 ;
-(void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3 ;
-(void)authorizationDidNotHandle:(id)arg1 ;
-(void)setSession:(RefPtr<WebKit::SOAuthorizationSession, WTF::DumbPtrTraits<WebKit::SOAuthorizationSession> >*)arg1 ;
-(void)authorizationDidComplete:(id)arg1 ;
-(void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2 ;
-(void)authorization:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)authorization:(id)arg1 presentViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

