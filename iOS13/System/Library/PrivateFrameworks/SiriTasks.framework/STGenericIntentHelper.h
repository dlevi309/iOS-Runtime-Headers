/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSMutableDictionary;

@interface STGenericIntentHelper : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _handlers;
	NSObject*<OS_dispatch_queue> _siriResponseQueue;
	NSObject*<OS_dispatch_semaphore> _waitForIntentCompleteSemaphore;

}

@property (nonatomic,retain) NSMutableDictionary * handlers;                                               //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> siriResponseQueue;                               //@synthesize siriResponseQueue=_siriResponseQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> waitForIntentCompleteSemaphore;              //@synthesize waitForIntentCompleteSemaphore=_waitForIntentCompleteSemaphore - In the implementation block
+(id)sharedHelper;
-(id)init;
-(NSMutableDictionary *)handlers;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)waitForIntentCompleteSemaphore;
-(NSObject*<OS_dispatch_queue>)siriResponseQueue;
-(void)_handleIntent:(id)arg1 withTask:(id)arg2 andApplication:(id)arg3 ;
-(BOOL)_invokeHandlerForIntent:(id)arg1 ;
-(void)finishedLaunching:(BOOL)arg1 ;
-(void)handleSiriTask:(id)arg1 withApplication:(id)arg2 ;
-(void)forIntentParam:(id)arg1 predict:(id)arg2 ;
-(void)forIntent:(id)arg1 registerHandler:(/*^block*/id)arg2 ;
-(void)setSiriResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setWaitForIntentCompleteSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

