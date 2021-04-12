/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSData;

@interface AVCVideoFrame : NSObject {

	CVBufferRef _pixelBuffer;
	CVBufferRef _depthPixelBuffer;
	SCD_Struct_VC84 _time;
	NSData* _imageData;
	NSData* _effectsMetadata;
	float _renderProcessTime;
	id _delegate;

}

@property (assign,nonatomic) CVBufferRef pixelBuffer;                   //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef depthPixelBuffer;              //@synthesize depthPixelBuffer=_depthPixelBuffer - In the implementation block
@property (retain) NSData * imageData;                                  //@synthesize imageData=_imageData - In the implementation block
@property (assign) SCD_Struct_VC84 time;                                //@synthesize time=_time - In the implementation block
@property (retain) NSData * effectsMetadata;                            //@synthesize effectsMetadata=_effectsMetadata - In the implementation block
@property (assign) float renderProcessTime;                             //@synthesize renderProcessTime=_renderProcessTime - In the implementation block
-(SCD_Struct_VC84)time;
-(void)setTime:(SCD_Struct_VC84)arg1 ;
-(id)delegate;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(NSData *)imageData;
-(CVBufferRef)pixelBuffer;
-(NSData *)effectsMetadata;
-(void)setEffectsMetadata:(NSData *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(void)dealloc;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 depthPixelBuffer:(CVBufferRef)arg2 time:(SCD_Struct_VC84)arg3 imageData:(id)arg4 delegate:(id)arg5 ;
-(float)renderProcessTime;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 time:(SCD_Struct_VC84)arg2 imageData:(id)arg3 ;
-(void)setDepthPixelBuffer:(CVBufferRef)arg1 ;
-(void)setRenderProcessTime:(float)arg1 ;
-(CVBufferRef)depthPixelBuffer;
@end

