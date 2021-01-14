/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

