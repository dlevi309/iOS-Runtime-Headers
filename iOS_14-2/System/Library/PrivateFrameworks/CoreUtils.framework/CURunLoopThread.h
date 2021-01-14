/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSMutableArray, NSObject, NSString;

@interface CURunLoopThread : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	CFRunLoopRef _runLoop;
	BOOL _runLoopValid;
	NSMutableArray* _startBlocks;
	BOOL _threadRunning;
	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	/*^block*/id _threadInitializeHandler;
	/*^block*/id _threadFinalizeHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id threadInitializeHandler;                                //@synthesize threadInitializeHandler=_threadInitializeHandler - In the implementation block
@property (nonatomic,copy) id threadFinalizeHandler;                                  //@synthesize threadFinalizeHandler=_threadFinalizeHandler - In the implementation block
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)_scheduleStopThread;
-(id)threadInitializeHandler;
-(id)threadFinalizeHandler;
-(void)_threadMain;
-(void)performBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)setThreadFinalizeHandler:(id)arg1 ;
-(void)setThreadInitializeHandler:(id)arg1 ;
-(void)_invalidated;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)dealloc;
@end

