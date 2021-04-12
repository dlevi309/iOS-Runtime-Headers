/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/


#import <EmojiFoundation/EmojiFoundation-Structs.h>
@class NSString, EMFEmojiSearchEngine, NSArray;

@interface EMFEmojiLocaleData : NSObject {

	NSString* _localeIdentifier;
	EmojiLocaleDataWrapperRef _localeDataRef;
	BOOL _didTryLoadingSearchEngine;
	EMFEmojiSearchEngine* _searchEngine;

}

@property (nonatomic,retain,readonly) EMFEmojiSearchEngine * searchEngine;                      //@synthesize searchEngine=_searchEngine - In the implementation block
@property (nonatomic,copy,readonly) NSString * localeIdentifier;                                //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) const EmojiLocaleDataWrapperRef emojiLocaleDataRef;              //@synthesize localeDataRef=_localeDataRef - In the implementation block
@property (nonatomic,copy,readonly) NSArray * emojiTokens; 
+(id)emojiLocaleDataWithLocaleIdentifier:(id)arg1 ;
+(id)emojiLocaleDataWithCEMEmojiLocaleData:(EmojiLocaleDataWrapperRef)arg1 ;
-(NSString *)localeIdentifier;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)description;
-(id)emojiTokensForText:(id)arg1 phoneticReading:(id)arg2 options:(unsigned long long)arg3 searchType:(int)arg4 includePrefixMatches:(BOOL)arg5 ;
-(void)dealloc;
-(void)enumerateSearchResultsInText:(id)arg1 range:(NSRange)arg2 options:(unsigned long long)arg3 searchType:(int)arg4 usingBlock:(/*^block*/id)arg5 ;
-(const EmojiLocaleDataWrapperRef)emojiLocaleDataRef;
-(id)initWithCEMEmojiLocaleData:(EmojiLocaleDataWrapperRef)arg1 ;
-(unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)arg1 ;
-(EMFEmojiSearchEngine *)searchEngine;
-(NSArray *)emojiTokens;
-(id)emojiTokensForOptions:(unsigned long long)arg1 presentationStyle:(int)arg2 ;
-(void)preheatSearchEngine;
-(id)_rawSearchEngineReference;
@end

