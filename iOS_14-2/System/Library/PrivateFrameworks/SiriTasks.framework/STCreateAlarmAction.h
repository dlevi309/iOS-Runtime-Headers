/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

