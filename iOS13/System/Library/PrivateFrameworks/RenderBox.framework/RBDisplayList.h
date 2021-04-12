/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/


#import <RenderBox/RenderBox-Structs.h>
@interface RBDisplayList : NSObject {

	DisplayList* _list;
	cf_ptr<CGContext *>* _context;
	ContextDelegate* _delegate;
	BOOL _linearColors;
	CGRect _contentRect;

}

@property (nonatomic,readonly) const DisplayList* rb_displayList; 
@property (assign,nonatomic) BOOL linearColors;                                //@synthesize linearColors=_linearColors - In the implementation block
@property (assign,nonatomic) CGRect contentRect;                               //@synthesize contentRect=_contentRect - In the implementation block
@property (nonatomic,readonly) CGRect boundingRect; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) CGRect clipBoundingBox; 
@property (assign,nonatomic) CGAffineTransform CTM; 
+(id)displayListForCGContext:(CGContextRef)arg1 alpha:(float*)arg2 blendMode:(int*)arg3 ;
-(id)init;
-(void)clear;
-(BOOL)isEmpty;
-(void)save;
-(CGAffineTransform)CTM;
-(void)setCTM:(CGAffineTransform)arg1 ;
-(CGRect)boundingRect;
-(CGRect)contentRect;
-(void)rotateBy:(double)arg1 ;
-(void)setContentRect:(CGRect)arg1 ;
-(void)restore;
-(void)beginLayerWithFlags:(unsigned)arg1 ;
-(void)addBlurFilterWithRadius:(double)arg1 opaque:(BOOL)arg2 ;
-(const DisplayList*)rb_displayList;
-(void)beginLayer;
-(void)drawLayerWithAlpha:(float)arg1 blendMode:(int)arg2 ;
-(void)clipLayerWithAlpha:(float)arg1 mode:(int)arg2 ;
-(CGContextRef)beginCGContextWithAlpha:(float)arg1 ;
-(void)endCGContext;
-(CGRect)clipBoundingBox;
-(void)scaleByX:(double)arg1 Y:(double)arg2 ;
-(void)translateByX:(double)arg1 Y:(double)arg2 ;
-(void)concat:(CGAffineTransform)arg1 ;
-(void)clipShape:(id)arg1 mode:(int)arg2 ;
-(void)drawShape:(id)arg1 fill:(id)arg2 alpha:(float)arg3 blendMode:(int)arg4 ;
-(void)drawDisplayList:(id)arg1 ;
-(void)addShadowStyleWithRadius:(double)arg1 offset:(CGSize)arg2 color:(SCD_Struct_RB23)arg3 mode:(int)arg4 ;
-(void)addProjectionStyleWithArray:(float)arg1 ;
-(void)addBlurFilterWithRadius:(double)arg1 ;
-(void)addColorMultiplyFilterWithColor:(SCD_Struct_RB23)arg1 ;
-(void)addHueRotationFilterWithAngle:(double)arg1 ;
-(void)addSaturationFilterWithAmount:(float)arg1 ;
-(void)addBrightnessFilterWithAmount:(float)arg1 ;
-(void)addContrastFilterWithAmount:(float)arg1 ;
-(void)addLuminanceToAlphaFilter;
-(void)addColorInvertFilter;
-(void)addColorMatrixFilterWithArray:(float)arg1 ;
-(void)addGrayscaleFilterWithAmount:(float)arg1 ;
-(void)addColorMonochromeFilterWithAmount:(float)arg1 color:(SCD_Struct_RB23)arg2 bias:(float)arg3 ;
-(BOOL)linearColors;
-(void)setLinearColors:(BOOL)arg1 ;
@end

