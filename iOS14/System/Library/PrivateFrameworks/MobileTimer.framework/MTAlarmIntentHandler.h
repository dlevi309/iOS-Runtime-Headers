/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

