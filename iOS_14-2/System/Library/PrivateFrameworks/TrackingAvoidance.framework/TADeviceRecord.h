/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDate, TADeviceRecordSettings;

@interface TADeviceRecord : NSObject <NSSecureCoding> {

	NSMutableDictionary* _deviceRecord;
	NSDate* _lastPurgeDate;
	NSDate* _lastScanAttemptDate;
	TADeviceRecordSettings* _settings;

}

@property (nonatomic,retain) NSMutableDictionary * deviceRecord;              //@synthesize deviceRecord=_deviceRecord - In the implementation block
@property (nonatomic,retain) NSDate * lastPurgeDate;                          //@synthesize lastPurgeDate=_lastPurgeDate - In the implementation block
@property (nonatomic,retain) NSDate * lastScanAttemptDate;                    //@synthesize lastScanAttemptDate=_lastScanAttemptDate - In the implementation block
@property (nonatomic,retain) TADeviceRecordSettings * settings;               //@synthesize settings=_settings - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)notificationInternalStateToString:(unsigned long long)arg1 ;
+(unsigned long long)_convertTANotificationStateToTANotificationInternalState:(unsigned long long)arg1 ;
+(BOOL)_isKnownDevice:(unsigned long long)arg1 ;
-(void)_didSurfaceNotificationFor:(id)arg1 ;
-(void)logDeviceRecord;
-(NSDate *)lastPurgeDate;
-(id)descriptionDictionary;
-(unsigned long long)getDeviceType:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)purgeWithClock:(id)arg1 ;
-(id)init;
-(void)setDeviceRecord:(NSMutableDictionary *)arg1 ;
-(void)_updateLatestAdvertisement:(id)arg1 ;
-(void)checkForScanRequestsWithClock:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;
-(void)_clearStagedDetectionsForDevice:(id)arg1 ;
-(void)ingestTAEvent:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;
-(void)mergeWithAnotherDeviceRecord:(id)arg1 ;
-(NSMutableDictionary *)deviceRecord;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastScanAttemptDate;
-(void)_createRecordIfNecessaryWithAddress:(id)arg1 withDate:(id)arg2 ;
-(void)stageDevice:(id)arg1 withCurrentDate:(id)arg2 ;
-(void)setSettings:(TADeviceRecordSettings *)arg1 ;
-(id)_getDeviceRecord:(id)arg1 ;
-(id)getDetectionResultsToPush;
-(void)setLastScanAttemptDate:(NSDate *)arg1 ;
-(void)_setDevice:(id)arg1 withInternalState:(unsigned long long)arg2 withDate:(id)arg3 ;
-(id)getLatestAdvertisement:(id)arg1 ;
-(id)description;
-(void)_setDevice:(id)arg1 withExternalState:(unsigned long long)arg2 withDate:(id)arg3 ;
-(unsigned long long)getDeviceNotificationState:(id)arg1 ;
-(TADeviceRecordSettings *)settings;
-(void)_performNotificationStateTransitionActionsForDevice:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(id)_determineKeepInStagingUntil:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setDevice:(id)arg1 withType:(unsigned long long)arg2 withDate:(id)arg3 ;
-(void)updateDeviceRecordOnSessionChangeWithCurrentDate:(id)arg1 ;
-(void)setLastPurgeDate:(NSDate *)arg1 ;
-(void)stageDetectionResults:(id)arg1 ;
-(BOOL)hasSurfacedNotificationFor:(id)arg1 ;
-(BOOL)isKnownDevice:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

