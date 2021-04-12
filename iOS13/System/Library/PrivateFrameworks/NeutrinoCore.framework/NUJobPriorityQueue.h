/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSString *)name;
-(long long)count;
-(BOOL)start;
-(void)_run;
-(void)_sortIfNeeded;
-(void)_sort;
-(void)addJob:(id)arg1 ;
-(BOOL)removeJob:(id)arg1 ;
-(id)initWithName:(id)arg1 owner:(id)arg2 qos:(unsigned)arg3 ;
-(void)_addJob:(id)arg1 ;
-(BOOL)_removeJob:(id)arg1 ;
-(id)popJob;
-(id)_popJob;
-(void)_startRunning;
-(BOOL)_runNextJob;
@end

