/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDAnalyticsCalendarEventData, HMDAnalyticsCharacteristicEventData, HMDAnalyticsCharacteristicThresholdEventData, HMDAnalyticsDurationEventData, HMDAnalyticsLocationEventData, HMDAnalyticsPresenceEventData, HMDAnalyticsSignificantTimeEventData;

@interface HMDAnalyticsTriggerEventData : HMFObject {

	BOOL _endEvent;
	HMDAnalyticsCalendarEventData* _calendarEvent;
	HMDAnalyticsCharacteristicEventData* _charEvent;
	HMDAnalyticsCharacteristicThresholdEventData* _charThresholdEvent;
	HMDAnalyticsDurationEventData* _durationEvent;
	HMDAnalyticsLocationEventData* _locationEvent;
	HMDAnalyticsPresenceEventData* _presenceEvent;
	HMDAnalyticsSignificantTimeEventData* _significantTimeEvent;
	HMDAnalyticsCharacteristicThresholdEventData* _thresholdEvent;

}

@property (nonatomic,retain) HMDAnalyticsCalendarEventData * calendarEvent;                                  //@synthesize calendarEvent=_calendarEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsCharacteristicEventData * charEvent;                                //@synthesize charEvent=_charEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsCharacteristicThresholdEventData * charThresholdEvent;              //@synthesize charThresholdEvent=_charThresholdEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsDurationEventData * durationEvent;                                  //@synthesize durationEvent=_durationEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsLocationEventData * locationEvent;                                  //@synthesize locationEvent=_locationEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsPresenceEventData * presenceEvent;                                  //@synthesize presenceEvent=_presenceEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsSignificantTimeEventData * significantTimeEvent;                    //@synthesize significantTimeEvent=_significantTimeEvent - In the implementation block
@property (nonatomic,retain) HMDAnalyticsCharacteristicThresholdEventData * thresholdEvent;                  //@synthesize thresholdEvent=_thresholdEvent - In the implementation block
@property (assign) BOOL endEvent;                                                                            //@synthesize endEvent=_endEvent - In the implementation block
-(BOOL)endEvent;
-(HMDAnalyticsLocationEventData *)locationEvent;
-(void)setPresenceEvent:(HMDAnalyticsPresenceEventData *)arg1 ;
-(void)setEndEvent:(BOOL)arg1 ;
-(HMDAnalyticsPresenceEventData *)presenceEvent;
-(void)setLocationEvent:(HMDAnalyticsLocationEventData *)arg1 ;
-(void)setCalendarEvent:(HMDAnalyticsCalendarEventData *)arg1 ;
-(HMDAnalyticsCalendarEventData *)calendarEvent;
-(void)setSignificantTimeEvent:(HMDAnalyticsSignificantTimeEventData *)arg1 ;
-(void)setCharEvent:(HMDAnalyticsCharacteristicEventData *)arg1 ;
-(void)setCharThresholdEvent:(HMDAnalyticsCharacteristicThresholdEventData *)arg1 ;
-(void)setDurationEvent:(HMDAnalyticsDurationEventData *)arg1 ;
-(void)setThresholdEvent:(HMDAnalyticsCharacteristicThresholdEventData *)arg1 ;
-(HMDAnalyticsCharacteristicEventData *)charEvent;
-(HMDAnalyticsCharacteristicThresholdEventData *)charThresholdEvent;
-(HMDAnalyticsSignificantTimeEventData *)significantTimeEvent;
-(HMDAnalyticsCharacteristicThresholdEventData *)thresholdEvent;
-(HMDAnalyticsDurationEventData *)durationEvent;
@end

