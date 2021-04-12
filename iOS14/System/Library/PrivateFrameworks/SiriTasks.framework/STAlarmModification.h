/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSURL, NSNumber, NSString;

@interface STAlarmModification : STSiriModelObject {

	long long _addedFrequency;
	NSURL* _alarmId;
	NSNumber* _enabled;
	NSNumber* _hour;
	NSString* _label;
	NSNumber* _minute;
	long long _removedFrequency;

}
+(BOOL)supportsSecureCoding;
-(id)hour;
-(id)enabled;
-(id)minute;
-(void)encodeWithCoder:(id)arg1 ;
-(id)alarmId;
-(long long)addedFrequency;
-(long long)removedFrequency;
-(id)initWithCoder:(id)arg1 ;
-(id)label;
-(id)_initWithAddedFrequency:(long long)arg1 alarmId:(id)arg2 enabled:(id)arg3 hour:(id)arg4 label:(id)arg5 minute:(id)arg6 removedFrequency:(long long)arg7 ;
@end

