/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGCoordinatableSuggester.h>

@class PGSuggestionOptions, NSArray, NSMutableSet, NSEnumerator, NSString;

@interface PGRecentSocialGroupCentricSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {

	PGSuggestionOptions* _options;
	NSArray* _allPotentialSuggestions;
	NSMutableSet* _usedPotentialSuggestions;
	NSArray* _longTimeNoSeeSocialGroupPotentialSuggestions;
	NSArray* _socialGroupPotentialSuggestions;
	NSEnumerator* _longTimeNoSeeSocialGroupPotentialSuggestionEnumerator;
	NSEnumerator* _socialGroupPotentialSuggestionEnumerator;
	NSArray* _eligibleAssets;

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
-(BOOL)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2 ;
-(void)startSuggestingWithOptions:(id)arg1 ;
-(id)nextSuggestionWithProgress:(/*^block*/id)arg1 ;
-(id)longTimeNoSeeSocialGroupPotentialSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)socialGroupPotentialSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)nextLongTimeNoSeeSocialGroupPotentialSuggestionWithProgress:(/*^block*/id)arg1 ;
-(id)nextSocialGroupPotentialSuggestionWithProgress:(/*^block*/id)arg1 ;
-(id)potentialSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)verifiedPersons;
-(id)assetsWithPersonsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 matchAssetUUID:(id)arg3 ;
-(id)assetsMatchingSocialGroup:(id)arg1 betweenStartDate:(id)arg2 andEndDate:(id)arg3 matchingAssetUUID:(id)arg4 ;
-(void)usePotentialSuggestions:(id)arg1 ;
@end

