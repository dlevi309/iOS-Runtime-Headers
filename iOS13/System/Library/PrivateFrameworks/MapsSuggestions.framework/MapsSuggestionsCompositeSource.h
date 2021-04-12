/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>
#import <MapsSuggestions/MapsSuggestionsSourceDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableSet, NSMutableDictionary, NSObject, MapsSuggestionsSuppressor, NSString;

@interface MapsSuggestionsCompositeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsSourceDelegate> {

	NSMutableSet* _sources;
	NSMutableDictionary* _nextUpdateTimes;
	Queue _queue;
	NSObject*<OS_dispatch_source> _updateTimer;
	MapsSuggestionsSuppressor* _suppressor;
	BOOL _running;

}

@property (assign) BOOL running;                                                             //@synthesize running=_running - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
+(BOOL)isEnabled;
+(unsigned long long)disposition;
-(void)dealloc;
-(void)stop;
-(void)start;
-(BOOL)running;
-(id)initWithDelegate:(id)arg1 ;
-(id)children;
-(void)setRunning:(BOOL)arg1 ;
-(double)updateSuggestionEntriesOfType:(long long)arg1 ;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(unsigned long long)addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2 ;
-(BOOL)attachSource:(id)arg1 ;
-(BOOL)detachSource:(id)arg1 ;
-(double)updateSuggestionEntries;
-(void)_updateChildSourcesForceAll:(BOOL)arg1 ;
-(void)_initUpdateTimerIfNecessary;
-(double)_updateChildSource:(id)arg1 ;
-(void)_scheduleNextUpdateChildSourcesWithin:(double)arg1 ;
-(BOOL)_shouldUpdateSource:(id)arg1 ;
-(void)_stopUpdateChildSources;
-(void)_startUpdateChildSources;
-(void)_updateChildSourcesForType:(long long)arg1 ;
-(double)_suppressionTimeForEntry:(id)arg1 snoozeOnly:(BOOL)arg2 ;
-(BOOL)addChildSource:(id)arg1 ;
-(BOOL)removeChildSource:(id)arg1 ;
-(id)test_dateUntilSuppressedEntry:(id)arg1 ;
-(void)test_sync;
-(double)test_suppressionDurationForBehavior:(long long)arg1 type:(long long)arg2 ;
-(void)test_resetSuppressions;
@end

