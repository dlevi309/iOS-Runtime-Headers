/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

@class NSString;


@protocol BWFilterRenderer <NSObject>
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) BOOL supportsAnimation; 
@property (nonatomic,readonly) BOOL adjustsMetadata; 
@required
-(BOOL)supportsAnimation;
-(BOOL)adjustsMetadata;
-(int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
-(void)renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 completionHandler:(/*^block*/id)arg6;
-(void)adjustMetadataOfSampleBuffer:(opaqueCMSampleBufferRef)arg1;
-(short)type;
-(NSString *)displayName;

@end

