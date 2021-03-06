/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/


#import <RenderBox/RenderBox-Structs.h>
@class NSString;

@interface RBDisplayList : NSObject {

	DisplayList* _list;
	vector<std::__1::pair<RB::cf_ptr<CGContext *>, RB::ContextDelegate *>, 1, unsigned long>* _contexts;
	unsigned long long _active_contexts;
	CGRect _contentRect;

}

@property (nonatomic,copy,readonly) NSString * xmlDescription; 
@property (nonatomic,readonly) const DisplayList* rb_displayList; 
@property (assign,nonatomic) BOOL linearColors; 
@property (assign,nonatomic) CGRect contentRect;                               //@synthesize contentRect=_contentRect - In the implementation block
@property (nonatomic,readonly) CGRect boundingRect; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) CGRect clipBoundingBox; 
@property (assign,nonatomic) CGAffineTransform CTM; 
@property (assign,nonatomic) int defaultColorSpace; 
+(id)displayListForCGContext:(CGContextRef)arg1 alpha:(float*)arg2 blendMode:(int*)arg3 ;
-(void)clearCaches;
-(void)clear;
-(void)setCTM:(CGAffineTransform)arg1 ;
-(id)init;
-(void)save;
-(CGRect)contentRect;
-(void)restore;
-(void)concat:(CGAffineTransform)arg1 ;
-(void)rotateBy:(double)arg1 ;
-(CGRect)boundingRect;
-(void)setContentRect:(CGRect)arg1 ;
-(void)beginLayer;
-(BOOL)isEmpty;
-(void)endCGContext;
-(CGContextRef)beginCGContextWithAlpha:(float)arg1 ;
-(void)addColorInvertFilter;
-(void)addColorMonochromeFilterWithAmount:(float)arg1 color:(SCD_Struct_RB25)arg2 bias:(float)arg3 ;
-(void)addGrayscaleFilterWithAmount:(float)arg1 ;
-(BOOL)linearColors;
-(void)addLuminanceToAlphaFilter;
-(void)addContrastFilterWithAmount:(float)arg1 ;
-(void)addBrightnessFilterWithAmount:(float)arg1 ;
-(void)addSaturationFilterWithAmount:(float)arg1 ;
-(void)addHueRotationFilterWithAngle:(double)arg1 ;
-(void)addColorMultiplyFilterWithColor:(SCD_Struct_RB25)arg1 ;
-(void)addColorMatrixFilterWithArray:(float)arg1 ;
-(void)addProjectionStyleWithArray:(float)arg1 ;
-(void)addBlurFilterWithRadius:(double)arg1 opaque:(BOOL)arg2 ;
-(void)addShadowStyleWithRadius:(double)arg1 offset:(CGSize)arg2 color:(SCD_Struct_RB25)arg3 mode:(int)arg4 ;
-(void)setLinearColors:(BOOL)arg1 ;
-(void)drawDisplayList:(id)arg1 ;
-(void)drawLayerWithAlpha:(float)arg1 blendMode:(int)arg2 ;
-(void)clipLayerWithAlpha:(float)arg1 mode:(int)arg2 ;
-(void)beginLayerWithFlags:(unsigned)arg1 ;
-(void)drawShape:(id)arg1 fill:(id)arg2 alpha:(float)arg3 blendMode:(int)arg4 ;
-(void)clipShape:(id)arg1 mode:(int)arg2 ;
-(void)translateByX:(double)arg1 Y:(double)arg2 ;
-(CGAffineTransform)CTM;
-(void)beginLayerWithColorSpace:(int)arg1 flags:(unsigned)arg2 ;
-(CGContextRef)beginCGContextWithAlpha:(float)arg1 flags:(unsigned)arg2 ;
-(void)addBlurFilterWithRadius:(double)arg1 colorSpace:(int)arg2 flags:(unsigned)arg3 ;
-(void)addColorMatrixFilterWithArray:(float)arg1 colorSpace:(int)arg2 ;
-(void)addColorMultiplyFilterWithColor:(SCD_Struct_RB25)arg1 colorSpace:(int)arg2 ;
-(void)addHueRotationFilterWithAngle:(double)arg1 colorSpace:(int)arg2 ;
-(void)addSaturationFilterWithAmount:(float)arg1 colorSpace:(int)arg2 ;
-(void)addBrightnessFilterWithAmount:(float)arg1 colorSpace:(int)arg2 ;
-(void)addContrastFilterWithAmount:(float)arg1 colorSpace:(int)arg2 ;
-(void)addLuminanceToAlphaFilterWithColorSpace:(int)arg1 ;
-(void)addColorInvertFilterWithColorSpace:(int)arg1 ;
-(void)addGrayscaleFilterWithAmount:(float)arg1 colorSpace:(int)arg2 ;
-(void)addColorMonochromeFilterWithAmount:(float)arg1 color:(SCD_Struct_RB25)arg2 bias:(float)arg3 colorSpace:(int)arg4 ;
-(int)defaultColorSpace;
-(void)setDefaultColorSpace:(int)arg1 ;
-(const DisplayList*)rb_displayList;
-(CGRect)clipBoundingBox;
-(void)scaleByX:(double)arg1 Y:(double)arg2 ;
-(void)drawInRect:(CGRect)arg1 alpha:(float)arg2 blendMode:(int)arg3 flags:(unsigned)arg4 operation:(/*^block*/id)arg5 ;
-(void)addBlurFilterWithRadius:(double)arg1 ;
-(NSString *)xmlDescription;
@end

