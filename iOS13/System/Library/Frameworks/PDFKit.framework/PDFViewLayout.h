/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFViewLayoutPrivate, PDFDocument;

@interface PDFViewLayout : NSObject {

	PDFViewLayoutPrivate* _private;

}

@property (assign,nonatomic,__weak) id delegate; 
@property (assign,nonatomic,__weak) PDFDocument * document; 
-(id)init;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setDocument:(PDFDocument *)arg1 ;
-(PDFDocument *)document;
-(CGRect)boundsForPage:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 ;
-(CGSize)contentSizeWithCurrentPage:(id)arg1 ;
-(long long)functionalDisplayMode;
-(id)facingPageForPage:(id)arg1 ;
-(void)invalidateInternalDocumentGeometry;
-(void)generateInternalDocumentGeometry;
-(id)pageNearestPoint:(CGPoint)arg1 currentPage:(id)arg2 ;
-(NSRange)visiblePageRangeInBounds:(CGRect)arg1 currentPage:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3 ;
-(CGRect)normalizedPageBounds:(id)arg1 ;
-(id)visiblePagesInBounds:(CGRect)arg1 currentPage:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3 ;
@end

