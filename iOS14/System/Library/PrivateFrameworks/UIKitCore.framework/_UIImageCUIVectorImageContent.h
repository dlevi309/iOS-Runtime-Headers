/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageCGImageContent.h>

@class CUINamedVectorImage;

@interface _UIImageCUIVectorImageContent : _UIImageCGImageContent {

	CUINamedVectorImage* _vectorImage;
	SCD_Struct_UI36 coreFlags;

}
-(CGSVGDocumentRef)CGSVGDocument;
-(BOOL)isCGPDFPage;
-(BOOL)canProvideFullResCGImage;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)description;
-(id)initWithCGImage:(CGImageRef)arg1 CUIVectorImage:(id)arg2 scale:(double)arg3 ;
-(CGImageRef)_CGImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGPDFPageRef)CGPDFPage;
-(unsigned long long)hash;
-(BOOL)_canProvideCGImageDirectly;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)contentWithCGImage:(CGImageRef)arg1 ;
-(BOOL)isCGSVGDocument;
-(id)initWithScale:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)vectorScale;
@end

