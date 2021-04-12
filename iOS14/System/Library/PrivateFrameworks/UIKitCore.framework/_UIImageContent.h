/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class CUINamedVectorGlyph, CIImage;

@interface _UIImageContent : NSObject {

	double _scale;
	BOOL _isDecompressing;
	CGSize _sizeInPixels;

}

@property (nonatomic,readonly) CUINamedVectorGlyph * vectorGlyph; 
@property (nonatomic,readonly) double scale;                                   //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGSize sizeInPixels;                            //@synthesize sizeInPixels=_sizeInPixels - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) CIImage * CIImage; 
@property (nonatomic,readonly) IOSurfaceRef IOSurface; 
@property (nonatomic,readonly) CGPDFPageRef CGPDFPage; 
@property (nonatomic,readonly) CGSVGDocumentRef CGSVGDocument; 
@property (nonatomic,readonly) double vectorScale; 
@property (assign,nonatomic) BOOL isDecompressing;                             //@synthesize isDecompressing=_isDecompressing - In the implementation block
+(id)empty;
-(id)debugQuickLookObject;
-(BOOL)isCGImage;
-(CGSize)sizeInPixels;
-(CUINamedVectorGlyph *)vectorGlyph;
-(CIImage *)CIImage;
-(BOOL)isDecompressing;
-(id)init;
-(BOOL)isIOSurface;
-(CGSize)size;
-(CGSVGDocumentRef)CGSVGDocument;
-(double)scale;
-(BOOL)isCGPDFPage;
-(id)debugDescription;
-(BOOL)hasCGImage;
-(BOOL)canProvideCGImage;
-(BOOL)canProvideFullResCGImage;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)isVectorGlyph;
-(BOOL)isCIImage;
-(CGImageRef)_CGImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGSize)CGSVGDocumentSize;
-(id)renditionApplyingEffect:(id)arg1 ;
-(CGPDFPageRef)CGPDFPage;
-(void)setIsDecompressing:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)_canProvideCGImageDirectly;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)renditionWithSize:(CGSize)arg1 scale:(double)arg2 applyingEffect:(id)arg3 ;
-(id)contentWithCGImage:(CGImageRef)arg1 ;
-(IOSurfaceRef)IOSurface;
-(BOOL)isCGSVGDocument;
-(id)initWithScale:(double)arg1 ;
-(BOOL)isCGImageOnly;
-(CGSize)CGPDFPageSize;
-(CGImageRef)CGImage;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 effect:(id)arg3 ;
-(double)vectorScale;
@end

