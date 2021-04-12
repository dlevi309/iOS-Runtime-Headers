/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/


@class NSDictionary;

@interface EMFQueryResultOverrideList : NSObject {

	NSDictionary* _overrideMap;

}
-(id)overriddenResultsForQuery:(id)arg1 searchType:(unsigned long long)arg2 ;
-(id)_overriddenResultsRawStringExactMatchForQuery:(id)arg1 ;
-(id)_overriddenResultsRawStringPrefixMatchForQuery:(id)arg1 ;
-(id)_overriddenResultsTokenExactMatchForQuery:(id)arg1 ;
-(id)_overriddenResultsTokenPrefixMatchForQuery:(id)arg1 ;
-(id)_metadataForString:(id)arg1 ;
-(id)_overriddenResultsRawStringExactMatchForRawString:(id)arg1 andSearchType:(unsigned long long)arg2 ;
-(id)initWithOverrideListURL:(id)arg1 ;
-(id)overriddenResultsForQuery:(id)arg1 ;
@end

