/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/SYStateLoggable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableArray, PBCodable;

@interface _SYMultiSuspendableQueue : NSObject <SYStateLoggable> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _targetQueue;
	unsigned long long _stateHandle;
	Ai _resumeCount;
	NSString* _logDescriptor;
	NSMutableArray* _latestSuspendBacktraces;
	NSMutableArray* _latestResumeBacktraces;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> targetQueue; 
@property (nonatomic,readonly) unsigned qosClass; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PBCodable * stateForLogging; 
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)resume;
-(BOOL)isSuspended;
-(void)suspend;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)async:(/*^block*/id)arg1 ;
-(unsigned)qosClass;
-(void)sync:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 qosClass:(unsigned)arg2 serial:(BOOL)arg3 target:(id)arg4 ;
-(PBCodable *)stateForLogging;
-(void)barrierAsync:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 qosClass:(unsigned)arg2 serial:(BOOL)arg3 ;
-(void)barrierSync:(/*^block*/id)arg1 ;
@end

