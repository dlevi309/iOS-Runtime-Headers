/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class AVDepthData, NSDictionary, PVImageBuffer;

@interface PVCameraFrameSet : NSObject {

	long long deviceOrientation;
	long long _cameraPosition;
	opaqueCMSampleBufferRef _colorSampleBuffer;
	AVDepthData* _depthData;
	NSDictionary* _metadata;
	PVImageBuffer* _alphaMaskImageBuffer;
	double _rollRadians;
	SCD_Struct_PV21 orientation;
	CGAffineTransform _colorTransform;
	CGAffineTransform _depthTransform;

}

@property (assign,nonatomic) CGAffineTransform colorTransform;                         //@synthesize colorTransform=_colorTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform depthTransform;                         //@synthesize depthTransform=_depthTransform - In the implementation block
@property (assign,nonatomic) long long cameraPosition;                                 //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef colorSampleBuffer;              //@synthesize colorSampleBuffer=_colorSampleBuffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV0 presentationTimeStamp; 
@property (nonatomic,readonly) PVImageBuffer * colorImageBuffer; 
@property (nonatomic,readonly) AVDepthData * depthData;                                //@synthesize depthData=_depthData - In the implementation block
@property (retain) NSDictionary * metadata;                                            //@synthesize metadata=_metadata - In the implementation block
@property (retain) PVImageBuffer * alphaMaskImageBuffer;                               //@synthesize alphaMaskImageBuffer=_alphaMaskImageBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_PV21 orientation; 
@property (assign,nonatomic) double rollRadians;                                       //@synthesize rollRadians=_rollRadians - In the implementation block
@property (assign,nonatomic) long long deviceOrientation; 
-(long long)cameraPosition;
-(AVDepthData *)depthData;
-(SCD_Struct_PV0)presentationTimeStamp;
-(double)rollRadians;
-(void)setRollRadians:(double)arg1 ;
-(void)setDeviceOrientation:(long long)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(SCD_Struct_PV21)orientation;
-(long long)deviceOrientation;
-(NSDictionary *)metadata;
-(void)dealloc;
-(void)setOrientation:(SCD_Struct_PV21)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(CGAffineTransform)colorTransform;
-(PVImageBuffer *)colorImageBuffer;
-(opaqueCMSampleBufferRef)colorSampleBuffer;
-(id)initWithColorBuffer:(opaqueCMSampleBufferRef)arg1 depthData:(id)arg2 metadata:(id)arg3 ;
-(id)initWithColorBuffer:(opaqueCMSampleBufferRef)arg1 metadata:(id)arg2 ;
-(void)_sharedInitColorBuffer:(opaqueCMSampleBufferRef)arg1 colorTransform:(CGAffineTransform)arg2 depthData:(id)arg3 depthTransform:(CGAffineTransform)arg4 metadata:(id)arg5 ;
-(void)setColorTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)depthTransform;
-(void)setDepthTransform:(CGAffineTransform)arg1 ;
-(PVImageBuffer *)alphaMaskImageBuffer;
-(void)setAlphaMaskImageBuffer:(PVImageBuffer *)arg1 ;
@end

