/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class CNUnfairLock;

@interface CNStringTokenizer : NSObject {

	CFStringTokenizerRef _tokenizer;
	CNUnfairLock* _lock;

}

@property (nonatomic,readonly) CFStringTokenizerRef tokenizer;              //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,readonly) CNUnfairLock * lock;                         //@synthesize lock=_lock - In the implementation block
+(id)tokenizeString:(id)arg1 ;
+(id)adjustRanges:(id)arg1 toIncludeNonBreakingCharactersInString:(id)arg2 ;
+(BOOL)isCharacterNonBreaking:(unsigned short)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(id)init;
-(CNUnfairLock *)lock;
-(CFStringTokenizerRef)tokenizer;
-(id)tokenizeString:(id)arg1 ;
-(id)rangesOfWordTokensInString:(id)arg1 ;
-(id)rangesOfWordUnitTokensInString:(id)arg1 ;
-(void)dealloc;
@end

