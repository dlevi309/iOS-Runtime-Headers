/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
*/

#import <Spotlight/Spotlight-Structs.h>
#import <Spotlight/SPGeneralQueryTask.h>

@class NSArray;

@interface SPSuggestionsQueryTask : SPGeneralQueryTask {

	NSArray* _mutableCombinedSuggestions;
	NSArray* _mutableParsecSuggestions;
	NSArray* _mutableLocalSuggestions;

}
-(id)displayedText;
-(void)searchDaemonSuggestionsArray:(id)arg1 ;
-(void)searchDaemonLocalSuggestionsData:(id)arg1 ;
-(id)unsafeSections;
-(BOOL)readyToUpdate;
-(id)unsafeCombinedSuggestions;
-(id)initForSession:(id)arg1 withQuery:(id)arg2 ;
-(void)clearInternal:(int)arg1 invalidate:(BOOL)arg2 ;
-(id)suggestionsDebugLog:(id)arg1 ;
-(id)_originalTopResultFromSections:(id)arg1 ;
-(id)_appResultSection;
-(id)makeSuggestionsSection;
-(id)searchThroughSection:(id)arg1 ;
-(id)contactSuggestions:(id)arg1 maxCount:(long long)arg2 ;
-(id)dedupedSuggestions:(id)arg1 dedupeQueries:(id)arg2 maxCount:(long long)arg3 ;
-(id)_newSuggestionSection;
-(id)_suggestionResultFromSuggestion:(id)arg1 forQuery:(id)arg2 ;
-(id)sectionsForCompletions;
-(unsigned)_lexiconTokenIDForToken:(id)arg1 lexicon:(LXLexiconRef)arg2 ;
-(id)_whiteListedTopResultFromSection:(id)arg1 ;
-(id)appSuggestions:(id)arg1 maxCount:(long long)arg2 ;
@end

