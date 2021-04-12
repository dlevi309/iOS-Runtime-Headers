/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>

@protocol OS_dispatch_queue;
@class NSObject, SSDownloadAuthenticationSession, NSString;

@interface SSDownloadAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSDownloadAuthenticationSession* _session;

}

@property (readonly) SSDownloadAuthenticationSession * authenticationSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAuthenticationSession:(id)arg1 ;
-(SSDownloadAuthenticationSession *)authenticationSession;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)dealloc;
@end

