/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClockAlarmMutating.h>

@class AFClockAlarm, NSUUID, NSURL, NSString, NSDate;

@interface _AFClockAlarmMutation : NSObject <AFClockAlarmMutating> {

	AFClockAlarm* _baseModel;
	NSUUID* _alarmID;
	NSURL* _alarmURL;
	BOOL _isFiring;
	NSString* _title;
	unsigned long long _hour;
	unsigned long long _minute;
	unsigned long long _repeatOptions;
	BOOL _isEnabled;
	BOOL _isSnoozed;
	NSDate* _firedDate;
	NSDate* _dismissedDate;
	NSDate* _lastModifiedDate;
	struct {
		unsigned isDirty : 1;
		unsigned hasAlarmID : 1;
		unsigned hasAlarmURL : 1;
		unsigned hasIsFiring : 1;
		unsigned hasTitle : 1;
		unsigned hasHour : 1;
		unsigned hasMinute : 1;
		unsigned hasRepeatOptions : 1;
		unsigned hasIsEnabled : 1;
		unsigned hasIsSnoozed : 1;
		unsigned hasFiredDate : 1;
		unsigned hasDismissedDate : 1;
		unsigned hasLastModifiedDate : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setHour:(unsigned long long)arg1 ;
-(void)setMinute:(unsigned long long)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setLastModifiedDate:(id)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setIsFiring:(BOOL)arg1 ;
-(void)setFiredDate:(id)arg1 ;
-(void)setDismissedDate:(id)arg1 ;
-(void)setAlarmID:(id)arg1 ;
-(void)setAlarmURL:(id)arg1 ;
-(void)setRepeatOptions:(unsigned long long)arg1 ;
-(void)setIsSnoozed:(BOOL)arg1 ;
@end

