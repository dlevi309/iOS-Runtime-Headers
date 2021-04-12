/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>
#import <MapsSuggestions/MapsSuggestionsPreloadableSource.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class MapsSuggestionsRoutine, NSArray, NSObject, NSString;

@interface MapsSuggestionsRoutineSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsPreloadableSource> {

	MapsSuggestionsRoutine* _routine;
	NSArray* _previouslyAddedEntries;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _running;
	NSObject*<OS_dispatch_source> _updateTimer;

}

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
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(double)updateSuggestionEntries;
-(BOOL)suggestionsEntriesAtLocation:(id)arg1 period:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_updateSuggestionEntries;
-(void)_requestTouristInfoFromRoutineIfNeededForLocation:(id)arg1 ;
-(void)_startMonitoringVehicleEvents;
@end

