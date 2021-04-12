/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <ScoreBoard/SCRActivityScheduler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SCRIsolatedActivityScheduler : SCRActivityScheduler {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSMutableDictionary* _lock_timerForTask;

}
-(id)succinctDescription;
-(void)submitActivity:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)completeActivityWithIdentifier:(id)arg1 ;
-(id)description;
-(void)cancelActivityWithIdentifier:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)_timerFiredForActivity:(id)arg1 ;
@end

