/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGCoordinatableSuggester.h>

@class PGSuggestionOptions, NSArray, NSEnumerator, PLPhotoEditPersistenceManager, NSMutableDictionary, PLPhotoEffect, NSString;

@interface PGStudioLightSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {

	PGSuggestionOptions* _options;
	NSArray* _suggestedAssets;
	NSEnumerator* _suggestedAssetEnumerator;
	PLPhotoEditPersistenceManager* _photoEditPersistenceManager;
	NSMutableDictionary* _compositionControllerByAssetUUID;
	NSMutableDictionary* _assetMasterSizeByAssetUUID;
	PLPhotoEffect* _studioLightPhotoEffect;
	NSMutableDictionary* _recipeReasonByAssetUUID;

}

@property (assign,nonatomic) BOOL lastSuggestionWasColliding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
-(id)init;
-(void)reset;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)reasonsForSuggestion:(id)arg1 ;
-(void)startSuggestingWithOptions:(id)arg1 ;
-(id)nextSuggestionWithProgress:(/*^block*/id)arg1 ;
-(id)suggestionWithAsset:(id)arg1 ;
-(id)portraitsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 progress:(/*^block*/id)arg3 ;
-(id)compositionControllerForAsset:(id)arg1 baseVersion:(out long long*)arg2 ;
-(id)suggestedAssetsInAssets:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)suggestedAssetsInAssets:(id)arg1 options:(id)arg2 progress:(/*^block*/id)arg3 ;
-(id)studioLightRecipeWithAsset:(id)arg1 ;
@end

