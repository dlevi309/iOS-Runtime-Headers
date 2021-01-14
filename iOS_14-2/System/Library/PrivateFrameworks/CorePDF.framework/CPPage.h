/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPChunk, NSMutableArray;

@interface CPPage : CPChunk <CPDisposable> {

	int pageNumber;
	CGRect pageCropBox;
	BOOL hasZones;
	BOOL hasTextLines;
	BOOL isDirty;
	BOOL isStartOfSection;
	long long maxLayoutZOrder;
	CPChunk* background;
	float complexity;
	int rotation;
	NSMutableArray* shapesOnPage;
	NSMutableArray* imagesOnPage;
	NSMutableArray* graphicsOnPage;
	NSMutableArray* columnsOnPage;
	CPPDFContext* pdfContext;
	BOOL contextOwner;
	CGPDFPageRef pdfPage;
	NSMutableArray* textLinesOnPage;
	void* _layout;
	id hitTest;
	BOOL reconstructed;
	opaque_pthread_mutex_t mutex;

}
+(void)sortByReadingOrder:(id)arg1 ;
-(id)background;
-(id)children;
-(void)setBackground:(id)arg1 ;
-(id)parent;
-(void)setRotation:(int)arg1 ;
-(void)finalize;
-(id)init;
-(int)rotation;
-(void)dispose;
-(void)addColumns:(id)arg1 ;
-(void)setPageNumber:(int)arg1 ;
-(void)addImage:(id)arg1 ;
-(CGPDFPageRef)pdfPage;
-(int)pageNumber;
-(void)accept:(id)arg1 ;
-(id)hitTest;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(CGPDFLayoutRef)layout;
-(void)reconstruct;
-(id)initWithPDFPage:(CGPDFPageRef)arg1 ;
-(void)setPageCropBox:(CGRect)arg1 ;
-(void)setPDFContext:(CPPDFContext*)arg1 ;
-(id)bodyZone;
-(void)addShape:(id)arg1 ;
-(id)graphicsOnPage;
-(void)layDownObjectsOnPage;
-(void)sortByReadingOrder;
-(CGRect)pageCropBox;
-(id)imagesOnPage;
-(id)shapesOnPage;
-(unsigned)traverse:(id)arg1 ordinal:(unsigned)arg2 ;
-(unsigned)setReadingOrder:(id)arg1 from:(unsigned)arg2 ;
-(unsigned)setGraphicPositions:(id)arg1 from:(unsigned)arg2 ;
-(unsigned)setPositionsOf:(id)arg1 from:(unsigned)arg2 ;
-(unsigned)setCellPositionsOf:(id)arg1 from:(unsigned)arg2 ;
-(CPPDFContext*)PDFContext;
-(float)complexity;
-(void)setComplexity:(float)arg1 ;
-(void)setHasZones:(BOOL)arg1 ;
-(BOOL)hasZones;
-(BOOL)hasTextLines;
-(void)setHasTextLines:(BOOL)arg1 ;
-(BOOL)isStartOfSection;
-(void)setIsStartOfSection:(BOOL)arg1 ;
-(void)restoreBackGroundObjectToPage;
-(void)layDownObjectsOnPageOld;
-(id)textLinesOnPage;
-(id)columnsOnPage;
-(BOOL)populatePDFLayout:(CGPDFLayoutRef)arg1 ;
-(CPPDFClipBuffer*)clipBuffer;
@end

