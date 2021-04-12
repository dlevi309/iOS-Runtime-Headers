/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDAnalyticsEventTriggerData;

@interface HMDAnalyticsAddEventTriggerData : HMFObject {

	int _requestOrigin;
	unsigned _resultErrorCode;
	unsigned long long _timestamp;
	HMDAnalyticsEventTriggerData* _eventTrigger;

}

@property (assign) unsigned long long timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) HMDAnalyticsEventTriggerData * eventTrigger;              //@synthesize eventTrigger=_eventTrigger - In the implementation block
@property (assign) int requestOrigin;                                                  //@synthesize requestOrigin=_requestOrigin - In the implementation block
@property (assign) unsigned resultErrorCode;                                           //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
-(unsigned long long)timestamp;
-(HMDAnalyticsEventTriggerData *)eventTrigger;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setEventTrigger:(HMDAnalyticsEventTriggerData *)arg1 ;
-(void)setRequestOrigin:(int)arg1 ;
-(void)setResultErrorCode:(unsigned)arg1 ;
-(unsigned)resultErrorCode;
-(int)requestOrigin;
@end

