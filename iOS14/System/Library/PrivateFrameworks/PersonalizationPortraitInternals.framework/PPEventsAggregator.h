/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSArray;

@interface PPEventsAggregator : NSObject {

	NSArray* _eventsPool;

}

@property (nonatomic,retain) NSArray * eventsPool;              //@synthesize eventsPool=_eventsPool - In the implementation block
-(id)sortedEvents;
-(id)initWithEventsPool:(id)arg1 ;
-(id)tripCandidatesFromEventsPool;
-(BOOL)isEvent:(id)arg1 dupeOfEvent:(id)arg2 ;
-(void)dedupeEventsInPool;
-(NSArray *)eventsPool;
-(void)setEventsPool:(NSArray *)arg1 ;
@end

