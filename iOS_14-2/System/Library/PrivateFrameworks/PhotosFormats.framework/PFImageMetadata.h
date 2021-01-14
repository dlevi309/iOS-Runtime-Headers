/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@interface PFImageMetadata : NSObject
+(BOOL)readMetadataType:(unsigned char)arg1 fromFileURL:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
+(CVBufferRef)createPixelBufferFromAuxiliaryImageInfo:(id)arg1 ;
+(BOOL)enumerateImageSourceIndexesOfFileAtURL:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
+(BOOL)metadataTypeRequiresImageSourceAuxiliaryImage:(unsigned char)arg1 ;
+(BOOL)readMetadataValueFromImageAtFileURL:(id)arg1 dictionaryKey:(const void*)arg2 key:(const void*)arg3 value:(id*)arg4 error:(id*)arg5 ;
+(BOOL)writeMetadataType:(unsigned char)arg1 value:(id)arg2 toCGImageProperties:(id)arg3 error:(id*)arg4 ;
+(BOOL)queryImagePropertiesOfFileAtURL:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
+(id)valueFromCGImageProperties:(id)arg1 dictionaryKey:(const void*)arg2 key:(const void*)arg3 ;
+(CGImageRef)createImageRefFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned)arg2 scaleFactor:(double)arg3 ;
+(CGImageRef)createImageRefFromAuxiliaryImagePixelBuffer:(CVBufferRef)arg1 applyingOrientation:(unsigned)arg2 scaleFactor:(double)arg3 ;
+(BOOL)readMetadataType:(unsigned char)arg1 fromCGImageProperties:(id)arg2 value:(id*)arg3 error:(id*)arg4 ;
+(id)dictionaryRepresentationForAuxiliaryImagePixelBuffer:(CVBufferRef)arg1 metadata:(CGImageMetadataRef)arg2 ;
+(id)imagePropertiesByRemovingKey:(const void*)arg1 dictionaryKey:(const void*)arg2 fromImageProperties:(id)arg3 ;
+(id)transformAuxiliaryImages:(id)arg1 scaleFactor:(double)arg2 applyingOrientation:(unsigned)arg3 ;
+(id)cIImageFromPixelBuffer:(CVBufferRef)arg1 applyingOrientation:(unsigned)arg2 scaleFactor:(double)arg3 ;
+(id)auxiliaryImageIdentifiersToPreserveForDerivatives;
+(id)cIImageFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned)arg2 scaleFactor:(double)arg3 ;
+(id)auxiliaryImagesToPreserveForDerivativesFromImageSource:(CGImageSourceRef)arg1 imageIndex:(unsigned long long)arg2 ;
@end

