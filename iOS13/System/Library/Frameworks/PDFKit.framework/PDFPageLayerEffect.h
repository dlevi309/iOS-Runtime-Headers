/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class PDFPageLayerEffectPrivate;

@interface PDFPageLayerEffect : CALayer {

	PDFPageLayerEffectPrivate* _private;

}
+(id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2 forType:(long long)arg3 ;
+(id)createPDFSelectionLayerEffectsForSelections:(id)arg1 withLayer:(id)arg2 ;
+(id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2 ;
+(id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2 ;
+(id)createPDFCoachmarkLayerEffectsWithFrame:(CGRect)arg1 withLayer:(id)arg2 ;
+(id)createPDFNoteLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2 ;
-(id)UUID;
-(void)update;
-(id)annotation;
-(void)addSelection:(id)arg1 ;
-(CGRect)pageFrame;
-(BOOL)shouldRotateContent;
-(void)setSelections:(id)arg1 ;
-(id)pdfResult;
-(id)initWithPDFPageLayer:(id)arg1 ;
-(void)updateColor:(unsigned long long)arg1 ;
-(void)setPageFrame:(CGRect)arg1 ;
@end

