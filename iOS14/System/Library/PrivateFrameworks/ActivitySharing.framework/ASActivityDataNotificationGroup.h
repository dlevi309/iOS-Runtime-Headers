/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/


@class NSSet;

@interface ASActivityDataNotificationGroup : NSObject {

	NSSet* _goalCompletionNotifications;
	NSSet* _achievementNotifications;
	NSSet* _workoutNotifications;

}

@property (nonatomic,retain) NSSet * goalCompletionNotifications;              //@synthesize goalCompletionNotifications=_goalCompletionNotifications - In the implementation block
@property (nonatomic,retain) NSSet * achievementNotifications;                 //@synthesize achievementNotifications=_achievementNotifications - In the implementation block
@property (nonatomic,retain) NSSet * workoutNotifications;                     //@synthesize workoutNotifications=_workoutNotifications - In the implementation block
@property (nonatomic,readonly) NSSet * allNotifications; 
-(unsigned long long)notificationCount;
-(NSSet *)allNotifications;
-(NSSet *)goalCompletionNotifications;
-(void)setGoalCompletionNotifications:(NSSet *)arg1 ;
-(NSSet *)achievementNotifications;
-(void)setAchievementNotifications:(NSSet *)arg1 ;
-(NSSet *)workoutNotifications;
-(void)setWorkoutNotifications:(NSSet *)arg1 ;
@end

