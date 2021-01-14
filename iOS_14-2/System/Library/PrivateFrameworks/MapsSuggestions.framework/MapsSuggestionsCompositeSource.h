/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)disposition;
+(BOOL)isEnabled;
-(id)children;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)running;
-(BOOL)detachSource:(id)arg1 ;
-(id)test_dateUntilSuppressedEntry:(id)arg1 ;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(double)test_suppressionDurationForBehavior:(long long)arg1 type:(long long)arg2 ;
-(void)start;
-(unsigned long long)addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2 ;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(void)test_sync;
-(void)stop;
-(char)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(BOOL)removeChildSource:(id)arg1 ;
-(BOOL)addChildSource:(id)arg1 ;
-(double)updateSuggestionEntriesOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)attachSource:(id)arg1 ;
-(void)test_resetSuppressions;
-(void)dealloc;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
@end

