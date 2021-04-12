/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPList;

@interface CPParagraphListItem : NSObject <CPDisposable> {

	CPList* list;
	int number;
	CFArrayRef paragraphs;

}

@property (nonatomic,retain) CPList * list; 
@property (assign,nonatomic) int number; 
-(id)init;
-(void)dealloc;
-(void)finalize;
-(CPList *)list;
-(int)number;
-(void)setNumber:(int)arg1 ;
-(void)dispose;
-(void)setList:(CPList *)arg1 ;
-(unsigned)paragraphCount;
-(id)paragraphAtIndex:(unsigned)arg1 ;
-(void)addParagraph:(id)arg1 ;
@end

