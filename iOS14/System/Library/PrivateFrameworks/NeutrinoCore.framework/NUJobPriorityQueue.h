/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NUJobQueue, NSObject, NSString;

@interface NUJobPriorityQueue : NSObject {

	NSMutableArray* _jobs;
	BOOL _needSort;
	NUJobQueue* _owner;
	NSObject*<OS_dispatch_queue> _runQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	BOOL _isRunning;
	NSString* _name;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) long long count; 
-(void)_run;
-(id)init;
-(BOOL)start;
-(void)_sort;
-(long long)count;
-(id)popJob;
-(void)_sortIfNeeded;
-(NSString *)name;
-(id)description;
-(id)_popJob;
-(void)addJob:(id)arg1 ;
-(void)_addJob:(id)arg1 ;
-(id)initWithName:(id)arg1 owner:(id)arg2 qos:(unsigned)arg3 ;
-(BOOL)removeJob:(id)arg1 ;
-(BOOL)_removeJob:(id)arg1 ;
-(void)_startRunning;
-(BOOL)_runNextJob;
@end

