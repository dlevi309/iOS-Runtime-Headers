/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGCoordinatableSuggester.h>

@class PGSuggestionOptions, NSArray, NSEnumerator, NSDictionary, NSMutableDictionary, NSString;

@interface PGLivePhotoVariationSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {

	PGSuggestionOptions* _options;
	NSArray* _suggestedAssets;
	NSEnumerator* _suggestedAssetEnumerator;
	NSDictionary* _variationResults;
	NSMutableDictionary* _recipeReasonByAssetLocalIdentifier;
	BOOL _doLoop;
	BOOL _doLongExposure;

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
-(id)suggestedAssetsInAssets:(id)arg1 ;
-(id)suggestedAssetsInAssets:(id)arg1 options:(id)arg2 ;
-(void)_setDoFlagsWithOptions:(id)arg1 ;
-(id)recipeForVariationWithLivePhoto:(id)arg1 inResults:(id)arg2 suggestionSubtype:(unsigned short*)arg3 ;
-(id)livePhotosBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(id)suggestionWithAsset:(id)arg1 ;
@end

