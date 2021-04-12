/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)content:(id)arg1 isEqualToContent:(id)arg2 ;
+(id)empty;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(CGSize)size;
-(double)scale;
-(id)debugQuickLookObject;
-(CGImageRef)CGImage;
-(BOOL)canProvideFullResCGImage;
-(id)initWithScale:(double)arg1 ;
-(BOOL)isCGPDFPage;
-(CGPDFPageRef)CGPDFPage;
-(double)vectorScale;
-(BOOL)isCGSVGDocument;
-(CGSVGDocumentRef)CGSVGDocument;
-(CGSize)sizeInPixels;
-(id)renditionWithSize:(CGSize)arg1 scale:(double)arg2 applyingEffect:(id)arg3 ;
-(CGAffineTransform)_transformForCGContextWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(BOOL)hasCGImage;
-(BOOL)_canProvideCGImageDirectly;
-(CGImageRef)_CGImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(BOOL)canProvideCGImage;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)_drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 effect:(id)arg3 ;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)isCGImageOnly;
-(BOOL)isCGImage;
-(BOOL)isDecompressing;
-(CIImage *)CIImage;
-(BOOL)isCIImage;
-(IOSurfaceRef)IOSurface;
-(BOOL)isIOSurface;
-(CGSize)CGPDFPageSize;
-(CGSize)CGSVGDocumentSize;
-(BOOL)isVectorGlyph;
-(CUINamedVectorGlyph *)vectorGlyph;
-(id)contentWithCGImage:(CGImageRef)arg1 ;
-(id)renditionApplyingEffect:(id)arg1 ;
-(void)setIsDecompressing:(BOOL)arg1 ;
@end

