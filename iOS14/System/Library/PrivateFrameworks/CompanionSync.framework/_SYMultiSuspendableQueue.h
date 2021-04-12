/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) PBCodable * stateForLogging; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sync:(/*^block*/id)arg1 ;
-(void)suspend;
-(BOOL)isSuspended;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(id)init;
-(void)async:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 qosClass:(unsigned)arg2 serial:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 qosClass:(unsigned)arg2 serial:(BOOL)arg3 target:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)name;
-(void)barrierAsync:(/*^block*/id)arg1 ;
-(void)barrierSync:(/*^block*/id)arg1 ;
-(PBCodable *)stateForLogging;
-(void)resume;
-(unsigned)qosClass;
-(void)dealloc;
@end

