/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPortraitEffectsMatteInternal;

@interface AVPortraitEffectsMatte : NSObject {

	AVPortraitEffectsMatteInternal* _internal;

}

@property (readonly) unsigned pixelFormatType; 
@property (readonly) CVBufferRef mattingImage; 
+(void)initialize;
+(id)_allSupportedPortraitEffectsMattePixelFormatTypes;
+(id)portraitEffectsMatteFromDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(CVBufferRef)mattingImage;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 auxiliaryMetadata:(CGImageMetadataRef)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 portraitEffectsMatteMetadataDictionary:(id)arg2 ;
-(const CGImageMetadataRef)copyAuxiliaryMetadata;
-(const CFStringRef)auxiliaryImageType;
-(id)portraitEffectsMatteByApplyingExifOrientation:(unsigned)arg1 ;
-(id)portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(short)versionMajor;
-(short)versionMinor;
@end

