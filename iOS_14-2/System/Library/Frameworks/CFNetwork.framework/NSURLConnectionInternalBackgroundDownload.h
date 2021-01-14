/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLConnectionInternal.h>
#import <libobjc.A.dylib/NSURLConnectionRequired.h>
#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSDownloadHandlerDelegate.h>

@class NSMutableArray, NSCountedSet, SSDownloadHandler, NSAsyncSSDownloadManager, NSTimer, NSString;

@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate> {

	CFRunLoopSourceRef _source;
	NSMutableArray* _pendingOps;
	NSCountedSet* _runloops;
	SSDownloadHandler* _handler;
	NSAsyncSSDownloadManager* _manager;
	long long _downloadIdent;
	long long _ctLast;
	BOOL _terminated;
	NSTimer* _deferredStartTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_enableLogging;
-(void)_invalidate;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)downloadHandler:(id)arg1 handleAuthenticationSession:(id)arg2 ;
-(void)start;
-(void)downloadHandler:(id)arg1 cancelSession:(id)arg2 ;
-(void)downloadHandlerDidDisconnect:(id)arg1 ;
-(BOOL)downloadHandler:(id)arg1 pauseSession:(id)arg2 ;
-(long long)_getDownloadIdent;
-(void)_updateDownloadState:(id)arg1 ;
-(void)_managerFailedToStartInTime;
-(NSString *)description;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)invokeForDelegate:(/*^block*/id)arg1 ;
-(id)initWithInfo:(const InternalInit*)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)cancel;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)dealloc;
@end

