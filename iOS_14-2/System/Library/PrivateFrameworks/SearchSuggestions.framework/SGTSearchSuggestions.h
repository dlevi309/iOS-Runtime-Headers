/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchSuggestions.framework/SearchSuggestions
*/


@interface SGTSearchSuggestions : NSObject
+(id)searchThroughSuggestionForQuery:(id)arg1 withInfo:(id)arg2 ;
+(id)filteredSuggestions:(id)arg1 seen:(id)arg2 ignore:(id)arg3 maxCount:(long long)arg4 threshold:(double)arg5 ;
+(id)defaultSearchSuggestions;
+(BOOL)sectionSupportsShowMoreInApp:(id)arg1 ;
+(id)orderedSuggestionsWithUserSuggestion:(id)arg1 userWebSuggestion:(id)arg2 contactSuggestions:(id)arg3 localSuggestions:(id)arg4 serverSuggestions:(id)arg5 options:(id)arg6 ;
+(id)dedupeWebURLSuggestionsFromSections:(id)arg1 ;
@end

