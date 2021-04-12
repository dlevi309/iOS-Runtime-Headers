/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, NSData, NSDictionary;

@interface CUIThemeRendition : NSObject {

	renditionkeytoken _stackKey[22];
	renditionkeytoken* _key;
	long long _type;
	unsigned _subtype;
	unsigned _scale;
	int _exifOrientation;
	int _blendMode;
	struct {
		unsigned isHeaderFlaggedFPO : 1;
		unsigned isExcludedFromContrastFilter : 1;
		unsigned isVectorBased : 1;
		unsigned isOpaque : 1;
		unsigned bitmapEncoding : 4;
		unsigned optOutOfThinning : 1;
		unsigned isFlippable : 1;
		unsigned isTintable : 1;
		unsigned preservedVectorRepresentation : 1;
		unsigned reserved : 20;
	}  _renditionFlags;
	long long _templateRenderingMode;
	long long _artworkStatus;
	unsigned long long _colorSpaceID;
	NSString* _name;
	NSData* _srcData;
	double _opacity;
	NSString* _utiType;
	CGImageRef _uncroppedImage;
	CGSize _physicalSizeInMeters;
	NSDictionary* _properties;

}

@property (assign,nonatomic) long long type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned subtype;                                     //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned internalScale;                               //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long internalTemplateRenderingMode;              //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (nonatomic,retain) NSString * internalName; 
@property (nonatomic,readonly) NSData * srcData;                                   //@synthesize srcData=_srcData - In the implementation block
@property (assign,nonatomic) long long artworkStatus;                              //@synthesize artworkStatus=_artworkStatus - In the implementation block
@property (assign,nonatomic) double opacity;                                       //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                                        //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) int exifOrientation;                                  //@synthesize exifOrientation=_exifOrientation - In the implementation block
+(id)displayNameForRenditionType:(long long)arg1 ;
+(Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned)arg2 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(const renditionkeytoken*)key;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setName:(id)arg1 ;
-(id)data;
-(double)scale;
-(CGColorRef)cgColor;
-(BOOL)isOpaque;
-(id)properties;
-(int)pixelFormat;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(unsigned)subtype;
-(id)metrics;
-(id)utiType;
-(CGPDFDocumentRef)pdfDocument;
-(CGSVGDocumentRef)svgDocument;
-(int)exifOrientation;
-(long long)templateRenderingMode;
-(void)setExifOrientation:(int)arg1 ;
-(id)gradient;
-(BOOL)isFlippable;
-(void)setSubtype:(unsigned)arg1 ;
-(BOOL)substituteWithSystemColor;
-(id)systemColorName;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(NSString *)internalName;
-(CGImageRef)uncroppedImage;
-(CGSize)physicalSizeInMeters;
-(double)vectorGlyphBaseline;
-(double)vectorGlyphCapLine;
-(double)vectorGlyphReferencePointSize;
-(id)vectorGlyphAvailableSizes;
-(SCD_Struct_CS11)vectorGlyphAlignmentRectInsets;
-(id)contentNames;
-(id)layerReferences;
-(CGImageRef)unslicedImage;
-(id)linkingToRendition;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(unsigned short)valueForTokenIdentifier:(unsigned short)arg1 ;
-(id)sizeIndexes;
-(BOOL)optOutOfThinning;
-(BOOL)preservedVectorRepresentation;
-(BOOL)isTintable;
-(unsigned)gradientStyle;
-(unsigned long long)colorSpaceID;
-(BOOL)isVectorBased;
-(id)effectPreset;
-(CGSize)originalUncroppedSize;
-(int)objectVersion;
-(SCD_Struct_CS10)transformation;
-(id)modelAsset;
-(id)modelMesh;
-(id)modelSubmesh;
-(unsigned)internalScale;
-(void)setInternalScale:(unsigned)arg1 ;
-(void)_setStructuredThemeStore:(id)arg1 ;
-(id)_initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(const csitextstyle*)csiTextStyle;
-(void)setArtworkStatus:(long long)arg1 ;
-(void)_initializeRenditionKey:(const renditionkeytoken*)arg1 ;
-(NSData *)srcData;
-(CGImageRef)createImageFromPDFRenditionWithScale:(double)arg1 ;
-(id)assetPackIdentifier;
-(id)externalTags;
-(BOOL)isTiled;
-(id)imageForSliceIndex:(long long)arg1 ;
-(BOOL)isScaled;
-(id)maskForSliceIndex:(long long)arg1 ;
-(BOOL)edgesOnly;
-(id)sliceInformation;
-(double)gradientDrawingAngle;
-(cuithemerenditionrenditionflags*)renditionFlags;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
-(id)provideTextureInfo;
-(CGRect)alphaCroppedRect;
-(BOOL)isHeaderFlaggedFPO;
-(long long)artworkStatus;
-(unsigned long long)sourceRowbytes;
-(CGSize)unslicedSize;
-(id)mipLevels;
-(id)textureImages;
-(void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1 ;
-(id)_sourceRendition;
-(int)bitmapEncoding;
-(CGRect)_destinationFrame;
-(BOOL)isInternalLink;
-(void)_initializeCompositingOptionsFromCSIData:(const csiheader*)arg1 ;
-(void)_initializePropertiesFromCSIData:(const csiheader*)arg1 ;
-(void)setInternalName:(NSString *)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(long long)internalTemplateRenderingMode;
-(void)setInternalTemplateRenderingMode:(long long)arg1 ;
@end

