/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidated;
-(void)activate;
-(void)_threadMain;
-(void)setThreadFinalizeHandler:(id)arg1 ;
-(void)setThreadInitializeHandler:(id)arg1 ;
-(BOOL)_scheduleStopThread;
-(id)threadInitializeHandler;
-(id)threadFinalizeHandler;
@end

