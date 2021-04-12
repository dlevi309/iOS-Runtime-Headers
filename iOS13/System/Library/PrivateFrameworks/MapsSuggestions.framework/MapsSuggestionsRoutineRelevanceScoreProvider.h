/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsRelevanceScoreProvider.h>

@class NSDate, MapsSuggestionsRoutine, NSArray, NSString;

@interface MapsSuggestionsRoutineRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {

	NSDate* _fetchEntriesFromDate;
	Queue _queue;
	MapsSuggestionsRoutine* _routine;
	NSArray* _routineLocations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(NSString *)uniqueName;
-(id)initWithRoutine:(id)arg1 ;
-(id)_confidencesForMapItems:(id)arg1 ;
-(BOOL)_fetchLOIsWithCallback:(/*^block*/id)arg1 ;
-(id)_confidencesForMapItem:(id)arg1 ;
-(BOOL)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)preLoad;
@end

