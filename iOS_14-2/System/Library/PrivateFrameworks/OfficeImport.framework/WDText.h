/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)content;
-(void)addBlock:(id)arg1 ;
-(WDTableCell *)tableCell;
-(id)blocks;
-(id)description;
-(id)paragraphs;
-(BOOL)isEmpty;
-(WDDocument *)document;
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

