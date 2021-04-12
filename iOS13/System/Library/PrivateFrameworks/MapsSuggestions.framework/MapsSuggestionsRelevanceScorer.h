/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@class NSMutableArray, NSDate;

@interface MapsSuggestionsRelevanceScorer : NSObject {

	NSMutableArray* _scorers;
	NSDate* _scorersUpdatedAt;

}
-(id)init;
-(void)addScorer:(id)arg1 ;
-(id)confidenceForMapItems:(id)arg1 ;
-(id)confidenceForContacts:(id)arg1 addresses:(id)arg2 ;
-(void)preLoadAllScorers;
-(id)_confidenceForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 ;
-(BOOL)_preProcessNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 ;
-(id)_postProcessConfidences;
-(void)_confidenceForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 scorerIndex:(unsigned long long)arg4 group:(id)arg5 ;
-(void)_processScorerConfidences:(id)arg1 names:(id)arg2 addresses:(id)arg3 mapItems:(id)arg4 error:(id)arg5 ;
@end

