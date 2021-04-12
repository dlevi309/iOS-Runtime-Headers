/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject {

	NSMutableArray* _inDocumentWordsStack;
	NSMutableDictionary* _leftContextToWordMap;

}

@property (nonatomic,retain) NSMutableArray * inDocumentWordsStack;                   //@synthesize inDocumentWordsStack=_inDocumentWordsStack - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * leftContextToWordMap;              //@synthesize leftContextToWordMap=_leftContextToWordMap - In the implementation block
-(id)init;
-(id)description;
-(id)lastWord;
-(void)pushWordToDocument:(id)arg1 ;
-(void)addToContextMap:(id)arg1 ;
-(void)removeFromContextMap:(id)arg1 ;
-(id)wordsForContext:(id)arg1 ;
-(void)insertWord:(id)arg1 atIndex:(long long)arg2 ;
-(id)updateWordEntryAtIndex:(unsigned long long)arg1 withAcceptedString:(id)arg2 documentContext:(id)arg3 ;
-(BOOL)deleteWordsUptoContext:(id)arg1 ;
-(unsigned long long)wordsCount;
-(NSMutableArray *)inDocumentWordsStack;
-(void)setInDocumentWordsStack:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)leftContextToWordMap;
-(void)setLeftContextToWordMap:(NSMutableDictionary *)arg1 ;
@end

