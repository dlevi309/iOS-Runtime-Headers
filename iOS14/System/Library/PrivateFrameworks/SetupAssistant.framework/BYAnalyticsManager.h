/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSMutableArray, NSMutableDictionary;

@interface BYAnalyticsManager : NSObject {

	NSMutableArray* _events;
	NSMutableDictionary* _lazyEvents;

}

@property (nonatomic,retain) NSMutableArray * events;                       //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lazyEvents;              //@synthesize lazyEvents=_lazyEvents - In the implementation block
+(id)sharedManager;
-(void)commit;
-(void)addEvent:(id)arg1 ;
-(id)init;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)stash:(id)arg1 ;
-(void)addEvent:(id)arg1 withPayload:(id)arg2 persist:(BOOL)arg3 ;
-(void)removeEventsUsingBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)lazyEvents;
-(void)setLazyEvents:(NSMutableDictionary *)arg1 ;
-(void)_gatherDataFromProducers;
-(void)_sendEvent:(id)arg1 payload:(id)arg2 ;
-(void)addEvent:(id)arg1 withPayloadBlock:(/*^block*/id)arg2 persist:(BOOL)arg3 ;
-(void)removeNonPersistentEvents;
-(void)reset;
-(NSMutableArray *)events;
@end

