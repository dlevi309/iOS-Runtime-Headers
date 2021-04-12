/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPLayoutArea, NSArray, CPList;

@interface CPListMaker : NSObject <CPDisposable> {

	CPLayoutArea* area;
	NSArray* spacers;
	unsigned textLineCount;
	id* textLines;
	CPList* list;

}
+(void)makeListsInPage:(id)arg1 ;
+(void)makeListsInLayoutArea:(id)arg1 ;
+(void)makeListsInChunk:(id)arg1 ;
-(void)dealloc;
-(void)finalize;
-(void)dispose;
-(void)fetchTextLine:(id)arg1 ;
-(void)makeListItemFrom:(CPListInfo*)arg1 stopAt:(unsigned)arg2 ;
-(BOOL)makeListFrom:(CPListInfo*)arg1 ;
-(void)fetchTextLinesInColumn:(id)arg1 ;
-(void)makeListsInColumn:(id)arg1 ;
-(id)initWithLayoutArea:(id)arg1 ;
-(void)makeLists;
@end

