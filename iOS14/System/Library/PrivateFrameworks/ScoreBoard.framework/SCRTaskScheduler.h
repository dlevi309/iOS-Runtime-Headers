/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/


@protocol SCRTaskSchedulerDelegate;
#import <ScoreBoard/ScoreBoard-Structs.h>
@class SCRActivityScheduler, NSMutableDictionary;

@interface SCRTaskScheduler : NSObject {

	os_unfair_lock_s _lock;
	SCRActivityScheduler* _activityScheduler;
	NSMutableDictionary* _activityForTask;
	id<SCRTaskSchedulerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCRTaskSchedulerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SCRTaskSchedulerDelegate>)delegate;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)setDelegate:(id<SCRTaskSchedulerDelegate>)arg1 ;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(void)_performTaskWithIdentifier:(id)arg1 ;
-(void)completeTaskWithIdentifier:(id)arg1 ;
-(void)scheduleTaskWithIdentifier:(id)arg1 withConfiguration:(id)arg2 ;
@end

