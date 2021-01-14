/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
*/

#import <SiriObservation/SiriObservation-Structs.h>
#import <libobjc.A.dylib/SOAlarmMutating.h>

@class SOAlarm, NSUUID, NSURL, NSString;

@interface _SOAlarmMutation : NSObject <SOAlarmMutating> {

	SOAlarm* _baseModel;
	NSUUID* _alarmID;
	NSURL* _alarmURL;
	NSString* _title;
	unsigned long long _hour;
	unsigned long long _minute;
	unsigned long long _repeatSchedule;
	BOOL _isEnabled;
	BOOL _isFiring;
	struct {
		unsigned isDirty : 1;
		unsigned hasAlarmID : 1;
		unsigned hasAlarmURL : 1;
		unsigned hasTitle : 1;
		unsigned hasHour : 1;
		unsigned hasMinute : 1;
		unsigned hasRepeatSchedule : 1;
		unsigned hasIsEnabled : 1;
		unsigned hasIsFiring : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRepeatSchedule:(unsigned long long)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setHour:(unsigned long long)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setMinute:(unsigned long long)arg1 ;
-(void)setAlarmID:(id)arg1 ;
-(void)setAlarmURL:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setIsFiring:(BOOL)arg1 ;
@end

