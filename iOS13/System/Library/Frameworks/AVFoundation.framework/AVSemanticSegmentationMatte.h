/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(CVBufferRef)mattingImage;
-(NSString *)matteType;
-(id)semanticSegmentationMatteByReplacingSemanticSegmentationMatteWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(const CGImageMetadataRef)copyAuxiliaryMetadata;
-(const CFStringRef)auxiliaryImageType;
-(short)versionMajor;
-(short)versionMinor;
-(id)initWithType:(id)arg1 pixelBuffer:(CVBufferRef)arg2 auxiliaryMetadata:(const CGImageMetadataRef)arg3 ;
-(id)initWithType:(id)arg1 pixelBuffer:(CVBufferRef)arg2 semanticSegmentationMatteMetadataDictionary:(id)arg3 ;
-(id)semanticSegmentationMatteByApplyingExifOrientation:(unsigned)arg1 ;
@end

