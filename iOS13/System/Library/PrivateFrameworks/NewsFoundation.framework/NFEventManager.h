/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NSMutableSet, NSMutableDictionary;

@interface NFEventManager : NSObject {

	NSMutableSet* _events;
	NSMutableDictionary* _triggers;

}

@property (nonatomic,readonly) NSMutableSet * events;                       //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * triggers;              //@synthesize triggers=_triggers - In the implementation block
-(id)init;
-(NSMutableSet *)events;
-(NSMutableDictionary *)triggers;
-(void)attemptTriggersForCurrentEvent:(id)arg1 ;
-(void)triggerOnAnyEvent:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)handleOnceTrigger:(id)arg1 event:(id)arg2 ;
-(void)handleAlwaysTrigger:(id)arg1 event:(id)arg2 ;
-(void)fireEvent:(id)arg1 ;
-(void)triggerOnceWhenAllEventsHaveOccurred:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)triggerAlwaysWhenAllEventsHaveOccurred:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)triggerOnceWhenAnyEventHasOccurred:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)triggerOnEvent:(id)arg1 block:(/*^block*/id)arg2 ;
@end

