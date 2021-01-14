/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNumber:(int)arg1 ;
-(CPList *)list;
-(int)number;
-(void)finalize;
-(id)init;
-(void)dispose;
-(void)setList:(CPList *)arg1 ;
-(void)dealloc;
-(unsigned)paragraphCount;
-(id)paragraphAtIndex:(unsigned)arg1 ;
-(void)addParagraph:(id)arg1 ;
@end

