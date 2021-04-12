/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSPasswordWordList.h>

@interface WBSPasswordLexiconWordList : WBSPasswordWordList {

	LXLexiconRef _lexicon;

}
+(id)lexiconWordListWithIdentifier:(id)arg1 localeIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)enumerateEntriesForString:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 lexicon:(LXLexiconRef)arg2 ;
@end

