/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@class _PASCFBurstTrie;

@interface PMLLexicon : NSObject {

	_PASCFBurstTrie* _lexicon;

}
+(BOOL)serializeLexiconToFile:(id)arg1 tokenToWordIDDict:(id)arg2 ;
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)getWordIDforToken:(id)arg1 ;
-(unsigned long long)getTotalEntries;
@end

