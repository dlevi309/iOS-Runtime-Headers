/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSString;

@interface AVSemanticSegmentationMatte : NSObject {

	NSString* _matteType;
	CVBufferRef _pixelBuffer;
	int _version;

}

@property (readonly) NSString * matteType; 
@property (readonly) unsigned pixelFormatType; 
@property (readonly) CVBufferRef mattingImage; 
+(void)initialize;
+(id)_allSupportedSemanticSegmentationMattePixelFormatTypes;
+(id)_allSupportedSemanticSegmentationMatteTypes;
+(id)semanticSegmentationMatteFromImageSourceAuxiliaryDataType:(CFStringRef)arg1 dictionaryRepresentation:(id)arg2 error:(id*)arg3 ;
-(id)debugDescription;
-(id)description;
-(NSString *)matteType;
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(CVBufferRef)mattingImage;
-(id)semanticSegmentationMatteByReplacingSemanticSegmentationMatteWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)initWithType:(id)arg1 pixelBuffer:(CVBufferRef)arg2 semanticSegmentationMatteMetadataDictionary:(id)arg3 ;
-(id)initWithType:(id)arg1 pixelBuffer:(CVBufferRef)arg2 auxiliaryMetadata:(const CGImageMetadataRef)arg3 ;
-(const CGImageMetadataRef)copyAuxiliaryMetadata;
-(const CFStringRef)auxiliaryImageType;
-(short)versionMajor;
-(short)versionMinor;
-(id)semanticSegmentationMatteByApplyingExifOrientation:(unsigned)arg1 ;
-(void)dealloc;
@end

