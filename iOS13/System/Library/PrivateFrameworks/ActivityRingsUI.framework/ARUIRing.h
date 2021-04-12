/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <ActivityRingsUI/ARUIAnimatableObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, ARUIIcon, UIColor, NSArray;

@interface ARUIRing : ARUIAnimatableObject <NSCopying> {

	BOOL _vertexAttributesDirty;
	BOOL _calculatedUniformsDirty;
	NSMutableArray* _celebrations;
	NSMutableArray* _celebrationsToRemove;
	BOOL _premultiplyAlpha;
	BOOL _sizeDirty;
	float _screenScale;
	float _ringBoundsDiameter;
	float _scale;
	float _thickness;
	float _interspacing;
	float _size;
	float _zRotation;
	ARUIIcon* _icon;
	 _drawableSize;
	UIColor* _topColor;
	UIColor* _bottomColor;
	UIColor* _contrastColor;
	 _center;
	 _topColorVector;
	 _topColorPremultiplied;
	 _bottomColorVector;
	 _bottomColorPremultiplied;
	 _contrastColorVector;
	SCD_Struct_AR1 _skewAdjustmentMatrix;
	SCD_Struct_AR2 _vertexAttributes;
	SCD_Struct_AR3 _uniforms;

}

@property (nonatomic,readonly) NSArray * celebrations; 
@property (nonatomic,readonly) SCD_Struct_AR2 vertexAttributes;                //@synthesize vertexAttributes=_vertexAttributes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR3 uniforms;                        //@synthesize uniforms=_uniforms - In the implementation block
@property (nonatomic,retain) ARUIIcon * icon;                                  //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) float screenScale;                              //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) float ringBoundsDiameter;                         //@synthesize ringBoundsDiameter=_ringBoundsDiameter - In the implementation block
@property (assign,nonatomic)  drawableSize;                                    //@synthesize drawableSize=_drawableSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 skewAdjustmentMatrix;              //@synthesize skewAdjustmentMatrix=_skewAdjustmentMatrix - In the implementation block
@property (assign,nonatomic) BOOL premultiplyAlpha;                            //@synthesize premultiplyAlpha=_premultiplyAlpha - In the implementation block
@property (nonatomic,retain) UIColor * topColor;                               //@synthesize topColor=_topColor - In the implementation block
@property (nonatomic,retain) UIColor * bottomColor;                            //@synthesize bottomColor=_bottomColor - In the implementation block
@property (nonatomic,retain) UIColor * contrastColor;                          //@synthesize contrastColor=_contrastColor - In the implementation block
@property (assign,nonatomic) float percentage; 
@property (assign,nonatomic) float scale;                                      //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) float thickness;                                  //@synthesize thickness=_thickness - In the implementation block
@property (assign,nonatomic) float interspacing;                               //@synthesize interspacing=_interspacing - In the implementation block
@property (assign,getter=isSizeDirty,nonatomic) BOOL sizeDirty;                //@synthesize sizeDirty=_sizeDirty - In the implementation block
@property (assign,nonatomic) float size;                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) float opacity; 
@property (assign,nonatomic) float emptyOpacity; 
@property (assign,nonatomic) float trackOpacity; 
@property (assign,nonatomic) float zRotation;                                  //@synthesize zRotation=_zRotation - In the implementation block
@property (assign,nonatomic)  center;                                          //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly)  topColorVector;                                //@synthesize topColorVector=_topColorVector - In the implementation block
@property (nonatomic,readonly)  topColorPremultiplied;                         //@synthesize topColorPremultiplied=_topColorPremultiplied - In the implementation block
@property (nonatomic,readonly)  bottomColorVector;                             //@synthesize bottomColorVector=_bottomColorVector - In the implementation block
@property (nonatomic,readonly)  bottomColorPremultiplied;                      //@synthesize bottomColorPremultiplied=_bottomColorPremultiplied - In the implementation block
@property (nonatomic,readonly)  contrastColorVector;                           //@synthesize contrastColorVector=_contrastColorVector - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)size;
-(float)scale;
-(void)setSize:(float)arg1 ;
-()center;
-(void)setCenter:;
-(void)setScale:(float)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(float)percentage;
-(ARUIIcon *)icon;
-(void)setIcon:(ARUIIcon *)arg1 ;
-(void)update:(double)arg1 ;
-(float)thickness;
-(void)setThickness:(float)arg1 ;
-(float)screenScale;
-(void)setDrawableSize:;
-()drawableSize;
-(SCD_Struct_AR2)vertexAttributes;
-(float)zRotation;
-(void)setZRotation:(float)arg1 ;
-(SCD_Struct_AR3)uniforms;
-(void)setPercentage:(float)arg1 ;
-(void)setEmptyOpacity:(float)arg1 ;
-(id)_newAnimatablePropertyForType:(unsigned long long)arg1 ;
-(BOOL)areAnimationsInProgress;
-(void)setTopColor:(UIColor *)arg1 ;
-(void)setTrackOpacity:(float)arg1 ;
-(void)setPremultiplyAlpha:(BOOL)arg1 ;
-(void)setBottomColor:(UIColor *)arg1 ;
-(UIColor *)topColor;
-(UIColor *)bottomColor;
-(UIColor *)contrastColor;
-(void)setContrastColor:(UIColor *)arg1 ;
-(BOOL)premultiplyAlpha;
-(float)emptyOpacity;
-(float)ringBoundsDiameter;
-(void)setRingBoundsDiameter:(float)arg1 ;
-(SCD_Struct_AR1)skewAdjustmentMatrix;
-(void)setSkewAdjustmentMatrix:(SCD_Struct_AR1)arg1 ;
-(float)trackOpacity;
-(float)interspacing;
-(void)setInterspacing:(float)arg1 ;
-(void)_updateTopColorUniform;
-(void)_updateBottomColorUniform;
-(void)_updatePremultipliedTopColor;
-(void)updateCelebrationsWithColors;
-(void)_updatePremultipliedBottomColor;
-(void)updateCalculatedAttributes;
-(void)_updateVertexAttributes;
-(void)_updateCalculatedUniforms;
-(void)updateCelebrationWithColors:(id)arg1 ;
-()topColorVector;
-()bottomColorVector;
-()contrastColorVector;
-(void)addAnimation:(id)arg1 forRingPropertyType:(unsigned long long)arg2 ;
-(void)removeAllAnimationsForRingPropertyType:(unsigned long long)arg1 ;
-(void*)uniformsBytes;
-(void*)vertexAttributesBytes;
-(BOOL)isSizeDirty;
-(void)setSizeDirty:(BOOL)arg1 ;
-()topColorPremultiplied;
-()bottomColorPremultiplied;
-(void)addCelebration:(id)arg1 ;
-(void)removeCelebration:(id)arg1 ;
-(NSArray *)celebrations;
@end

