/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGCoordinatableSuggester.h>

@class PGSuggestionOptions, NSArray, NSDictionary, NSEnumerator, NSString;

@interface PGOnThisDaySmallMemorySuggester : PGAbstractSuggester <PGCoordinatableSuggester> {

	PGSuggestionOptions* _options;
	NSArray* _suggestedMomentLocalIdentifiers;
	NSDictionary* _momentByMomentLocalIdentifier;
	NSEnumerator* _suggestedMomentLocalIdentifierEnumerator;
	NSString* _titleDateMatchingTitleOnThisDay;

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
-(id)sortedMomentLocalIdentifiersWithDateIgnoringYearBeforeDateYear:(id)arg1 ;
-(id)momentByMomentLocalIdentifierWithMomentLocalIdentifiers:(id)arg1 ;
-(id)suggestionWithMomentLocalIdentifier:(id)arg1 ;
@end

