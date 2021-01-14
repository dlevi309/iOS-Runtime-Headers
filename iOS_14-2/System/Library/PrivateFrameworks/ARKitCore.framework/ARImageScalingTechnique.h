/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>

@interface ARImageScalingTechnique : ARTechnique {

	OpaqueVTPixelTransferSessionRef _vtPixelTransferSession;
	CVPixelBufferPoolRef _scaledPixelBufferPool;
	BOOL _shouldUseScaleFactor;
	unsigned char _downscaleFactor;
	unsigned _conversionPixelFormatType;
	CGSize _scaledSize;

}

@property (nonatomic,readonly) CGSize scaledSize;                             //@synthesize scaledSize=_scaledSize - In the implementation block
@property (assign,nonatomic) unsigned conversionPixelFormatType;              //@synthesize conversionPixelFormatType=_conversionPixelFormatType - In the implementation block
@property (nonatomic,readonly) unsigned char downscaleFactor;                 //@synthesize downscaleFactor=_downscaleFactor - In the implementation block
-(id)processData:(id)arg1 ;
-(CGSize)scaledSize;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithScaledSize:(CGSize)arg1 ;
-(void)setConversionPixelFormatType:(unsigned)arg1 ;
-(unsigned long long)requiredSensorDataTypes;
-(unsigned char)downscaleFactor;
-(id)initWithDownscaleFactor:(unsigned char)arg1 ;
-(unsigned)conversionPixelFormatType;
@end

