/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol OS_dispatch_queue;
#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSObject;

@interface CNStringTokenizer : NSObject {

	CFStringTokenizerRef _tokenizer;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,readonly) CFStringTokenizerRef tokenizer;                      //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
+(id)tokenizeString:(id)arg1 ;
+(id)adjustRanges:(id)arg1 toIncludeNonBreakingCharactersInString:(id)arg2 ;
+(BOOL)isCharacterNonBreaking:(unsigned short)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithLocale:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(CFStringTokenizerRef)tokenizer;
-(id)tokenizeString:(id)arg1 ;
-(id)rangesOfWordTokensInString:(id)arg1 ;
-(id)rangesOfWordUnitTokensInString:(id)arg1 ;
@end

