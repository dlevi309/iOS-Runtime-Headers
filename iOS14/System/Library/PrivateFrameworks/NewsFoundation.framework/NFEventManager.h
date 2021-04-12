/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)attemptTriggersForCurrentEvent:(id)arg1 ;
-(void)triggerOnceWhenAllEventsHaveOccurred:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)handleOnceTrigger:(id)arg1 event:(id)arg2 ;
-(NSMutableDictionary *)triggers;
-(void)fireEvent:(id)arg1 ;
-(void)handleAlwaysTrigger:(id)arg1 event:(id)arg2 ;
-(void)triggerAlwaysWhenAllEventsHaveOccurred:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSMutableSet *)events;
-(void)triggerOnceWhenAnyEventHasOccurred:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)triggerOnAnyEvent:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)triggerOnEvent:(id)arg1 block:(/*^block*/id)arg2 ;
@end

