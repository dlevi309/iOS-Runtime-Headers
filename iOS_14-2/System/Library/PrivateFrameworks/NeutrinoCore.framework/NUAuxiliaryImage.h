/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol NUAuxiliaryImage <NSObject>
@property (readonly) long long auxiliaryImageType; 
@optional
-(id)underlyingAVDepthData;
-(id)underlyingAVPortraitEffectsMatte;
-(id)underlyingAVSemanticSegmentationMatte;

@required
-(CVBufferRef)cvPixelBufferRef;
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1;
-(long long)auxiliaryImageType;
-(id)auxiliaryImageByApplyingExifOrientation:(unsigned)arg1;
-(id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2;

@end

