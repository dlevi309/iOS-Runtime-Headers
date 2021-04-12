/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSPredicate;

@interface HFUserNotificationServiceSettings : NSObject <NSCopying, NSMutableCopying> {

	BOOL _notificationsEnabled;
	BOOL _doorbellNotificationsEnabled;
	BOOL _motionNotificationsEnabled;
	BOOL _smartDetectionNotificationsEnabled;
	NSPredicate* _notificationCondition;
	NSPredicate* _smartCameraNotificationCondition;

}

@property (assign,getter=areNotificationsEnabled,nonatomic) BOOL notificationsEnabled;                                          //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (assign,getter=areDoorbellNotificationsEnabled,nonatomic) BOOL doorbellNotificationsEnabled;                          //@synthesize doorbellNotificationsEnabled=_doorbellNotificationsEnabled - In the implementation block
@property (assign,getter=areMotionNotificationsEnabled,nonatomic) BOOL motionNotificationsEnabled;                              //@synthesize motionNotificationsEnabled=_motionNotificationsEnabled - In the implementation block
@property (assign,getter=areSmartDetectionNotificationsEnabled,nonatomic) BOOL smartDetectionNotificationsEnabled;              //@synthesize smartDetectionNotificationsEnabled=_smartDetectionNotificationsEnabled - In the implementation block
@property (nonatomic,retain) NSPredicate * notificationCondition;                                                               //@synthesize notificationCondition=_notificationCondition - In the implementation block
@property (nonatomic,retain) NSPredicate * smartCameraNotificationCondition;                                                    //@synthesize smartCameraNotificationCondition=_smartCameraNotificationCondition - In the implementation block
+(id)combinedConditionForBulletinBoardNotifications:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)areNotificationsEnabled;
-(NSPredicate *)notificationCondition;
-(void)setNotificationCondition:(NSPredicate *)arg1 ;
-(void)setSmartCameraNotificationCondition:(NSPredicate *)arg1 ;
-(id)applySettingsToBulletinBoardNotifications:(id)arg1 ;
-(id)initWithNotificationsEnabled:(BOOL)arg1 condition:(id)arg2 smartCameraNotificationCondition:(id)arg3 ;
-(BOOL)areSmartDetectionNotificationsEnabled;
-(NSPredicate *)smartCameraNotificationCondition;
-(BOOL)areDoorbellNotificationsEnabled;
-(BOOL)areMotionNotificationsEnabled;
-(void)setDoorbellNotificationsEnabled:(BOOL)arg1 ;
-(void)setSmartDetectionNotificationsEnabled:(BOOL)arg1 ;
-(void)setMotionNotificationsEnabled:(BOOL)arg1 ;
-(id)initWithBulletinBoardNotifications:(id)arg1 ;
@end

