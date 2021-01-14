/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <ScoreBoard/SCRActivityScheduler.h>

@protocol OS_dispatch_queue;
@class _DASScheduler, NSObject, NSMutableDictionary;

@interface SCRDASActivityScheduler : SCRActivityScheduler {

	os_unfair_lock_s _lock;
	_DASScheduler* _scheduler;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSMutableDictionary* _lock_activityData;

}
-(id)succinctDescription;
-(void)submitActivity:(id)arg1 ;
-(id)_popActivityWithIdentifier:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)completeActivityWithIdentifier:(id)arg1 ;
-(void)_activityWithIdentifierDidBegin:(id)arg1 ;
-(id)description;
-(void)cancelActivityWithIdentifier:(id)arg1 ;
-(void)_enqueueActivityWithMetadata:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)_dasActivityForActivity:(id)arg1 ;
-(void)dealloc;
@end

