/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class EKAlarm;

@interface EKUIAlarm : NSObject {

	BOOL _isLeaveNowAlarm;
	EKAlarm* _alarm;

}

@property (nonatomic,readonly) BOOL isLeaveNowAlarm;              //@synthesize isLeaveNowAlarm=_isLeaveNowAlarm - In the implementation block
@property (nonatomic,readonly) EKAlarm * alarm;                   //@synthesize alarm=_alarm - In the implementation block
-(id)description;
-(EKAlarm *)alarm;
-(id)localizedDescriptionAllDay:(BOOL)arg1 ;
-(BOOL)isLeaveNowAlarm;
-(id)initWithAlarm:(id)arg1 ;
-(id)initLeaveNowAlarm;
-(BOOL)isEqualToUIAlarm:(id)arg1 ;
@end

