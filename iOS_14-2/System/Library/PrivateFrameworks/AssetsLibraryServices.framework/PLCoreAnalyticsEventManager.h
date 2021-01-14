/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSMutableDictionary;

@interface PLCoreAnalyticsEventManager : NSObject {

	NSMutableDictionary* _eventMap;
	os_unfair_lock_s _lock;

}
-(void)publishAllEvents;
-(id)init;
-(double)startRecordingTimedEventToken;
-(id)valueForKey:(id)arg1 onEventWithName:(id)arg2 ;
-(void)publishEventWithName:(id)arg1 ;
-(void)removePayloadValueForKey:(id)arg1 onEventWithName:(id)arg2 ;
-(id)description;
-(void)setPayloadValue:(id)arg1 forKey:(id)arg2 onEventWithName:(id)arg3 ;
-(void)stopRecordingTimedEventWithToken:(double)arg1 forKey:(id)arg2 onEventWithName:(id)arg3 ;
-(id)_eventForEventName:(id)arg1 ;
-(id)rawEventForEventName:(id)arg1 ;
-(void)mergePayload:(id)arg1 onEventWithName:(id)arg2 ;
-(void)removeEventWithName:(id)arg1 ;
@end

