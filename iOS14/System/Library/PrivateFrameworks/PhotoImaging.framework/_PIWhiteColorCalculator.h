/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@protocol OS_dispatch_queue;
#import <PhotoImaging/PhotoImaging-Structs.h>
@class NUComposition, NUBufferRenderClient, NUImageDataClient, NSObject;

@interface _PIWhiteColorCalculator : NSObject {

	NUComposition* _composition;
	NUBufferRenderClient* _bufferRenderClient;
	NUImageDataClient* _imageDataClient;
	NSObject*<OS_dispatch_queue> _q;
	BOOL _useSushi;

}
-(id)initWithComposition:(id)arg1 useSushi:(BOOL)arg2 ;
-(void)readBufferFromImage:(id)arg1 withRGBAfBufferBlock:(/*^block*/id)arg2 ;
-(void)calculateColorWithProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_brightnessMultiplierFromImageProperties:(id)arg1 ;
-(SCD_Struct_PI12)_computeWhitePointColorWithGrayEdgesBuffer:(id)arg1 grayWorldBuffer:(id)arg2 greenChannelPercentage:(double)arg3 RAWCameraSpaceProperties:(id)arg4 ;
-(SCD_Struct_PI12)_whitePointColorFromGrayEdgesImage:(id)arg1 grayWorldImage:(id)arg2 greenChannelPercentage:(double)arg3 RAWCameraSpaceProperties:(id)arg4 ;
-(void)_configureRequest:(id)arg1 ;
-(void)_computeGreenPercentage:(/*^block*/id)arg1 ;
-(void)_submitGWRenderRequest:(/*^block*/id)arg1 ;
-(void)_submitGERenderRequest:(/*^block*/id)arg1 ;
@end

