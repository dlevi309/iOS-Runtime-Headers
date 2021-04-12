/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class EKAlarm;

@interface EKUIAlarm : NSObject {

	BOOL _isLeaveNowAlarm;
	EKAlarm* _alarm;

}

@property (nonatomic,readonly) BOOL isLeaveNowAlarm;              //@synthesize isLeaveNowAlarm=_isLeaveNowAlarm - In the implementation block
@property (nonatomic,readonly) EKAlarm * alarm;                   //@synthesize alarm=_alarm - In the implementation block
-(id)initWithAlarm:(id)arg1 ;
-(BOOL)isLeaveNowAlarm;
-(id)description;
-(id)initLeaveNowAlarm;
-(BOOL)isEqualToUIAlarm:(id)arg1 ;
-(id)localizedDescriptionAllDay:(BOOL)arg1 ;
-(EKAlarm *)alarm;
@end

