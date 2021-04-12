/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGCoordinatableSuggester.h>

@class PGSuggestionOptions, NSDictionary, NSArray, NSEnumerator, NSString;

@interface PGOutstanderSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {

	PGSuggestionOptions* _options;
	NSDictionary* _assetUUIDsByScore;
	NSArray* _sortedScores;
	long long _currentScoreIndex;
	NSEnumerator* _currentSuggestedAssetEnumerator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
-(void)reset;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)reasonsForSuggestion:(id)arg1 ;
-(void)startSuggestingWithOptions:(id)arg1 ;
-(id)nextSuggestion;
-(void)computeNiceAssetsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(unsigned long long)scoreWithAsset:(id)arg1 ;
-(id)nextSuggestedAsset;
-(id)nextSuggestedAssetEnumerator;
@end

