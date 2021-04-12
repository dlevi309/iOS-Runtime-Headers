/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject {

	NSMutableArray* _inDocumentWordsStack;
	NSMutableDictionary* _leftContextToWordMap;

}

@property (nonatomic,retain) NSMutableArray * inDocumentWordsStack;                   //@synthesize inDocumentWordsStack=_inDocumentWordsStack - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * leftContextToWordMap;              //@synthesize leftContextToWordMap=_leftContextToWordMap - In the implementation block
-(NSMutableArray *)inDocumentWordsStack;
-(id)init;
-(id)wordsForContext:(id)arg1 ;
-(void)insertWord:(id)arg1 atIndex:(long long)arg2 ;
-(id)description;
-(id)updateWordEntryAtIndex:(unsigned long long)arg1 withAcceptedString:(id)arg2 documentContext:(id)arg3 ;
-(id)lastWord;
-(unsigned long long)wordsCount;
-(void)addToContextMap:(id)arg1 ;
-(NSMutableDictionary *)leftContextToWordMap;
-(void)setLeftContextToWordMap:(NSMutableDictionary *)arg1 ;
-(void)setInDocumentWordsStack:(NSMutableArray *)arg1 ;
-(int)deleteWordsUptoContext:(id)arg1 ;
-(void)removeFromContextMap:(id)arg1 ;
-(void)pushWordToDocument:(id)arg1 ;
@end

