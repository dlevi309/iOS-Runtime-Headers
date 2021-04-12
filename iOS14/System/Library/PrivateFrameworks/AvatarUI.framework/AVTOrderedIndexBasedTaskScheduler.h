/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)performStateWork:(/*^block*/id)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateLock;
-(NSMutableDictionary *)readyTasks;
-(void)cancelAllTasks;
-(void)scheduleTask:(/*^block*/id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)cancelTask:(/*^block*/id)arg1 ;
-(void)taskReady:(/*^block*/id)arg1 forIndex:(unsigned long long)arg2 ;
-(NSMutableDictionary *)scheduledTasks;
-(NSMutableArray *)scheduledTasksOrder;
@end

