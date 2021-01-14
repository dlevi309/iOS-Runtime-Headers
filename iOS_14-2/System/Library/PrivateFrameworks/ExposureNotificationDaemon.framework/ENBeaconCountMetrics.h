/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@class NSMutableSet, NSDate;

@interface ENBeaconCountMetrics : NSObject {

	double _previousTimestamp;
	unsigned long long _currentInsertionWindowIndex;
	NSMutableSet* _currentInsertionWindowObservedRPI;
	unsigned long long _beaconCountWindowCount;
	unsigned long long* _beaconCountWindows;
	NSDate* _startDate;
	NSDate* _endDate;
	double _windowDuration;

}

@property (nonatomic,readonly) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double windowDuration;              //@synthesize windowDuration=_windowDuration - In the implementation block
-(NSDate *)endDate;
-(NSDate *)startDate;
-(double)windowDuration;
-(void)dealloc;
-(void)addAdvertisement:(id)arg1 ;
-(void)enumerateBeaconCountWindows:(/*^block*/id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 windowDuration:(double)arg3 ;
-(unsigned long long)beaconCountAtDate:(id)arg1 ;
-(id)differentialPrivacyRepresentationWithCountThresholds:(id)arg1 ;
@end

