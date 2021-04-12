/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, NSArray, NSString;

@interface HDSPSleepEventList : NSObject <BSDescriptionProviding> {

	NSMutableDictionary* _eventsByProvider;
	NSArray* _sortedEvents;

}

@property (nonatomic,readonly) NSMutableDictionary * eventsByProvider;              //@synthesize eventsByProvider=_eventsByProvider - In the implementation block
@property (nonatomic,readonly) NSArray * sortedEvents;                              //@synthesize sortedEvents=_sortedEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)addEvents:(id)arg1 provider:(id)arg2 ;
-(void)removeEventsForProvider:(id)arg1 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_sortEvents;
-(void)removeAllEvents;
-(NSString *)description;
-(id)overdueEventsForDate:(id)arg1 ;
-(NSArray *)sortedEvents;
-(NSMutableDictionary *)eventsByProvider;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)allEvents;
-(id)succinctDescriptionBuilder;
-(id)nextEvent;
-(void)removeEvents:(id)arg1 ;
@end

