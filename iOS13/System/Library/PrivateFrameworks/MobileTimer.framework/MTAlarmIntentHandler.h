/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class MTAlarmManager;

@interface MTAlarmIntentHandler : NSObject {

	MTAlarmManager* _alarmManager;

}

@property (nonatomic,readonly) MTAlarmManager * alarmManager;              //@synthesize alarmManager=_alarmManager - In the implementation block
+(id)createUserInfoWithIntentName:(id)arg1 alarmIDString:(id)arg2 time:(id)arg3 label:(id)arg4 ;
-(MTAlarmManager *)alarmManager;
-(id)initWithAlarmManager:(id)arg1 ;
@end

