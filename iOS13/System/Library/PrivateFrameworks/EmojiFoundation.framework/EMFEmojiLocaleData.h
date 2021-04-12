/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/


#import <EmojiFoundation/EmojiFoundation-Structs.h>
@class NSString, NSArray;

@interface EMFEmojiLocaleData : NSObject {

	NSString* _localeIdentifier;
	EmojiLocaleDataWrapperRef _localeDataRef;

}

@property (nonatomic,copy,readonly) NSString * localeIdentifier;                                //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) const EmojiLocaleDataWrapperRef emojiLocaleDataRef;              //@synthesize localeDataRef=_localeDataRef - In the implementation block
@property (nonatomic,copy,readonly) NSArray * emojiTokens; 
+(id)emojiLocaleDataWithLocaleIdentifier:(id)arg1 ;
+(id)emojiLocaleDataWithCEMEmojiLocaleData:(EmojiLocaleDataWrapperRef)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)localeIdentifier;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)arg1 ;
-(void)enumerateSearchResultsInText:(id)arg1 range:(NSRange)arg2 options:(unsigned long long)arg3 searchType:(int)arg4 usingBlock:(/*^block*/id)arg5 ;
-(const EmojiLocaleDataWrapperRef)emojiLocaleDataRef;
-(id)initWithCEMEmojiLocaleData:(EmojiLocaleDataWrapperRef)arg1 ;
-(NSArray *)emojiTokens;
-(id)emojiTokensForText:(id)arg1 phoneticReading:(id)arg2 options:(unsigned long long)arg3 searchType:(int)arg4 includePrefixMatches:(BOOL)arg5 ;
-(id)emojiTokensForOptions:(unsigned long long)arg1 presentationStyle:(int)arg2 ;
@end

