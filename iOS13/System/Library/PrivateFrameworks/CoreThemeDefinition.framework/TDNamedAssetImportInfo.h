/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDate, NSSet, NSArray, NSValue;

@interface TDNamedAssetImportInfo : NSObject <NSCopying> {

	BOOL _preservesVectorRepresentation;
	BOOL _optOutOfThinning;
	BOOL _isFlippable;
	BOOL _cubeMap;
	short _autoscalingType;
	int _objectVersion;
	NSString* _name;
	long long _nameIdentifier;
	NSURL* _fileURL;
	NSDate* _modificationDate;
	long long _idiom;
	long long _subtype;
	unsigned long long _scaleFactor;
	long long _renditionType;
	long long _resizingMode;
	long long _templateRenderingMode;
	long long _sizeClassHorizontal;
	long long _sizeClassVertical;
	long long _displayGamut;
	long long _layoutDirection;
	unsigned long long _memoryClass;
	unsigned long long _graphicsClass;
	long long _graphicsFeatureSetClass;
	long long _compressionType;
	double _lossyCompressionQuality;
	NSSet* _tags;
	NSString* _universalTypeIdentifier;
	NSArray* _containedImageNames;
	NSArray* _layerReferences;
	unsigned long long _textureWidth;
	unsigned long long _textureHeight;
	unsigned long long _textureDepth;
	unsigned long long _arrayIndex;
	long long _texturePixelFormat;
	long long _textureInterpretation;
	NSArray* _textureInfos;
	long long _colorSpaceID;
	NSArray* _colorComponents;
	NSString* _systemColorName;
	NSString* _fontName;
	double _fontSize;
	NSString* _foregroundColorName;
	NSString* _backgroundColorName;
	long long _backgroundColorSpaceID;
	NSArray* _backgroundColorComponents;
	long long _textAlignment;
	long long _scalingStyle;
	double _maxPointSize;
	double _minPointSize;
	NSValue* _iconSize;
	NSString* _appearanceName;
	long long _appearanceIdentifier;
	NSString* _localizationName;
	long long _localizationIdentifier;
	CGSize _resizableSliceSize;
	CGSize _physicalSizeInMeters;
	CGSize _canvasSize;
	SCD_Struct_TD15 _sliceInsets;
	CGRect _alignmentRect;
	SCD_Struct_TD9 _transformation;

}

@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long nameIdentifier;                        //@synthesize nameIdentifier=_nameIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                   //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                         //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) long long idiom;                                 //@synthesize idiom=_idiom - In the implementation block
@property (assign,nonatomic) long long subtype;                               //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned long long scaleFactor;                  //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) SCD_Struct_TD15 sliceInsets;                     //@synthesize sliceInsets=_sliceInsets - In the implementation block
@property (assign,nonatomic) long long renditionType;                         //@synthesize renditionType=_renditionType - In the implementation block
@property (assign,nonatomic) long long resizingMode;                          //@synthesize resizingMode=_resizingMode - In the implementation block
@property (assign,nonatomic) CGSize resizableSliceSize;                       //@synthesize resizableSliceSize=_resizableSliceSize - In the implementation block
@property (assign,nonatomic) BOOL preservesVectorRepresentation;              //@synthesize preservesVectorRepresentation=_preservesVectorRepresentation - In the implementation block
@property (assign,nonatomic) short autoscalingType;                           //@synthesize autoscalingType=_autoscalingType - In the implementation block
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) long long templateRenderingMode;                 //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (assign,nonatomic) BOOL optOutOfThinning;                           //@synthesize optOutOfThinning=_optOutOfThinning - In the implementation block
@property (assign,nonatomic) CGRect alignmentRect;                            //@synthesize alignmentRect=_alignmentRect - In the implementation block
@property (assign,nonatomic) long long sizeClassHorizontal;                   //@synthesize sizeClassHorizontal=_sizeClassHorizontal - In the implementation block
@property (assign,nonatomic) long long sizeClassVertical;                     //@synthesize sizeClassVertical=_sizeClassVertical - In the implementation block
@property (assign,nonatomic) long long displayGamut;                          //@synthesize displayGamut=_displayGamut - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                       //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (assign,nonatomic) BOOL isFlippable;                                //@synthesize isFlippable=_isFlippable - In the implementation block
@property (assign,nonatomic) unsigned long long memoryClass;                  //@synthesize memoryClass=_memoryClass - In the implementation block
@property (assign,nonatomic) unsigned long long graphicsClass;                //@synthesize graphicsClass=_graphicsClass - In the implementation block
@property (assign,nonatomic) long long graphicsFeatureSetClass;               //@synthesize graphicsFeatureSetClass=_graphicsFeatureSetClass - In the implementation block
@property (assign,nonatomic) long long compressionType;                       //@synthesize compressionType=_compressionType - In the implementation block
@property (assign,nonatomic) double lossyCompressionQuality;                  //@synthesize lossyCompressionQuality=_lossyCompressionQuality - In the implementation block
@property (nonatomic,copy) NSSet * tags;                                      //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSString * universalTypeIdentifier;                //@synthesize universalTypeIdentifier=_universalTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * containedImageNames;                     //@synthesize containedImageNames=_containedImageNames - In the implementation block
@property (assign,nonatomic) CGSize physicalSizeInMeters;                     //@synthesize physicalSizeInMeters=_physicalSizeInMeters - In the implementation block
@property (assign,nonatomic) SCD_Struct_TD9 transformation;                   //@synthesize transformation=_transformation - In the implementation block
@property (assign,nonatomic) int objectVersion;                               //@synthesize objectVersion=_objectVersion - In the implementation block
@property (assign,nonatomic) CGSize canvasSize;                               //@synthesize canvasSize=_canvasSize - In the implementation block
@property (nonatomic,copy) NSArray * layerReferences;                         //@synthesize layerReferences=_layerReferences - In the implementation block
@property (assign,nonatomic) unsigned long long textureWidth;                 //@synthesize textureWidth=_textureWidth - In the implementation block
@property (assign,nonatomic) unsigned long long textureHeight;                //@synthesize textureHeight=_textureHeight - In the implementation block
@property (assign,nonatomic) unsigned long long textureDepth;                 //@synthesize textureDepth=_textureDepth - In the implementation block
@property (assign,nonatomic) BOOL cubeMap;                                    //@synthesize cubeMap=_cubeMap - In the implementation block
@property (assign,nonatomic) unsigned long long arrayIndex;                   //@synthesize arrayIndex=_arrayIndex - In the implementation block
@property (assign,nonatomic) long long texturePixelFormat;                    //@synthesize texturePixelFormat=_texturePixelFormat - In the implementation block
@property (assign,nonatomic) long long textureInterpretation;                 //@synthesize textureInterpretation=_textureInterpretation - In the implementation block
@property (nonatomic,copy) NSArray * textureInfos;                            //@synthesize textureInfos=_textureInfos - In the implementation block
@property (assign,nonatomic) long long colorSpaceID;                          //@synthesize colorSpaceID=_colorSpaceID - In the implementation block
@property (nonatomic,copy) NSArray * colorComponents;                         //@synthesize colorComponents=_colorComponents - In the implementation block
@property (nonatomic,retain) NSString * systemColorName;                      //@synthesize systemColorName=_systemColorName - In the implementation block
@property (nonatomic,copy) NSString * fontName;                               //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double fontSize;                                 //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,copy) NSString * foregroundColorName;                    //@synthesize foregroundColorName=_foregroundColorName - In the implementation block
@property (nonatomic,copy) NSString * backgroundColorName;                    //@synthesize backgroundColorName=_backgroundColorName - In the implementation block
@property (assign,nonatomic) long long backgroundColorSpaceID;                //@synthesize backgroundColorSpaceID=_backgroundColorSpaceID - In the implementation block
@property (nonatomic,copy) NSArray * backgroundColorComponents;               //@synthesize backgroundColorComponents=_backgroundColorComponents - In the implementation block
@property (assign,nonatomic) long long textAlignment;                         //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) long long scalingStyle;                          //@synthesize scalingStyle=_scalingStyle - In the implementation block
@property (assign,nonatomic) double maxPointSize;                             //@synthesize maxPointSize=_maxPointSize - In the implementation block
@property (assign,nonatomic) double minPointSize;                             //@synthesize minPointSize=_minPointSize - In the implementation block
@property (nonatomic,copy) NSValue * iconSize;                                //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,copy) NSString * appearanceName;                         //@synthesize appearanceName=_appearanceName - In the implementation block
@property (assign,nonatomic) long long appearanceIdentifier;                  //@synthesize appearanceIdentifier=_appearanceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizationName;                       //@synthesize localizationName=_localizationName - In the implementation block
@property (assign,nonatomic) long long localizationIdentifier;                //@synthesize localizationIdentifier=_localizationIdentifier - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSSet *)tags;
-(NSDate *)modificationDate;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(unsigned long long)scaleFactor;
-(void)setScaleFactor:(unsigned long long)arg1 ;
-(NSString *)fontName;
-(void)setFontName:(NSString *)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(long long)subtype;
-(void)setTags:(NSSet *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)idiom;
-(void)setIdiom:(long long)arg1 ;
-(long long)layoutDirection;
-(void)setLayoutDirection:(long long)arg1 ;
-(long long)textAlignment;
-(CGRect)alignmentRect;
-(long long)displayGamut;
-(long long)resizingMode;
-(void)setAppearanceName:(NSString *)arg1 ;
-(long long)templateRenderingMode;
-(NSString *)appearanceName;
-(void)setTemplateRenderingMode:(long long)arg1 ;
-(void)setResizingMode:(long long)arg1 ;
-(BOOL)isTemplate;
-(void)setIsTemplate:(BOOL)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
-(NSValue *)iconSize;
-(void)setIconSize:(NSValue *)arg1 ;
-(BOOL)isFlippable;
-(void)setDisplayGamut:(long long)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(void)setSizeClassHorizontal:(long long)arg1 ;
-(void)setSizeClassVertical:(long long)arg1 ;
-(NSString *)systemColorName;
-(unsigned long long)arrayIndex;
-(void)setArrayIndex:(unsigned long long)arg1 ;
-(CGSize)physicalSizeInMeters;
-(long long)appearanceIdentifier;
-(NSArray *)layerReferences;
-(long long)compressionType;
-(void)setCompressionType:(long long)arg1 ;
-(BOOL)optOutOfThinning;
-(long long)textureInterpretation;
-(NSArray *)colorComponents;
-(long long)colorSpaceID;
-(long long)scalingStyle;
-(double)maxPointSize;
-(double)minPointSize;
-(void)setPhysicalSizeInMeters:(CGSize)arg1 ;
-(void)setColorSpaceID:(long long)arg1 ;
-(void)setOptOutOfThinning:(BOOL)arg1 ;
-(void)setIsFlippable:(BOOL)arg1 ;
-(void)setTextureInterpretation:(long long)arg1 ;
-(void)setColorComponents:(NSArray *)arg1 ;
-(void)setMaxPointSize:(double)arg1 ;
-(void)setMinPointSize:(double)arg1 ;
-(void)setScalingStyle:(long long)arg1 ;
-(int)objectVersion;
-(void)setObjectVersion:(int)arg1 ;
-(SCD_Struct_TD9)transformation;
-(void)setTransformation:(SCD_Struct_TD9)arg1 ;
-(long long)sizeClassHorizontal;
-(long long)sizeClassVertical;
-(long long)renditionType;
-(unsigned long long)memoryClass;
-(unsigned long long)graphicsClass;
-(void)setAlignmentRect:(CGRect)arg1 ;
-(NSArray *)textureInfos;
-(double)lossyCompressionQuality;
-(void)setLossyCompressionQuality:(double)arg1 ;
-(void)setLayerReferences:(NSArray *)arg1 ;
-(BOOL)cubeMap;
-(NSString *)universalTypeIdentifier;
-(void)setGraphicsFeatureSetClass:(long long)arg1 ;
-(long long)graphicsFeatureSetClass;
-(void)setRenditionType:(long long)arg1 ;
-(long long)renditionSubtype;
-(long long)nameIdentifier;
-(void)setNameIdentifier:(long long)arg1 ;
-(void)setMemoryClass:(unsigned long long)arg1 ;
-(long long)localizationIdentifier;
-(NSString *)localizationName;
-(void)setSystemColorName:(NSString *)arg1 ;
-(SCD_Struct_TD15)sliceInsets;
-(CGSize)resizableSliceSize;
-(NSArray *)containedImageNames;
-(BOOL)preservesVectorRepresentation;
-(void)setPreservesVectorRepresentation:(BOOL)arg1 ;
-(short)autoscalingType;
-(void)setAutoscalingType:(short)arg1 ;
-(void)setUniversalTypeIdentifier:(NSString *)arg1 ;
-(long long)texturePixelFormat;
-(void)setCubeMap:(BOOL)arg1 ;
-(unsigned long long)textureWidth;
-(unsigned long long)textureHeight;
-(void)setTexturePixelFormat:(long long)arg1 ;
-(void)setSliceInsets:(SCD_Struct_TD15)arg1 ;
-(void)setResizableSliceSize:(CGSize)arg1 ;
-(void)setContainedImageNames:(NSArray *)arg1 ;
-(void)setTextureWidth:(unsigned long long)arg1 ;
-(void)setTextureHeight:(unsigned long long)arg1 ;
-(unsigned long long)textureDepth;
-(void)setTextureDepth:(unsigned long long)arg1 ;
-(void)setTextureInfos:(NSArray *)arg1 ;
-(NSString *)foregroundColorName;
-(void)setForegroundColorName:(NSString *)arg1 ;
-(NSString *)backgroundColorName;
-(void)setBackgroundColorName:(NSString *)arg1 ;
-(long long)backgroundColorSpaceID;
-(void)setBackgroundColorSpaceID:(long long)arg1 ;
-(NSArray *)backgroundColorComponents;
-(void)setBackgroundColorComponents:(NSArray *)arg1 ;
-(void)setAppearanceIdentifier:(long long)arg1 ;
-(void)setLocalizationName:(NSString *)arg1 ;
-(void)setLocalizationIdentifier:(long long)arg1 ;
-(void)setGraphicsClass:(unsigned long long)arg1 ;
@end

