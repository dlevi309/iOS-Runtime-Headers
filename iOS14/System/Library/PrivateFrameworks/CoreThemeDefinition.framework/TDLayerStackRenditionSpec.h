/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDImageStackAsset, NSString, NSOrderedSet, TDThemeCompressionType;

@interface TDLayerStackRenditionSpec : TDRenditionSpec {

	CGSize primitiveCanvasSize;

}

@property (nonatomic,retain) TDImageStackAsset * asset; 
@property (assign,nonatomic) CGSize primitiveCanvasSize; 
@property (nonatomic,retain) NSString * canvasSizeString; 
@property (assign,nonatomic) CGSize canvasSize; 
@property (nonatomic,retain) NSOrderedSet * layerReferences; 
@property (nonatomic,retain) TDThemeCompressionType * compressionType; 
-(void)awakeFromFetch;
-(void)prepareForDeletion;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(void)setPrimitiveCanvasSize:(CGSize)arg1 ;
-(CGSize)primitiveCanvasSize;
@end

