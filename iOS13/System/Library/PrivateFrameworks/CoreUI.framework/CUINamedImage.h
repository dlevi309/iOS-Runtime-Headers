/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedImage : CUINamedLookup {

	double _scale;
	cuiniproperties _imageProperties;

}

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale;                                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) long long imageType; 
@property (nonatomic,readonly) SCD_Struct_CS11 edgeInsets; 
@property (nonatomic,readonly) long long resizingMode; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) SCD_Struct_CS11 alignmentEdgeInsets; 
@property (nonatomic,readonly) int blendMode; 
@property (nonatomic,readonly) BOOL hasSliceInformation; 
@property (nonatomic,readonly) BOOL hasAlignmentInformation; 
@property (nonatomic,readonly) BOOL isVectorBased; 
@property (nonatomic,readonly) BOOL preservedVectorRepresentation; 
@property (nonatomic,readonly) BOOL isTemplate; 
@property (nonatomic,readonly) long long templateRenderingMode; 
@property (nonatomic,readonly) BOOL isStructured; 
@property (nonatomic,readonly) BOOL isFlippable; 
@property (nonatomic,readonly) int exifOrientation; 
@property (nonatomic,readonly) BOOL isAlphaCropped; 
@property (nonatomic,readonly) CGImageRef croppedImage; 
-(id)configuration;
-(id)UIImageWithAsset:(id)arg1 configuration:(id)arg2 flippedHorizontally:(BOOL)arg3 optionalVectorImage:(id)arg4 ;
-(id)imageObj;
-(id)description;
-(CGSize)size;
-(double)scale;
-(CGImageRef)image;
-(double)opacity;
-(SCD_Struct_CS11)edgeInsets;
-(long long)resizingMode;
-(int)exifOrientation;
-(BOOL)hasSliceInformation;
-(SCD_Struct_CS11)alignmentEdgeInsets;
-(long long)templateRenderingMode;
-(id)baseKey;
-(BOOL)isTemplate;
-(BOOL)isFlippable;
-(int)blendMode;
-(long long)imageType;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(BOOL)preservedVectorRepresentation;
-(BOOL)isVectorBased;
-(CGSize)originalUncroppedSize;
-(CGImageRef)createImageFromPDFRenditionWithScale:(double)arg1 ;
-(double)positionOfSliceBoundary:(unsigned)arg1 ;
-(BOOL)_cacheRenditionProperties;
-(BOOL)isAlphaCropped;
-(CGRect)alphaCroppedRect;
-(long long)resizingModeWithSubtype:(long long)arg1 ;
-(BOOL)hasAlignmentInformation;
-(CGImageRef)croppedImage;
-(BOOL)isStructured;
@end

