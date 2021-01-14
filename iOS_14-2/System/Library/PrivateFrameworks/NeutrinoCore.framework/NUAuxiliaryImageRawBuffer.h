/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUAuxiliaryImage.h>

@class NSString;

@interface NUAuxiliaryImageRawBuffer : NSObject <NUAuxiliaryImage> {

	long long _auxiliaryImageType;
	CVBufferRef _pixelBuffer;
	CGImageMetadataRef _metadata;

}

@property (assign,nonatomic) CVBufferRef pixelBuffer;                  //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,retain) CGImageMetadataRef metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (readonly) long long auxiliaryImageType;                     //@synthesize auxiliaryImageType=_auxiliaryImageType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVBufferRef)cvPixelBufferRef;
-(void)setMetadata:(CGImageMetadataRef)arg1 ;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)pixelBuffer;
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(CGImageMetadataRef)metadata;
-(long long)auxiliaryImageType;
-(void)dealloc;
-(id)auxiliaryImageByApplyingExifOrientation:(unsigned)arg1 ;
-(id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 auxiliaryImageType:(long long)arg2 ;
@end

