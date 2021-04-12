/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLConnectionInternal.h>
#import <libobjc.A.dylib/NSURLConnectionRequired.h>

@class NSURLAuthenticationChallenge, NSString;

@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired> {

	int _cfConnLock;
	CFURLConnectionRef _cfConn;
	CFURLAuthChallengeRef _currCFChallenge;
	NSURLAuthenticationChallenge* _currNSChallenge;
	CFStringRef _fileName;
	BOOL _shouldSkipCancelOnRelease;
	long long _totalBytes;
	long long _expectedTotalBytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_invalidate;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)cancel;
-(void)start;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(void)_setDelegateQueue:(id)arg1 ;
-(id)initWithInfo:(const InternalInit*)arg1 ;
-(id)_timingData;
-(void)cleanupChallenges;
-(void)_setShouldSkipCancelOnRelease:(BOOL)arg1 ;
-(void)invokeForDelegate:(/*^block*/id)arg1 ;
-(CFURLConnectionRef)_CFURLConnection;
-(CFURLConnectionRef)_atomic_CFURLConnection;
-(CFURLConnectionRef)_retainCFURLConnection;
-(void)sendCFChallenge:(CFURLAuthChallengeRef)arg1 toSelector:(SEL)arg2 ;
@end

