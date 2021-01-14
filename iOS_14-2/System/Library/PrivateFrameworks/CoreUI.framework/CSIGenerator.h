/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, NSMutableArray, CUIPSDGradient, NSData, CUIShapeEffectPreset, NSDate, NSSet, NSArray, NSDictionary, MDLAsset, MDLMesh, MDLSubmesh;

@interface CSIGenerator : NSObject {

	CGSize _size;
	NSString* _name;
	NSString* _utiType;
	CGSize _physicalSizeInMeters;
	NSMutableArray* _slices;
	NSMutableArray* _bitmaps;
	NSMutableArray* _metrics;
	NSMutableArray* _layerReferences;
	BOOL _isExcludedFromFilter;
	BOOL _isVectorBased;
	long long _templateRenderingMode;
	BOOL _allowsMultiPassEncoding;
	BOOL _allowsOptimalRowbytesPacking;
	BOOL _allowsPaletteImageCompression;
	BOOL _allowsHevcCompression;
	BOOL _allowsDeepmapImageCompression;
	BOOL _allowsDeepmap2ImageCompression;
	BOOL _optOutOfThinning;
	BOOL _preservedVectorRepresentation;
	BOOL _isFlippable;
	BOOL _isTintable;
	long long _targetPlatform;
	short _colorSpaceID;
	short _layout;
	unsigned _scaleFactor;
	CUIPSDGradient* _gradient;
	NSData* _rawData;
	CUIShapeEffectPreset* _effectPreset;
	int _blendMode;
	double _opacity;
	NSDate* _modtime;
	unsigned _pixelFormat;
	int _exifOrientation;
	unsigned long long _rowbytes;
	NSString* _assetPackIdentifier;
	NSSet* _externalTags;
	CGRect _externalReferenceFrame;
	unsigned short _linkLayout;
	CGSize _originalUncroppedSize;
	CGRect _alphaCroppedFrame;
	NSArray* _containedNamedElements;
	double _compressionQuality;
	long long _compressionType;
	BOOL _isCubeMap;
	long long _textureFormat;
	long long _textureInterpretation;
	NSMutableArray* _mipReferences;
	BOOL _textureOpaque;
	NSArray* _colorComponents;
	NSString* _systemColorName;
	NSDictionary* _sizesByIndex;
	BOOL _clampMetrics;
	NSString* _fontName;
	double _fontSize;
	double _maxPointSize;
	double _minPointSize;
	short _scalingStyle;
	short _alignment;
	NSDictionary* _renditionProperties;
	int _objectVersion;
	SCD_Struct_CS10 _transformation;
	MDLAsset* _modelAsset;
	NSMutableArray* _meshReferences;
	MDLMesh* _modelMesh;
	NSMutableArray* _submeshReferences;
	MDLSubmesh* _modelSubmesh;
	NSArray* _vectorSizes;
	unsigned _standardVectorSize;
	float _baseline;
	float _capHeight;
	float _templateVersion;
	SCD_Struct_CS11 _alignmentRectInsets;

}

@property (assign,nonatomic) double compressionQuality; 
@property (assign) long long targetPlatform; 
@property (assign) long long compressionType; 
@property (assign,nonatomic) CGSize size;                                                                      //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * utiType;                                                                 //@synthesize utiType=_utiType - In the implementation block
@property (assign,nonatomic) CGSize physicalSizeInMeters;                                                      //@synthesize physicalSizeInMeters=_physicalSizeInMeters - In the implementation block
@property (assign,nonatomic) BOOL isVectorBased;                                                               //@synthesize isVectorBased=_isVectorBased - In the implementation block
@property (assign,nonatomic) long long templateRenderingMode;                                                  //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (assign,getter=isExcludedFromContrastFilter,nonatomic) BOOL excludedFromContrastFilter;              //@synthesize isExcludedFromFilter=_isExcludedFromFilter - In the implementation block
@property (assign,nonatomic) BOOL optOutOfThinning;                                                            //@synthesize optOutOfThinning=_optOutOfThinning - In the implementation block
@property (assign,nonatomic) BOOL preservedVectorRepresentation;                                               //@synthesize preservedVectorRepresentation=_preservedVectorRepresentation - In the implementation block
@property (assign,nonatomic) BOOL isFlippable;                                                                 //@synthesize isFlippable=_isFlippable - In the implementation block
@property (assign,nonatomic) BOOL isTintable;                                                                  //@synthesize isTintable=_isTintable - In the implementation block
@property (assign,nonatomic) short colorSpaceID;                                                               //@synthesize colorSpaceID=_colorSpaceID - In the implementation block
@property (assign,nonatomic) unsigned scaleFactor;                                                             //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) unsigned pixelFormat;                                                             //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) BOOL allowsMultiPassEncoding;                                                     //@synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding - In the implementation block
@property (assign,nonatomic) BOOL allowsOptimalRowbytesPacking;                                                //@synthesize allowsOptimalRowbytesPacking=_allowsOptimalRowbytesPacking - In the implementation block
@property (assign,nonatomic) BOOL allowsPaletteImageCompression;                                               //@synthesize allowsPaletteImageCompression=_allowsPaletteImageCompression - In the implementation block
@property (assign,nonatomic) BOOL allowsHevcCompression;                                                       //@synthesize allowsHevcCompression=_allowsHevcCompression - In the implementation block
@property (assign,nonatomic) BOOL allowsDeepmapImageCompression;                                               //@synthesize allowsDeepmapImageCompression=_allowsDeepmapImageCompression - In the implementation block
@property (assign,nonatomic) BOOL allowsDeepmap2ImageCompression;                                              //@synthesize allowsDeepmap2ImageCompression=_allowsDeepmap2ImageCompression - In the implementation block
@property (assign,nonatomic) int exifOrientation;                                                              //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (assign,nonatomic) CGSize originalUncroppedSize;                                                     //@synthesize originalUncroppedSize=_originalUncroppedSize - In the implementation block
@property (assign,nonatomic) CGRect alphaCroppedFrame;                                                         //@synthesize alphaCroppedFrame=_alphaCroppedFrame - In the implementation block
@property (assign,nonatomic) BOOL clampMetrics;                                                                //@synthesize clampMetrics=_clampMetrics - In the implementation block
@property (assign,nonatomic) long long textureFormat;                                                          //@synthesize textureFormat=_textureFormat - In the implementation block
@property (assign,nonatomic) long long textureInterpretation;                                                  //@synthesize textureInterpretation=_textureInterpretation - In the implementation block
@property (assign,nonatomic) BOOL textureOpaque;                                                               //@synthesize textureOpaque=_textureOpaque - In the implementation block
@property (assign,nonatomic) BOOL cubemap;                                                                     //@synthesize isCubeMap=_isCubeMap - In the implementation block
@property (nonatomic,readonly) NSArray * mipReferences;                                                        //@synthesize mipReferences=_mipReferences - In the implementation block
@property (nonatomic,readonly) NSArray * layerReferences;                                                      //@synthesize layerReferences=_layerReferences - In the implementation block
@property (nonatomic,retain) CUIPSDGradient * gradient;                                                        //@synthesize gradient=_gradient - In the implementation block
@property (nonatomic,retain) CUIShapeEffectPreset * effectPreset;                                              //@synthesize effectPreset=_effectPreset - In the implementation block
@property (assign,nonatomic) int blendMode;                                                                    //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) double opacity;                                                                   //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,copy) NSDate * modtime;                                                                   //@synthesize modtime=_modtime - In the implementation block
@property (nonatomic,copy) NSArray * colorComponents;                                                          //@synthesize colorComponents=_colorComponents - In the implementation block
@property (nonatomic,copy) NSDictionary * sizesByIndex;                                                        //@synthesize sizesByIndex=_sizesByIndex - In the implementation block
@property (nonatomic,copy) NSString * fontName;                                                                //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double fontSize;                                                                  //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double maxPointSize;                                                              //@synthesize maxPointSize=_maxPointSize - In the implementation block
@property (assign,nonatomic) double minPointSize;                                                              //@synthesize minPointSize=_minPointSize - In the implementation block
@property (assign,nonatomic) short scalingStyle;                                                               //@synthesize scalingStyle=_scalingStyle - In the implementation block
@property (assign,nonatomic) short alignment;                                                                  //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,copy) NSDictionary * renditionProperties;                                                 //@synthesize renditionProperties=_renditionProperties - In the implementation block
@property (assign,nonatomic) int objectVersion;                                                                //@synthesize objectVersion=_objectVersion - In the implementation block
@property (assign,nonatomic) SCD_Struct_CS10 transformation;                                                   //@synthesize transformation=_transformation - In the implementation block
@property (nonatomic,copy) MDLAsset * modelAsset;                                                              //@synthesize modelAsset=_modelAsset - In the implementation block
@property (nonatomic,readonly) NSArray * meshReferences;                                                       //@synthesize meshReferences=_meshReferences - In the implementation block
@property (nonatomic,copy) MDLMesh * modelMesh;                                                                //@synthesize modelMesh=_modelMesh - In the implementation block
@property (nonatomic,readonly) NSArray * submeshReferences;                                                    //@synthesize submeshReferences=_submeshReferences - In the implementation block
@property (nonatomic,copy) MDLSubmesh * modelSubmesh;                                                          //@synthesize modelSubmesh=_modelSubmesh - In the implementation block
@property (nonatomic,copy) NSArray * vectorSizes;                                                              //@synthesize vectorSizes=_vectorSizes - In the implementation block
@property (assign,nonatomic) unsigned standardVectorSize;                                                      //@synthesize standardVectorSize=_standardVectorSize - In the implementation block
@property (assign,nonatomic) float baseline;                                                                   //@synthesize baseline=_baseline - In the implementation block
@property (assign,nonatomic) float capHeight;                                                                  //@synthesize capHeight=_capHeight - In the implementation block
@property (assign,nonatomic) SCD_Struct_CS11 alignmentRectInsets;                                              //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (assign,nonatomic) float templateVersion;                                                            //@synthesize templateVersion=_templateVersion - In the implementation block
+(void)initialize;
+(void)setFileEncoding:(int)arg1 ;
+(int)fileEncoding;
-(void)setFontName:(NSString *)arg1 ;
-(double)fontSize;
-(int)blendMode;
-(NSString *)fontName;
-(void)setScaleFactor:(unsigned)arg1 ;
-(double)maxPointSize;
-(unsigned)scaleFactor;
-(id)initWithCanvasSize:(CGSize)arg1 sliceCount:(unsigned)arg2 layout:(short)arg3 ;
-(BOOL)allowsHevcCompression;
-(void)setCompressionType:(long long)arg1 ;
-(long long)targetPlatform;
-(BOOL)optOutOfThinning;
-(void)setColorSpaceID:(short)arg1 ;
-(void)setTargetPlatform:(long long)arg1 ;
-(double)compressionQuality;
-(void)setCompressionQuality:(double)arg1 ;
-(BOOL)allowsPaletteImageCompression;
-(void)setAllowsPaletteImageCompression:(BOOL)arg1 ;
-(void)setAllowsHevcCompression:(BOOL)arg1 ;
-(BOOL)allowsDeepmapImageCompression;
-(void)setAllowsDeepmapImageCompression:(BOOL)arg1 ;
-(BOOL)allowsDeepmap2ImageCompression;
-(void)setAllowsDeepmap2ImageCompression:(BOOL)arg1 ;
-(BOOL)isTintable;
-(BOOL)preservedVectorRepresentation;
-(long long)textureInterpretation;
-(BOOL)allowsMultiPassEncoding;
-(float)baseline;
-(MDLMesh *)modelMesh;
-(NSArray *)colorComponents;
-(short)scalingStyle;
-(double)minPointSize;
-(NSDictionary *)sizesByIndex;
-(BOOL)cubemap;
-(NSArray *)layerReferences;
-(SCD_Struct_CS11)alignmentRectInsets;
-(id)initWithShapeEffectPreset:(id)arg1 forScaleFactor:(unsigned)arg2 ;
-(id)initWithNameList:(id)arg1 ;
-(id)initWithRawData:(id)arg1 pixelFormat:(unsigned)arg2 layout:(short)arg3 ;
-(id)initWithExternalReference:(id)arg1 tags:(id)arg2 ;
-(void)addMetrics:(SCD_Struct_CS12)arg1 ;
-(short)alignment;
-(id)initWithLayerStackData:(id)arg1 withCanvasSize:(CGSize)arg2 ;
-(id)initWithTextureForPixelFormat:(long long)arg1 ;
-(id)initWithTextureImageWithSize:(CGSize)arg1 forPixelFormat:(long long)arg2 cubeMap:(BOOL)arg3 ;
-(id)initWithModelAsset:(id)arg1 ;
-(void)addBitmap:(id)arg1 ;
-(id)initWithInternalReferenceRect:(CGRect)arg1 layout:(short)arg2 ;
-(id)initWithColorNamed:(id)arg1 colorSpaceID:(unsigned long long)arg2 components:(id)arg3 ;
-(id)initWithColorNamed:(id)arg1 colorSpaceID:(unsigned long long)arg2 components:(id)arg3 linkedToSystemColorWithName:(id)arg4 ;
-(unsigned)pixelFormat;
-(id)initWithTextStyleNamed:(id)arg1 fontName:(id)arg2 fontSize:(double)arg3 maxPointSize:(double)arg4 minPointSize:(double)arg5 scalingStyle:(short)arg6 alignment:(short)arg7 ;
-(id)initWithMultisizeImageSetNamed:(id)arg1 sizesByIndex:(id)arg2 ;
-(void)addSliceRect:(CGRect)arg1 ;
-(id)initWithModelMesh:(id)arg1 ;
-(id)initWithModelSubmesh:(id)arg1 ;
-(void)addLayerReference:(id)arg1 ;
-(void)addMipReference:(id)arg1 ;
-(void)addMeshReference:(id)arg1 ;
-(void)addSubmeshReference:(id)arg1 ;
-(id)CSIRepresentationWithCompression:(BOOL)arg1 ;
-(CGSize)size;
-(void)setUtiType:(NSString *)arg1 ;
-(void)setPhysicalSizeInMeters:(CGSize)arg1 ;
-(BOOL)isVectorBased;
-(void)setIsVectorBased:(BOOL)arg1 ;
-(BOOL)isExcludedFromContrastFilter;
-(void)setExcludedFromContrastFilter:(BOOL)arg1 ;
-(CUIShapeEffectPreset *)effectPreset;
-(void)setModtime:(NSDate *)arg1 ;
-(void)setOriginalUncroppedSize:(CGSize)arg1 ;
-(CGRect)alphaCroppedFrame;
-(void)setAlphaCroppedFrame:(CGRect)arg1 ;
-(void)setAllowsMultiPassEncoding:(BOOL)arg1 ;
-(BOOL)allowsOptimalRowbytesPacking;
-(void)setOptOutOfThinning:(BOOL)arg1 ;
-(void)setAllowsOptimalRowbytesPacking:(BOOL)arg1 ;
-(void)setPreservedVectorRepresentation:(BOOL)arg1 ;
-(void)setIsFlippable:(BOOL)arg1 ;
-(void)setIsTintable:(BOOL)arg1 ;
-(void)setCubemap:(BOOL)arg1 ;
-(long long)textureFormat;
-(void)setTextureFormat:(long long)arg1 ;
-(MDLAsset *)modelAsset;
-(void)setTextureInterpretation:(long long)arg1 ;
-(NSArray *)mipReferences;
-(BOOL)textureOpaque;
-(void)setTextureOpaque:(BOOL)arg1 ;
-(void)setColorComponents:(NSArray *)arg1 ;
-(void)setSizesByIndex:(NSDictionary *)arg1 ;
-(BOOL)clampMetrics;
-(void)setClampMetrics:(BOOL)arg1 ;
-(int)objectVersion;
-(void)setAlignmentRectInsets:(SCD_Struct_CS11)arg1 ;
-(void)setMaxPointSize:(double)arg1 ;
-(void)setMinPointSize:(double)arg1 ;
-(void)setScalingStyle:(short)arg1 ;
-(NSDictionary *)renditionProperties;
-(void)setRenditionProperties:(NSDictionary *)arg1 ;
-(void)setObjectVersion:(int)arg1 ;
-(void)setModelAsset:(MDLAsset *)arg1 ;
-(NSArray *)meshReferences;
-(void)setModelMesh:(MDLMesh *)arg1 ;
-(NSArray *)submeshReferences;
-(MDLSubmesh *)modelSubmesh;
-(void)setModelSubmesh:(MDLSubmesh *)arg1 ;
-(NSArray *)vectorSizes;
-(void)setVectorSizes:(NSArray *)arg1 ;
-(unsigned)standardVectorSize;
-(void)setStandardVectorSize:(unsigned)arg1 ;
-(void)setCapHeight:(float)arg1 ;
-(void)setTemplateVersion:(float)arg1 ;
-(double)opacity;
-(id)rawData;
-(void)setSize:(CGSize)arg1 ;
-(short)colorSpaceID;
-(long long)templateRenderingMode;
-(void)setOpacity:(double)arg1 ;
-(SCD_Struct_CS10)transformation;
-(void)setTransformation:(SCD_Struct_CS10)arg1 ;
-(NSString *)utiType;
-(void)setAlignment:(short)arg1 ;
-(NSDate *)modtime;
-(void)setPixelFormat:(unsigned)arg1 ;
-(NSString *)name;
-(float)capHeight;
-(void)setExifOrientation:(int)arg1 ;
-(int)exifOrientation;
-(void)setTemplateRenderingMode:(long long)arg1 ;
-(CGSize)originalUncroppedSize;
-(void)setFontSize:(double)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(BOOL)isFlippable;
-(void)setBaseline:(float)arg1 ;
-(void)setGradient:(CUIPSDGradient *)arg1 ;
-(CGSize)physicalSizeInMeters;
-(float)templateVersion;
-(CUIPSDGradient *)gradient;
-(void)dealloc;
-(void)setEffectPreset:(CUIShapeEffectPreset *)arg1 ;
-(long long)compressionType;
@end

