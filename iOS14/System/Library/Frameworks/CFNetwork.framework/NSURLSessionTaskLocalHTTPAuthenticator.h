/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/NSURLSessionTaskHTTPAuthenticator.h>

@protocol NSURLSessionAppleIDContext;
@interface NSURLSessionTaskLocalHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator {

	id<NSURLSessionAppleIDContext> _externalAuthenticator;

}

@property (copy) id<NSURLSessionAppleIDContext> externalAuthenticator;              //@synthesize externalAuthenticator=_externalAuthenticator - In the implementation block
-(id<NSURLSessionAppleIDContext>)externalAuthenticator;
-(void)setExternalAuthenticator:(id<NSURLSessionAppleIDContext>)arg1 ;
-(void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithSessionAuthenticator:(id)arg1 statusCodes:(id)arg2 ;
-(void)dealloc;
@end

