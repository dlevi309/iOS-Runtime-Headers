/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableDictionary;

@interface PLCoreAnalyticsEventManager : NSObject {

	NSMutableDictionary* _eventMap;
	os_unfair_lock_s _lock;

}
-(id)init;
-(id)description;
-(void)setPayloadValue:(id)arg1 forKey:(id)arg2 onEventWithName:(id)arg3 ;
-(void)removeEventWithName:(id)arg1 ;
-(void)stopRecordingTimedEventWithToken:(double)arg1 forKey:(id)arg2 onEventWithName:(id)arg3 ;
-(double)startRecordingTimedEventToken;
-(id)_eventForEventName:(id)arg1 ;
-(void)mergePayload:(id)arg1 onEventWithName:(id)arg2 ;
-(void)removePayloadValueForKey:(id)arg1 onEventWithName:(id)arg2 ;
-(id)rawEventForEventName:(id)arg1 ;
-(void)publishEventWithName:(id)arg1 ;
-(void)publishAllEvents;
@end

