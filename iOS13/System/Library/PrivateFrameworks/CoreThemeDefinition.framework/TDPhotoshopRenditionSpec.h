/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDImageColorHistogram, TDPhotoshopLayer;

@interface TDPhotoshopRenditionSpec : TDRenditionSpec {

	TDImageColorHistogram* _histogram;

}

@property (nonatomic,retain) TDPhotoshopLayer * photoshopLayer; 
@property (assign,nonatomic) BOOL isTintable; 
@property (nonatomic,retain) TDImageColorHistogram * histogram;              //@synthesize histogram=_histogram - In the implementation block
-(void)dealloc;
-(id)debugDescription;
-(TDImageColorHistogram *)histogram;
-(void)setHistogram:(TDImageColorHistogram *)arg1 ;
-(void)_logError:(id)arg1 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg1 ;
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(int)_layerIndexInPSDImage:(id)arg1 ;
-(int)psdSliceNumberForRenditionRow:(int)arg1 sliceRow:(int)arg2 renditionColumn:(int)arg3 sliceColumn:(int)arg4 rowsPerRendition:(int)arg5 columnsPerRendition:(int)arg6 renditionColumnCount:(int)arg7 ;
-(void)_logWarning:(id)arg1 ;
-(BOOL)_sliceRectanglesForPSDImage:(id)arg1 rowsPerRendition:(int*)arg2 columnsPerRendition:(int*)arg3 originalColumnWidth:(int*)arg4 newColumnWidth:(int*)arg5 originalRowHeight:(int*)arg6 newRowHeight:(int*)arg7 originalColumnX:(int*)arg8 originalRowY:(int*)arg9 newRenditionSize:(SCD_Struct_TD12*)arg10 newSliceCount:(int*)arg11 renditionRect:(CGRect*)arg12 throwawaySliceRect:(CGRect*)arg13 ;
-(SCD_Struct_TD13)_subtractThrowawaySliceFromMetricsIfNeeded:(CGRect)arg1 metrics:(SCD_Struct_TD13)arg2 renditionRect:(CGRect)arg3 ;
-(id)createCSIRepresentationFromGradientPSDImage:(id)arg1 withCompression:(BOOL)arg2 colorSpaceID:(unsigned long long)arg3 ;
-(id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(BOOL)arg2 edgeMetricsMask:(id)arg3 textMetricsMask:(id)arg4 baselineMetricsMask:(id)arg5 auxiliary1MetricsMask:(id)arg6 auxiliary2MetricsMask:(id)arg7 colorSpaceID:(unsigned long long)arg8 allowsPaletteImageCompression:(BOOL)arg9 allowsHevcCompression:(BOOL)arg10 allowsDeepmapImageCompression:(BOOL)arg11 allowsDeepmap2ImageCompression:(BOOL)arg12 ;
-(void)_logExtra:(id)arg1 ;
-(id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(BOOL)arg2 colorSpaceID:(unsigned long long)arg3 ;
-(void)drawPackableRenditionInContext:(CGContextRef)arg1 withDocument:(id)arg2 ;
@end

