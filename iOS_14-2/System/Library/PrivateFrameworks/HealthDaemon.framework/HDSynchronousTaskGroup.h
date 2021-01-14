/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSynchronousTaskGroupDelegate;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSMutableArray;

@interface HDSynchronousTaskGroup : NSObject {

	Ai _taskCount;
	os_unfair_lock_s _lock;
	BOOL _success;
	NSMutableArray* _errors;
	id<HDSynchronousTaskGroupDelegate> _delegate;
	/*^block*/id _didFinish;

}

@property (readonly) int taskCount; 
@property (__weak) id<HDSynchronousTaskGroupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) id didFinish;                                               //@synthesize didFinish=_didFinish - In the implementation block
-(id)init;
-(id<HDSynchronousTaskGroupDelegate>)delegate;
-(void)setDelegate:(id<HDSynchronousTaskGroupDelegate>)arg1 ;
-(void)setDidFinish:(id)arg1 ;
-(id)didFinish;
-(void)finishTask;
-(void)beginTask;
-(void)failTaskWithError:(id)arg1 ;
-(int)taskCount;
@end

