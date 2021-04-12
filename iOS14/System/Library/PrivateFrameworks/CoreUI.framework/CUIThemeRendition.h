/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned isVectorBased : 1;
		unsigned isOpaque : 1;
		unsigned bitmapEncoding : 4;
		unsigned optOutOfThinning : 1;
		unsigned isFlippable : 1;
		unsigned isTintable : 1;
		unsigned preservedVectorRepresentation : 1;
		unsigned reserved : 22;
	}  _renditionFlags;
	long long _templateRenderingMode;
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
@property (assign,nonatomic) double opacity;                                       //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                                        //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) int exifOrientation;                                  //@synthesize exifOrientation=_exifOrientation - In the implementation block
+(Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned)arg2 ;
+(id)displayNameForRenditionType:(long long)arg1 ;
-(unsigned)subtype;
-(int)blendMode;
-(NSString *)internalName;
-(id)metrics;
-(CGRect)alphaCroppedRect;
-(id)_sourceRendition;
-(double)vectorGlyphCapLine;
-(BOOL)isOpaque;
-(id)properties;
-(BOOL)substituteWithSystemColor;
-(id)externalTags;
-(cuithemerenditionrenditionflags*)renditionFlags;
-(BOOL)optOutOfThinning;
-(void)_setStructuredThemeStore:(id)arg1 ;
-(BOOL)isTiled;
-(BOOL)isTintable;
-(BOOL)preservedVectorRepresentation;
-(unsigned)gradientStyle;
-(id)modelMesh;
-(CGPDFDocumentRef)pdfDocument;
-(id)layerReferences;
-(id)provideTextureInfo;
-(CGImageRef)unslicedImage;
-(int)pixelFormat;
-(BOOL)isVectorBased;
-(id)effectPreset;
-(id)modelAsset;
-(int)objectVersion;
-(id)mipLevels;
-(id)modelSubmesh;
-(double)scale;
-(id)textureImages;
-(long long)textureIntepretation;
-(id)systemColorName;
-(id)vectorGlyphAvailableSizes;
-(void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1 ;
-(double)opacity;
-(float)vectorGlyphTemplateVersion;
-(SCD_Struct_CS11)vectorGlyphAlignmentRectInsets;
-(void)_initializeCompositingOptionsFromCSIData:(const csiheader*)arg1 ;
-(void)_initializePropertiesFromCSIData:(const csiheader*)arg1 ;
-(void)setInternalName:(NSString *)arg1 ;
-(void)_setFlippable:(BOOL)arg1 ;
-(double)vectorGlyphReferencePointSize;
-(long long)internalTemplateRenderingMode;
-(void)setInternalTemplateRenderingMode:(long long)arg1 ;
-(void)setType:(long long)arg1 ;
-(unsigned long long)colorSpaceID;
-(id)imageForSliceIndex:(long long)arg1 ;
-(long long)templateRenderingMode;
-(CGSVGDocumentRef)svgDocument;
-(unsigned)internalScale;
-(void)setOpacity:(double)arg1 ;
-(SCD_Struct_CS10)transformation;
-(void)setInternalScale:(unsigned)arg1 ;
-(id)_initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(id)maskForSliceIndex:(long long)arg1 ;
-(id)utiType;
-(NSData *)srcData;
-(id)name;
-(void)setExifOrientation:(int)arg1 ;
-(CGColorRef)cgColor;
-(id)linkingToRendition;
-(id)sliceInformation;
-(id)description;
-(int)exifOrientation;
-(double)vectorGlyphBaseline;
-(BOOL)isScaled;
-(id)data;
-(const csitextstyle*)csiTextStyle;
-(CGSize)originalUncroppedSize;
-(void)_initializeRenditionKey:(const renditionkeytoken*)arg1 ;
-(const renditionkeytoken*)key;
-(long long)type;
-(int)bitmapEncoding;
-(CGImageRef)createImageFromPDFRenditionWithScale:(double)arg1 ;
-(id)assetPackIdentifier;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(void)setName:(id)arg1 ;
-(void)setSubtype:(unsigned)arg1 ;
-(CGSize)unslicedSize;
-(CGRect)_destinationFrame;
-(BOOL)edgesOnly;
-(double)gradientDrawingAngle;
-(void)setBlendMode:(int)arg1 ;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
-(BOOL)isFlippable;
-(CGImageRef)uncroppedImage;
-(unsigned long long)sourceRowbytes;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(CGSize)physicalSizeInMeters;
-(BOOL)isInternalLink;
-(id)gradient;
-(void)dealloc;
-(id)contentNames;
-(unsigned short)valueForTokenIdentifier:(unsigned short)arg1 ;
-(id)sizeIndexes;
@end

