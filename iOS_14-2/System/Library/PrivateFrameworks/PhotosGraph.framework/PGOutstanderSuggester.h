/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic) BOOL lastSuggestionWasColliding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
-(void)reset;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)reasonsForSuggestion:(id)arg1 ;
-(BOOL)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2 ;
-(void)startSuggestingWithOptions:(id)arg1 ;
-(id)nextSuggestionWithProgress:(/*^block*/id)arg1 ;
-(id)nextSuggestedAssetWithProgress:(/*^block*/id)arg1 ;
-(id)assetPredicate:(id)arg1 andEndDate:(id)arg2 matchingAssetUUID:(id)arg3 ;
-(void)computeNiceAssetsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withProgress:(/*^block*/id)arg3 ;
-(unsigned long long)scoreWithAsset:(id)arg1 ;
-(id)nextSuggestedAssetEnumeratorWithProgress:(/*^block*/id)arg1 ;
@end

