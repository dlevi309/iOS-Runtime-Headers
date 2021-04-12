/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class NSDate, TAScanRequestSettings;

@interface TAScanRequest : NSObject {

	NSDate* _lastScanRequestedDate;
	unsigned long long _interVisitScanCount;
	TAScanRequestSettings* _settings;
	NSDate* _scheduledScanRequest;

}

@property (nonatomic,readonly) TAScanRequestSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSDate * scheduledScanRequest;                 //@synthesize scheduledScanRequest=_scheduledScanRequest - In the implementation block
-(id)initWithSettings:(id)arg1 ;
-(TAScanRequestSettings *)settings;
-(void)scheduleInterVisitScanForAdvertisement:(id)arg1 deviceRecord:(id)arg2 clock:(id)arg3 ;
-(id)evictScheduledInterVisitScanWithClock:(id)arg1 ;
-(id)evaluateVisitEntry:(id)arg1 clock:(id)arg2 ;
-(id)evaluateInterVisitAfterVisitExit:(id)arg1 displayEvents:(id)arg2 advertisements:(id)arg3 deviceRecord:(id)arg4 clock:(id)arg5 ;
-(BOOL)shouldScanOnAdvertisement:(id)arg1 withDeviceRecord:(id)arg2 ;
-(NSDate *)scheduledScanRequest;
@end

