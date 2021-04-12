/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
*/

#import <Search/SFSearchResult_SpotlightExtras.h>

@class SFSearchSuggestion;

@interface SPSuggestionSearchResult : SFSearchResult_SpotlightExtras {

	SFSearchSuggestion* _suggestion;

}

@property (nonatomic,readonly) SFSearchSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
+(id)_richDisplayTextForSuggestion:(id)arg1 forQuery:(id)arg2 ;
-(SFSearchSuggestion *)suggestion;
-(id)initWithSearchSuggestion:(id)arg1 forQuery:(id)arg2 ;
@end

