/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsTriggerObserver.h>
#import <MapsSuggestions/MapsSuggestionsSink.h>
#import <MapsSuggestions/MapsSuggestionsJSONable.h>

@class MapsSuggestionsEngine, NSString;

@interface MapsSuggestionsEngineRunner : NSObject <MapsSuggestionsTriggerObserver, MapsSuggestionsSink, MapsSuggestionsJSONable> {

	Queue _queue;
	MapsSuggestionsEngine* _engine;
	Config _config;
	State _state;

}

@property (nonatomic,__weak,readonly) MapsSuggestionsEngine * engine; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MapsSuggestionsEngine *)engine;
-(void)addObserver:(id)arg1 ;
-(NSString *)uniqueName;
-(id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 maxEntries:(unsigned long long)arg7 ;
-(void)triggerFired:(id)arg1 ;
-(void)runASAP;
-(id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 runTimeLeeway:(double)arg7 sleepTimeLeeway:(double)arg8 maxEntries:(unsigned long long)arg9 nilledWhenAsleep:(BOOL)arg10 timerClass:(Class)arg11 ;
-(void)removeTrigger:(id)arg1 ;
-(void)addRunCondition:(id)arg1 ;
-(void)addPostFilter:(id)arg1 ;
-(id)initWithEngineBuilder:(id)arg1 name:(id)arg2 minRunTime:(double)arg3 maxRunTime:(double)arg4 minSleepTime:(double)arg5 maxSleepTime:(double)arg6 runTimeLeeway:(double)arg7 sleepTimeLeeway:(double)arg8 maxEntries:(unsigned long long)arg9 nilledWhenAsleep:(BOOL)arg10 ;
-(void)removeRunCondition:(id)arg1 ;
-(id)objectForJSON;
-(void)invalidateForMapsSuggestionsManager:(id)arg1 ;
-(void)addTrigger:(id)arg1 ;
-(void)scheduleNextRun;
@end

