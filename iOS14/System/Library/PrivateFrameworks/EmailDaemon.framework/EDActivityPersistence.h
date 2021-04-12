/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDActivityHookResponder;
#import <EmailDaemon/EmailDaemon-Structs.h>
@class NSMutableDictionary;

@interface EDActivityPersistence : NSObject {

	NSMutableDictionary* _currentActivities;
	os_unfair_lock_s _lock;
	id<EDActivityHookResponder> _activityHookResponder;

}

@property (nonatomic,retain) id<EDActivityHookResponder> activityHookResponder;              //@synthesize activityHookResponder=_activityHookResponder - In the implementation block
-(void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3 ;
-(void)activityWithID:(id)arg1 setCompletedCount:(long long)arg2 totalCount:(long long)arg3 ;
-(void)activityWithID:(id)arg1 finishedWithError:(id)arg2 ;
-(id)currentActivities;
-(id)initWithHookResponder:(id)arg1 ;
-(id)startActivityOfType:(long long)arg1 userInfo:(id)arg2 ;
-(id<EDActivityHookResponder>)activityHookResponder;
-(void)setActivityHookResponder:(id<EDActivityHookResponder>)arg1 ;
@end

