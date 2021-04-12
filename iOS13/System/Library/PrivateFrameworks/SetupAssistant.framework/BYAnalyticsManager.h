/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSMutableArray, NSMutableDictionary;

@interface BYAnalyticsManager : NSObject {

	NSMutableArray* _events;
	NSMutableDictionary* _producers;

}

@property (nonatomic,retain) NSMutableArray * events;                      //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * producers;              //@synthesize producers=_producers - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)commit;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)addEvent:(id)arg1 ;
-(NSMutableDictionary *)producers;
-(void)addEvent:(id)arg1 withPayload:(id)arg2 ;
-(void)addEvent:(id)arg1 withPayloadBlock:(/*^block*/id)arg2 ;
-(void)setProducers:(NSMutableDictionary *)arg1 ;
@end

