/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIPDFPage;

@interface UIPDFSelection : NSObject {

	UIPDFPage* _page;
	CGPDFSelectionRef _cgSelection;
	BOOL _dirty;
	CFStringRef _string;
	long long _cachedStartIndex;
	long long _cachedEndIndex;
	SCD_Struct_CP17 stringRange;

}

@property (assign,nonatomic) SCD_Struct_CP17 stringRange; 
-(CGRect)bounds;
-(unsigned long long)startIndex;
-(id)page;
-(id)init;
-(unsigned long long)endIndex;
-(unsigned long long)numberOfRectangles;
-(BOOL)getBounds:(CGRect*)arg1 transform:(CGAffineTransform*)arg2 index:(unsigned long long)arg3 ;
-(id)attributedStringAtIndex:(unsigned long long)arg1 ;
-(id)archive;
-(SCD_Struct_CP17)extent;
-(CGAffineTransform)transform;
-(id)description;
-(BOOL)isWord;
-(id)string;
-(BOOL)isEmpty;
-(id)textAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(SCD_Struct_CP17)stringRange;
-(id)initWithSelection:(id)arg1 ;
-(SCD_Struct_UI6)rectangleAtIndex:(unsigned long long)arg1 scale:(double)arg2 inset:(double)arg3 ;
-(id)initWithPage:(id)arg1 cgSelection:(CGPDFSelectionRef)arg2 ;
-(void)setStringRange:(SCD_Struct_CP17)arg1 ;
-(CGPDFSelectionRef)CGSelection;
-(id)initWithPage:(id)arg1 fromArchive:(id)arg2 ;
-(id)initWithPage:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(BOOL)isNonEmpty;
-(id)selectionExtendedToLineBoundaries;
-(id)containingTextLine;
-(id)htmlAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)extendAtStart:(unsigned long long)arg1 ;
-(unsigned long long)extendAtEnd:(unsigned long long)arg1 ;
-(void)copyToPasteboard;
-(double)baseLineAtIndex:(unsigned long long)arg1 ;
-(void)extendToParagraph;
@end

