/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTIndexBasedTaskScheduler.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject, NSString;

@interface AVTOrderedIndexBasedTaskScheduler : NSObject <AVTIndexBasedTaskScheduler> {

	NSMutableDictionary* _scheduledTasks;
	NSMutableArray* _scheduledTasksOrder;
	NSMutableDictionary* _readyTasks;
	NSObject*<OS_dispatch_queue> _stateLock;

}

@property (nonatomic,readonly) NSMutableDictionary * scheduledTasks;                //@synthesize scheduledTasks=_scheduledTasks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * scheduledTasksOrder;                //@synthesize scheduledTasksOrder=_scheduledTasksOrder - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * readyTasks;                    //@synthesize readyTasks=_readyTasks - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateLock;              //@synthesize stateLock=_stateLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rowBaseIndexForIndex:(id)arg1 ;
+(id)indexesForReadyTasksToRunGivenScheduledTasks:(id)arg1 order:(id)arg2 readyTasks:(id)arg3 readyRowIndex:(id)arg4 ;
-(void)cancelAllTasks;
-(id)initWithEnvironment:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateLock;
-(void)cancelTask:(/*^block*/id)arg1 ;
-(void)scheduleTask:(/*^block*/id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)taskReady:(/*^block*/id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)performStateWork:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)scheduledTasks;
-(NSMutableArray *)scheduledTasksOrder;
-(NSMutableDictionary *)readyTasks;
@end

