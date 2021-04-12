/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUAuxiliaryImage.h>

@class AVDepthData, NSString;

@interface NUAuxiliaryImageAVDepthData : NSObject <NUAuxiliaryImage> {

	long long _auxiliaryImageType;
	AVDepthData* _avDepthData;

}

@property (readonly) AVDepthData * avDepthData;                     //@synthesize avDepthData=_avDepthData - In the implementation block
@property (readonly) long long auxiliaryImageType;                  //@synthesize auxiliaryImageType=_auxiliaryImageType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVBufferRef)cvPixelBufferRef;
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(long long)auxiliaryImageType;
-(id)underlyingAVDepthData;
-(id)auxiliaryImageByApplyingExifOrientation:(unsigned)arg1 ;
-(id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)initAuxiliaryImageFromAVDepthData:(id)arg1 ;
-(AVDepthData *)avDepthData;
@end

