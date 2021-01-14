/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


#import <PhotoVision/PhotoVision-Structs.h>
@interface PVFaceCropUtils : NSObject
+(id)newFaceCropFromImageURL:(id)arg1 withFaceRect:(CGRect)arg2 groupingIdentifier:(id)arg3 error:(id*)arg4 ;
+(id)newFaceCropFromImageData:(id)arg1 withFaceRect:(CGRect)arg2 groupingIdentifier:(id)arg3 error:(id*)arg4 ;
+(BOOL)isValidFaceCrop:(id)arg1 ;
+(CGRect)faceBoundsFromFaceCrop:(id)arg1 error:(id*)arg2 ;
+(CGSize)faceCropDimensionsFromFaceCrop:(id)arg1 error:(id*)arg2 ;
+(id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg1 ;
+(CGImageMetadataRef)createOutputMetadataFromDictionary:(id)arg1 ;
+(id)newDictionaryRepresentationOfFaceCropDataFromFaceBox:(CGRect)arg1 andCropRegion:(CGRect)arg2 andGroupingIdentifier:(id)arg3 ;
+(id)newDictionaryWithCGImageSourceOptions;
+(id)newFaceCropFromCGImageSource:(const CGImageSourceRef)arg1 withFaceRect:(CGRect)arg2 groupingIdentifier:(id)arg3 error:(id*)arg4 ;
+(CGRect)cropBoundsInOriginalImageFromFaceCrop:(id)arg1 error:(id*)arg2 ;
+(id)groupingIdentifierFromFaceCrop:(id)arg1 error:(id*)arg2 ;
@end

