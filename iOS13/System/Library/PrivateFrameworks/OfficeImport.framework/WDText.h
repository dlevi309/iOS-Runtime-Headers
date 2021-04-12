/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray, WDDocument, WDTableCell;

@interface WDText : NSObject {

	NSMutableArray* mBlocks;
	int mTextType;
	WDDocument* mDocument;
	WDTableCell* mTableCell;

}

@property (__weak,readonly) WDDocument * document; 
@property (__weak,readonly) WDTableCell * tableCell; 
-(id)description;
-(BOOL)isEmpty;
-(id)blocks;
-(id)content;
-(WDTableCell *)tableCell;
-(WDDocument *)document;
-(id)paragraphs;
-(void)addBlock:(id)arg1 ;
-(unsigned long long)blockCount;
-(id)blockAt:(unsigned long long)arg1 ;
-(id)addParagraph;
-(int)textType;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(void)removeLastBlock;
-(int)tableNestingLevel;
-(id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3 ;
-(id)initWithDocument:(id)arg1 textType:(int)arg2 ;
-(id)blockIterator;
-(id)newBlockIterator;
-(id)runIterator;
-(id)newRunIterator;
-(unsigned long long)indexOfBlock:(id)arg1 ;
-(id)addParagraphAtIndex:(int)arg1 ;
-(id)firstParagraph;
-(id)addTableAtIndex:(int)arg1 ;
-(id)lastBlock;
-(id)addTable;
@end

