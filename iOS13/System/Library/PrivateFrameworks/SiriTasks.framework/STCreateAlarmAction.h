/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <SiriTasks/STAlarmAction.h>

@class STAlarm;

@interface STCreateAlarmAction : STAlarmAction {

	STAlarm* _alarm;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)alarm;
-(id)_initWithAlarm:(id)arg1 ;
@end

