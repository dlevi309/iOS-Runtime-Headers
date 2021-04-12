/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUAuxiliaryImage.h>

@class AVSemanticSegmentationMatte, NSString;

@interface NUAuxiliaryImageAVSemanticSegmentationMatte : NSObject <NUAuxiliaryImage> {

	long long _auxiliaryImageType;
	AVSemanticSegmentationMatte* _avSemanticSegmentationMatte;

}

@property (readonly) AVSemanticSegmentationMatte * avSemanticSegmentationMatte;              //@synthesize avSemanticSegmentationMatte=_avSemanticSegmentationMatte - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long auxiliaryImageType;                                           //@synthesize auxiliaryImageType=_auxiliaryImageType - In the implementation block
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(long long)auxiliaryImageType;
-(id)underlyingAVSemanticSegmentationMatte;
-(id)auxiliaryImageByApplyingExifOrientation:(unsigned)arg1 ;
-(id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(CVBufferRef)cvPixelBufferRef;
-(id)initAuxiliaryImageFromAVSemanticSegmentationMatte:(id)arg1 ;
-(AVSemanticSegmentationMatte *)avSemanticSegmentationMatte;
@end

