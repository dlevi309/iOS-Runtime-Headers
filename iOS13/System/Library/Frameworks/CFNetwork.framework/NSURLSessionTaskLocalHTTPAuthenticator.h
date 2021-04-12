/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/NSURLSessionTaskHTTPAuthenticator.h>

@protocol NSURLSessionAppleIDContext;
@interface NSURLSessionTaskLocalHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator {

	id<NSURLSessionAppleIDContext> _externalAuthenticator;

}

@property (copy) id<NSURLSessionAppleIDContext> externalAuthenticator;              //@synthesize externalAuthenticator=_externalAuthenticator - In the implementation block
-(void)dealloc;
-(void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithSessionAuthenticator:(id)arg1 statusCodes:(id)arg2 ;
-(id<NSURLSessionAppleIDContext>)externalAuthenticator;
-(void)setExternalAuthenticator:(id<NSURLSessionAppleIDContext>)arg1 ;
@end

