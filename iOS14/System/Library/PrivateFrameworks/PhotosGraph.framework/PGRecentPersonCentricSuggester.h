/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGCoordinatableSuggester.h>

@class PGSuggestionOptions, NSDictionary, NSMutableSet, NSArray, NSEnumerator, NSString;

@interface PGRecentPersonCentricSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {

	PGSuggestionOptions* _options;
	NSDictionary* _verifiedPersonByPersonLocalIdentifier;
	NSDictionary* _assetsByPersonLocalIdentifier;
	NSMutableSet* _usedPersonLocalIdentifiers;
	NSArray* _birthdayPersonPotentialSuggestions;
	NSArray* _longTimeNoSeePersonPotentialSuggestions;
	NSArray* _personPotentialSuggestions;
	NSEnumerator* _birthdayPersonPotentialSuggestionEnumerator;
	NSEnumerator* _longTimeNoSeePersonPotentialSuggestionEnumerator;
	NSEnumerator* _personPotentialSuggestionEnumerator;

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
-(id)nextPotentialSuggestionWithProgress:(/*^block*/id)arg1 ;
-(id)suggestionWithPotentialSuggestion:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)assetsWithSinglePersonWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)assetsByPersonLocalIdentifierWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(unsigned long long)relationScoreWithPersonNode:(id)arg1 ;
-(id)birthdayPersonPotentialSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)longTimeNoSeePersonPotentialSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)personPotentialSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)nextBirthdayPersonPotentialSuggestionWithProgress:(/*^block*/id)arg1 ;
-(id)nextLongTimeNoSeePersonPotentialSuggestionWithProgress:(/*^block*/id)arg1 ;
-(id)nextPersonPotentialSuggestionWithProgress:(/*^block*/id)arg1 ;
-(id)verifiedPersonByPersonLocalIdentifier;
-(id)lastAssetWithPerson:(id)arg1 beforeDate:(id)arg2 matchingAssetUUID:(id)arg3 ;
-(id)assetsWithSinglePersonBetweenStartDate:(id)arg1 andEndDate:(id)arg2 matchingAssetUUID:(id)arg3 progress:(/*^block*/id)arg4 ;
-(void)updateUsedPersonLocalIdentifiersFromPotentialSuggestions:(id)arg1 ;
@end

