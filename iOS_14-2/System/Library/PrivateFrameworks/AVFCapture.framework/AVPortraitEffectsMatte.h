/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVPortraitEffectsMatteInternal;

@interface AVPortraitEffectsMatte : NSObject {

	AVPortraitEffectsMatteInternal* _internal;

}

@property (readonly) unsigned pixelFormatType; 
@property (readonly) CVBufferRef mattingImage; 
+(void)initialize;
+(id)_allSupportedPortraitEffectsMattePixelFormatTypes;
+(id)portraitEffectsMatteFromDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)debugDescription;
-(id)portraitEffectsMatteByApplyingExifOrientation:(unsigned)arg1 ;
-(id)portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)description;
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(CVBufferRef)mattingImage;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 portraitEffectsMatteMetadataDictionary:(id)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 auxiliaryMetadata:(CGImageMetadataRef)arg2 ;
-(const CGImageMetadataRef)copyAuxiliaryMetadata;
-(const CFStringRef)auxiliaryImageType;
-(short)versionMajor;
-(short)versionMinor;
-(void)dealloc;
@end

