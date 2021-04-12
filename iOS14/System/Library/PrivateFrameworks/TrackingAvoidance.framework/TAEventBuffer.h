/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class TAEventBufferSettings, TACircularBuffer, NSMutableDictionary;

@interface TAEventBuffer : NSObject {

	TAEventBufferSettings* _settings;
	TACircularBuffer* _eventBuffer;
	NSMutableDictionary* _latestExpiredElements;
	NSMutableDictionary* _latestElements;

}
+(id)getExpiredElementKeyForClass:(Class)arg1 andEventSubtype:(unsigned long long)arg2 ;
-(id)getAllTAEventsMatchingCompoundPredicate:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)purgeWithClock:(id)arg1 ;
-(void)ingestTAEvent:(id)arg1 ;
-(id)getAllTAEventsOf:(Class)arg1 between:(id)arg2 ;
-(id)getLatestElementOf:(Class)arg1 andEventSubtype:(unsigned long long)arg2 ;
-(id)getAllTAEventsBetween:(id)arg1 ;
-(id)getAllTAEventsOf:(Class)arg1 ;
-(void)updateLatestExpiredElements:(id)arg1 ;
-(id)getLatestElementOf:(Class)arg1 ;
-(void)_updateLatestElement:(id)arg1 ;
-(void)_updateLatestElement:(id)arg1 withKey:(id)arg2 ;
-(id)getEarliestEventDate;
-(id)getAllTAEventsOf:(Class)arg1 andEventSubtype:(unsigned long long)arg2 ;
-(id)getAllTAEventsOf:(Class)arg1 andEventSubtype:(unsigned long long)arg2 between:(id)arg3 ;
@end

