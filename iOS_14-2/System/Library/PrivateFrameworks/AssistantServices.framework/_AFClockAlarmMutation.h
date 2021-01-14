/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned long long _type;
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
		unsigned hasType : 1;
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
-(void)setFiredDate:(id)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setHour:(unsigned long long)arg1 ;
-(void)setDismissedDate:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)setIsSnoozed:(BOOL)arg1 ;
-(void)setMinute:(unsigned long long)arg1 ;
-(void)setLastModifiedDate:(id)arg1 ;
-(void)setAlarmID:(id)arg1 ;
-(void)setAlarmURL:(id)arg1 ;
-(void)setRepeatOptions:(unsigned long long)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setIsFiring:(BOOL)arg1 ;
@end

