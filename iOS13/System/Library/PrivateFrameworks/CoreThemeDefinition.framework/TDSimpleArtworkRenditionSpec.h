/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDImageColorHistogram, TDPNGAsset, NSOrderedSet, TDThemeCompressionType, NSString;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec {

	CGRect _alignmentRect;
	BOOL _isBackstop;
	TDImageColorHistogram* _histogram;

}

@property (assign,nonatomic) BOOL allowsMultiPassEncoding; 
@property (assign,nonatomic) BOOL allowsOptimalRowbytesPacking; 
@property (assign,nonatomic) BOOL allowsCompactCompression; 
@property (assign,nonatomic) BOOL allowsPaletteImageCompression; 
@property (assign,nonatomic) BOOL allowsHevcCompression; 
@property (assign,nonatomic) BOOL allowsDeepmapCompression; 
@property (assign,nonatomic) BOOL allowsDeepmap2Compression; 
@property (nonatomic,retain) TDPNGAsset * asset; 
@property (nonatomic,retain) NSOrderedSet * slices; 
@property (nonatomic,retain) TDThemeCompressionType * compressionType; 
@property (nonatomic,retain) TDImageColorHistogram * histogram;                     //@synthesize histogram=_histogram - In the implementation block
@property (assign,nonatomic) CGRect alignmentRect; 
@property (assign,nonatomic) CGRect primitiveAlignmentRect; 
@property (nonatomic,retain) NSString * alignmentRectString; 
@property (nonatomic,retain) NSString * originalImageSizeString; 
@property (nonatomic,retain) NSString * nonAlphaImageAreaString; 
@property (nonatomic,retain) NSString * physicalSizeInMetersString; 
@property (assign,nonatomic) CGSize physicalSizeInMeters; 
@property (assign,nonatomic) BOOL isTintable; 
@property (assign,nonatomic) BOOL isBackstop;                                       //@synthesize isBackstop=_isBackstop - In the implementation block
@property (assign,nonatomic) double postScaleFactor; 
+(void)initialize;
-(void)dealloc;
-(TDImageColorHistogram *)histogram;
-(void)setHistogram:(TDImageColorHistogram *)arg1 ;
-(CGRect)alignmentRect;
-(void)awakeFromFetch;
-(CGSize)physicalSizeInMeters;
-(void)setPhysicalSizeInMeters:(CGSize)arg1 ;
-(void)_logError:(id)arg1 ;
-(void)setAlignmentRect:(CGRect)arg1 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(CGImageRef)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned*)arg3 vectorBased:(BOOL*)arg4 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg1 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(void)copyAttributesInto:(id)arg1 ;
-(id)associatedFileModificationDateWithDocument:(id)arg1 ;
-(void)_logWarning:(id)arg1 ;
-(void)_logExtra:(id)arg1 ;
-(void)drawPackableRenditionInContext:(CGContextRef)arg1 withDocument:(id)arg2 ;
-(id)_slicesToUseForCSI;
-(void)setIsBackstop:(BOOL)arg1 ;
-(CGRect)primitiveAlignmentRect;
-(void)setPrimitiveAlignmentRect:(CGRect)arg1 ;
-(int)_rawPixelFormatOfCGImage:(CGImageRef)arg1 ;
-(CGSize)_scaleRecognitionImageFromSize:(CGSize)arg1 ;
-(id)_sliceRectanglesForRenditionSize:(SCD_Struct_TD12)arg1 unadjustedSliceRectangles:(id*)arg2 imageSlicesNeedAdjustment:(BOOL*)arg3 newRenditionSize:(SCD_Struct_TD12*)arg4 ;
-(SCD_Struct_TD13)_edgeMetricsForAlignmentRect:(CGRect)arg1 originalRenditionSize:(SCD_Struct_TD12)arg2 newRenditionSize:(SCD_Struct_TD12)arg3 ;
-(BOOL)isBackstop;
@end

