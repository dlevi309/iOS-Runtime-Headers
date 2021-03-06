/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, _CUIPSDSublayerInfo;

@interface CUIPSDImageRef : NSObject {

	CPSDFile* _psd;
	NSString* _path;
	int _file;
	BOOL _parsedForLayers;
	_CUIPSDSublayerInfo* _rootLayers;

}

@property (assign,nonatomic) int file;                   //@synthesize file=_file - In the implementation block
@property (nonatomic,copy) NSString * path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) CPSDFile* psd;              //@synthesize psd=_psd - In the implementation block
+(BOOL)isValidPSDResourceAtPath:(id)arg1 withLayerCount:(unsigned*)arg2 ;
+(BOOL)isValidPSDResourceAtPath:(id)arg1 ;
+(BOOL)isValidPSDResourceAtPath:(id)arg1 withLayerCount:(unsigned*)arg2 validateLayers:(BOOL)arg3 ;
+(BOOL)isValidPSDResourceAtPath:(id)arg1 withImageInfo:(PSDImageInfo*)arg2 ;
-(CPSDFile*)psd;
-(int)file;
-(void)setFile:(int)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)layerNames;
-(CGSize)size;
-(id)layerEnumerator;
-(void)enumerateLayersUsingBlock:(/*^block*/id)arg1 ;
-(CPSDFile*)psdFile;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)setPsd:(CPSDFile*)arg1 ;
-(PSDImageInfo)imageInfo;
-(BOOL)openImageFile;
-(id)imageFromRef:(CGImageRef)arg1 ;
-(BOOL)loadPSDFileWithLayers:(BOOL)arg1 ;
-(CPSDFile*)_psdFileWithLayers:(BOOL)arg1 ;
-(CGImageRef)_copyCGImageAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_imageAtAbsoluteIndex:(unsigned)arg1 isZeroSizeImage:(BOOL*)arg2 ;
-(id)_createMaskFromSlice:(unsigned)arg1 atAbsoluteIndex:(unsigned)arg2 ;
-(id)_imageFromSlice:(unsigned)arg1 atAbsoluteIndex:(unsigned)arg2 isEmptyImage:(BOOL*)arg3 ;
-(id)_patternFromSlice:(unsigned)arg1 atAbsoluteIndex:(unsigned)arg2 isZeroSizeImage:(BOOL*)arg3 ;
-(CPSDFile*)psdFileForComposite;
-(CGImageRef)createCompositeCGImage;
-(id)_layerInfo;
-(CGRect)_boundsAtAbsoluteIndex:(unsigned)arg1 ;
-(int)_layerIndexFromLayerNames:(id)arg1 indexRangeBegin:(int)arg2 indexRangeEnd:(int)arg3 isTopLevel:(BOOL)arg4 ;
-(id)maskFromCompositeAlphaChannel:(long long)arg1 ;
-(SCD_Struct_CS12)metricsInMask:(id)arg1 forRect:(CGRect)arg2 ;
-(BOOL)_visibilityAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_layerRefAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_namesOfSublayers:(id)arg1 ;
-(id)_fillSampleAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_gradientAtAbsoluteIndex:(unsigned)arg1 ;
-(BOOL)_treatDividerAsLayer;
-(id)_copySublayerInfoAtAbsoluteIndex:(unsigned)arg1 atRoot:(BOOL)arg2 ;
-(int)cgBlendModeForPSDLayerOrLayerEffectBlendMode:(unsigned)arg1 ;
-(CGImageRef)createCGImageAtLayer:(unsigned)arg1 ;
-(CGRect)boundsAtLayer:(unsigned)arg1 ;
-(CGColorSpaceRef)copyColorSpace;
-(id)fillSampleAtLayer:(unsigned)arg1 ;
-(id)colorFromDocumentColor:(double*)arg1 ;
-(id)_colorOverlayFromLayerEffectsInfo:(CPSDObjectEffectsLayerInfo*)arg1 ;
-(id)_gradientOverlayFromLayerEffectsAtAbsoluteIndex:(unsigned)arg1 ;
-(id)imageFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 ;
-(id)_dropShadowFromLayerEffectsInfo:(CPSDObjectEffectsLayerInfo*)arg1 ;
-(id)_innerShadowFromLayerEffectsInfo:(CPSDObjectEffectsLayerInfo*)arg1 ;
-(id)_innerGlowFromLayerEffectsInfo:(CPSDObjectEffectsLayerInfo*)arg1 ;
-(id)_outerGlowFromLayerEffectsInfo:(CPSDObjectEffectsLayerInfo*)arg1 ;
-(id)imageAtLayer:(unsigned)arg1 ;
-(id)_bevelEmbossFromLayerEffectsInfo:(CPSDObjectEffectsLayerInfo*)arg1 ;
-(id)imageAtLayer:(unsigned)arg1 isZeroSizeImage:(BOOL*)arg2 ;
-(id)imageFromSlice:(unsigned)arg1 atAbsoluteLayer:(unsigned)arg2 ;
-(id)imageFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 isEmptyImage:(BOOL*)arg3 ;
-(id)patternFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 ;
-(id)compositeImage;
-(id)patternFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 isZeroSizeImage:(BOOL*)arg3 ;
-(id)maskFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 ;
-(CGRect)boundsForSlice:(unsigned)arg1 ;
-(int)absoluteLayerIndexFromLayerNames:(id)arg1 ;
-(SCD_Struct_CS12)metricsInAlphaChannel:(long long)arg1 forRect:(CGRect)arg2 ;
-(BOOL)visibilityAtLayer:(unsigned)arg1 ;
-(id)layerRefAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfSlices;
-(unsigned)numberOfChannels;
-(id)metadataString;
-(id)gradientAtLayer:(unsigned)arg1 ;
-(unsigned)_absoluteIndexOfRootLayer:(unsigned)arg1 ;
-(id)_nameAtAbsoluteIndex:(unsigned)arg1 ;
-(CPSDLayerRecord*)_psdLayerRecordAtAbsoluteIndex:(unsigned)arg1 ;
-(void)_logInvalidAbsoluteIndex:(unsigned)arg1 psd:(CPSDFile*)arg2 ;
-(double)_opacityAtAbsoluteIndex:(unsigned)arg1 ;
-(double)_fillOpacityAtAbsoluteIndex:(unsigned)arg1 ;
-(int)_blendModeAtAbsluteIndex:(unsigned)arg1 ;
-(id)_layerEffectsAtAbsoluteIndex:(unsigned)arg1 ;
-(unsigned)numberOfLayers;
-(void)dealloc;
@end

