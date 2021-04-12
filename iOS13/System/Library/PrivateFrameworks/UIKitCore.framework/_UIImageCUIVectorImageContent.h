/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageCGImageContent.h>

@class CUINamedVectorImage;

@interface _UIImageCUIVectorImageContent : _UIImageCGImageContent {

	CUINamedVectorImage* _vectorImage;
	SCD_Struct_UI31 coreFlags;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)canProvideFullResCGImage;
-(id)initWithScale:(double)arg1 ;
-(BOOL)isCGPDFPage;
-(CGPDFPageRef)CGPDFPage;
-(double)vectorScale;
-(BOOL)isCGSVGDocument;
-(CGSVGDocumentRef)CGSVGDocument;
-(BOOL)_canProvideCGImageDirectly;
-(CGImageRef)_CGImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)contentWithCGImage:(CGImageRef)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 CUIVectorImage:(id)arg2 scale:(double)arg3 ;
@end

