/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)annotation;
-(id)UUID;
-(void)updateColor:(unsigned long long)arg1 ;
-(void)update;
-(void)addSelection:(id)arg1 ;
-(CGRect)pageFrame;
-(BOOL)shouldRotateContent;
-(void)setSelections:(id)arg1 ;
-(id)pdfResult;
-(id)initWithPDFPageLayer:(id)arg1 ;
-(void)setPageFrame:(CGRect)arg1 ;
@end

