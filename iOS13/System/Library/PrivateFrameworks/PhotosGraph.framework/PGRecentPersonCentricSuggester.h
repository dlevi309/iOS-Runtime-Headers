/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
-(void)reset;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(void)startSuggestingWithOptions:(id)arg1 ;
-(id)nextSuggestion;
-(id)nextPotentialSuggestion;
-(id)suggestionWithPotentialSuggestion:(id)arg1 ;
-(id)assetsWithSinglePersonWithOptions:(id)arg1 ;
-(id)assetsByPersonLocalIdentifierWithOptions:(id)arg1 ;
-(id)birthdayPersonPotentialSuggestionsWithOptions:(id)arg1 ;
-(id)longTimeNoSeePersonPotentialSuggestionsWithOptions:(id)arg1 ;
-(id)personPotentialSuggestionsWithOptions:(id)arg1 ;
-(id)nextBirthdayPersonPotentialSuggestion;
-(id)nextLongTimeNoSeePersonPotentialSuggestion;
-(id)nextPersonPotentialSuggestion;
-(id)verifiedPersonByPersonLocalIdentifier;
-(id)lastAssetWithPerson:(id)arg1 beforeDate:(id)arg2 ;
-(id)assetsWithSinglePersonBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(void)updateUsedPersonLocalIdentifiersFromPotentialSuggestions:(id)arg1 ;
@end

