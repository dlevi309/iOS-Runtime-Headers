/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class TAEventBufferSettings, TACircularBuffer, NSMutableDictionary;

@interface TAEventBuffer : NSObject {

	TAEventBufferSettings* _settings;
	TACircularBuffer* _eventBuffer;
	NSMutableDictionary* _latestExpiredElements;

}
+(id)getExpiredElementKeyForClass:(Class)arg1 andEventSubtype:(unsigned long long)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(void)ingestTAEvent:(id)arg1 ;
-(void)updateLatestExpiredElements:(id)arg1 ;
-(id)getAllTAEventsMatchingCompoundPredicate:(id)arg1 ;
-(void)purgeWithClock:(id)arg1 ;
-(id)getAllTAEventsOf:(Class)arg1 ;
-(id)getAllTAEventsOf:(Class)arg1 andEventSubtype:(unsigned long long)arg2 ;
-(id)getAllTAEventsOf:(Class)arg1 between:(id)arg2 ;
-(id)getAllTAEventsOf:(Class)arg1 andEventSubtype:(unsigned long long)arg2 between:(id)arg3 ;
-(id)getAllTAEventsBetween:(id)arg1 ;
@end

