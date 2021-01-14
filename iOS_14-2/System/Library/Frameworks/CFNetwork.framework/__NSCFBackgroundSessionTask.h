/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/NSURLSessionTask.h>
#import <libobjc.A.dylib/NSURLSessionTaskSubclass.h>

@class NSError, NSString;

@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass> {

	BOOL _sentCancel;
	BOOL _sentDidFinish;
	NSError* _immediateError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTaskDescription:(id)arg1 ;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_timingData;
-(id)initWithBackgroundTask:(id)arg1 ;
-(void)_onqueue_adjustPoolPriority;
-(void)_onqueue_suspend;
-(void)_onqueue_adjustPriorityHint:(float)arg1 incremental:(BOOL)arg2 ;
-(void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1 ;
-(void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3 ;
-(void)_onqueue_adjustLoadingPoolPriority;
-(void)_onSessionQueue_disavow;
-(void)_onqueue_didReceiveResponse:(id)arg1 ;
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)set_discretionaryOverride:(long long)arg1 ;
-(id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3 ;
-(void)_onqueue_resume;
-(void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)_onqueue_cancel;
-(void)dealloc;
@end

