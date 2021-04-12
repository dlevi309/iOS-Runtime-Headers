/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTTaskScheduler.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface AVTSerialTaskScheduler : NSObject <AVTTaskScheduler> {

	NSMutableArray* _priorityTasks;
	NSMutableArray* _backlogTasks;
	NSObject*<OS_dispatch_queue> _stateLock;
	long long _order;

}

@property (nonatomic,readonly) NSMutableArray * priorityTasks;                      //@synthesize priorityTasks=_priorityTasks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * backlogTasks;                       //@synthesize backlogTasks=_backlogTasks - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateLock;              //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,readonly) long long order;                                     //@synthesize order=_order - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fifoSchedulerWithEnvironment:(id)arg1 ;
+(/*^block*/id)nextTaskToRunForPriorityTasks:(id)arg1 backlogTasks:(id)arg2 order:(long long)arg3 ;
+(id)lifoSchedulerWithEnvironment:(id)arg1 ;
-(long long)order;
-(void)scheduleTask:(/*^block*/id)arg1 ;
-(void)cancelAllTasks;
-(NSObject*<OS_dispatch_queue>)stateLock;
-(void)cancelTask:(/*^block*/id)arg1 ;
-(void)lowerTaskPriority:(/*^block*/id)arg1 ;
-(void)performStateWork:(/*^block*/id)arg1 ;
-(id)initWithEnvironment:(id)arg1 order:(long long)arg2 ;
-(NSMutableArray *)priorityTasks;
-(NSMutableArray *)backlogTasks;
-(void)startTask:(/*^block*/id)arg1 ;
-(void)didCompleteTask:(/*^block*/id)arg1 ;
@end

