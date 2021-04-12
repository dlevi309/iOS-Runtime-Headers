/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class NSMutableDictionary, NSDate, TADeviceRecordSettings;

@interface TADeviceRecord : NSObject {

	NSMutableDictionary* _deviceRecord;
	NSDate* _lastPurgeDate;
	TADeviceRecordSettings* _settings;

}
+(id)notificationInternalStateToString:(unsigned long long)arg1 ;
+(unsigned long long)_convertTANotificationStateToTANotificationInternalState:(unsigned long long)arg1 ;
+(BOOL)_isKnownDevice:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(id)initWithSettings:(id)arg1 ;
-(id)descriptionDictionary;
-(void)ingestTAEvent:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;
-(void)purgeWithClock:(id)arg1 ;
-(id)getNotificationOngoingDeviceList;
-(BOOL)isKnownDevice:(id)arg1 ;
-(unsigned long long)getDeviceNotificationState:(id)arg1 ;
-(void)updateDeviceRecordOnSessionChangeWithCurrentDate:(id)arg1 ;
-(id)_getDeviceRecord:(id)arg1 ;
-(void)_createRecordIfNecessaryWithAddress:(id)arg1 withDate:(id)arg2 ;
-(void)_setDevice:(id)arg1 withInternalState:(unsigned long long)arg2 withDate:(id)arg3 ;
-(void)_setDevice:(id)arg1 withExternalState:(unsigned long long)arg2 withDate:(id)arg3 ;
-(void)_setDevice:(id)arg1 withType:(unsigned long long)arg2 withDate:(id)arg3 ;
-(void)logDeviceRecord;
-(unsigned long long)getDeviceType:(id)arg1 ;
@end

