/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFSelectionPrivate, NSArray, UIColor, NSString, NSAttributedString;

@interface PDFSelection : NSObject <NSCopying> {

	PDFSelectionPrivate* _private;

}

@property (nonatomic,readonly) NSArray * pages; 
@property (nonatomic,copy) UIColor * color; 
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) NSAttributedString * attributedString; 
+(id)defaultActiveColor;
+(id)defaultInactiveColor;
-(long long)compare:(id)arg1 ;
-(id)lastPage;
-(void)extendSelectionAtStart:(long long)arg1 ;
-(void)extendSelectionAtEnd:(long long)arg1 ;
-(id)html;
-(NSArray *)pages;
-(UIColor *)color;
-(NSAttributedString *)attributedString;
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)normalize;
-(NSString *)string;
-(id)webArchive;
-(BOOL)isEmpty;
-(id)document;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPage:(id)arg1 ;
-(void)dealloc;
-(id)firstPage;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 onPage:(id)arg2 ;
-(const CFArrayRef)cgSelections;
-(void)addSelection:(id)arg1 ;
-(unsigned long long)numberOfTextRangesOnPage:(id)arg1 ;
-(CGRect)firstSpanBoundsForPage:(id)arg1 ;
-(CGRect)boundsForPage:(id)arg1 ;
-(id)selectionsByLine;
-(BOOL)isStandaloneGraphic;
-(id)asDestination;
-(unsigned long long)pdfKitIndexOfFirstCharacterOnPage:(id)arg1 ;
-(unsigned long long)pdfKitIndexOfLastCharacterOnPage:(id)arg1 ;
-(void)addSelectionNoNormalize:(id)arg1 ;
-(void)addSelectionCore:(id)arg1 normalize:(BOOL)arg2 ;
-(void)addCGSelection:(CGPDFSelectionRef)arg1 forPage:(id)arg2 ;
-(void)setForceBreaks:(BOOL)arg1 ;
-(BOOL)forceBreaks;
-(id)pdfSelectionUUID;
-(void)addSelectionRange:(NSRange)arg1 page:(id)arg2 normalize:(BOOL)arg3 ;
-(id)attributedStringScaled:(double)arg1 ;
-(id)boundsArrayForPage:(id)arg1 ;
-(void)addSelections:(id)arg1 ;
-(void)drawForPage:(id)arg1 withBox:(long long)arg2 active:(BOOL)arg3 ;
-(void)drawForPage:(id)arg1 withBox:(int)arg2 active:(BOOL)arg3 inContext:(CGContextRef)arg4 ;
-(id)cgSelectionPages;
-(NSRange)previewRangeAtIndex:(unsigned long long)arg1 onPage:(id)arg2 ;
-(id)createAttributedStringForCGSelection:(CGPDFSelectionRef)arg1 scaled:(double)arg2 ;
-(BOOL)containsPoint:(CGPoint)arg1 onPage:(id)arg2 ;
-(CGRect)spanBoundsForPage:(id)arg1 atPoint:(CGPoint)arg2 ;
-(CGRect)lastSpanBoundsForPage:(id)arg1 ;
-(void)extendSelectionForLineBoundaries;
-(void)drawForPage:(id)arg1 active:(BOOL)arg2 ;
-(CGPDFSelectionRef)cgSelectionForPage:(id)arg1 ;
-(CGPoint)firstCharCenter;
-(CGPoint)leftMostCharCenter;
-(CGPoint)rightMostCharCenter;
-(unsigned long long)indexOfFirstCharacterOnPage:(id)arg1 ;
-(unsigned long long)indexOfLastCharacterOnPage:(id)arg1 ;
-(id)rtfdData;
@end

