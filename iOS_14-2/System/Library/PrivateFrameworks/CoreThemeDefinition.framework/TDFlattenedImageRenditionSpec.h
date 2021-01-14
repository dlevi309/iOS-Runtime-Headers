/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDSimpleArtworkRenditionSpec.h>

@class NSOrderedSet, TDRadiosityImageRenditionSpec;

@interface TDFlattenedImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (nonatomic,retain) NSOrderedSet * layerReferences; 
@property (nonatomic,retain) TDRadiosityImageRenditionSpec * radiosityImage; 
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)drawFlattenedImageIntoContext:(CGContextRef)arg1 document:(id)arg2 ;
-(void)addLayerReferencesObject:(id)arg1 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg1 ;
@end

