/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

@class BWStillImageSettings, FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWStillImageCaptureStreamSettings, NSString;


@protocol BWNoiseReductionAndFusionProcessorInput <NSObject>
@property (nonatomic,readonly) BWStillImageSettings * stillImageSettings; 
@property (nonatomic,readonly) FigCaptureStillImageSettings * settings; 
@property (nonatomic,readonly) BWStillImageCaptureSettings * captureSettings; 
@property (nonatomic,readonly) BWStillImageCaptureStreamSettings * captureStreamSettings; 
@property (nonatomic,readonly) BOOL isMaster; 
@property (nonatomic,readonly) NSString * portType; 
@property (nonatomic,readonly) int receivedFrames; 
@property (nonatomic,readonly) BOOL receivedAllFrames; 
@property (nonatomic,readonly) opaqueCMSampleBufferRef referenceFrame; 
@property (nonatomic,readonly) opaqueCMSampleBufferRef evMinusReferenceFrame; 
@property (nonatomic,readonly) opaqueCMSampleBufferRef errorRecoveryFrame; 
@property (assign,nonatomic) int fusionMode; 
@property (assign,nonatomic) BOOL emitErrorRecoveryFrame; 
@required
+(id)new;
-(BOOL)isMaster;
-(id)init;
-(NSString *)portType;
-(opaqueCMSampleBufferRef)errorRecoveryFrame;
-(int)receivedFrames;
-(int)fusionMode;
-(void)stopAdaptiveBracketingWithGroup:(int)arg1;
-(BOOL)receivedAllFrames;
-(opaqueCMSampleBufferRef)evMinusReferenceFrame;
-(void)setFusionMode:(int)arg1;
-(BOOL)emitErrorRecoveryFrame;
-(void)setEmitErrorRecoveryFrame:(BOOL)arg1;
-(opaqueCMSampleBufferRef)referenceFrame;
-(BWStillImageCaptureSettings *)captureSettings;
-(FigCaptureStillImageSettings *)settings;
-(BWStillImageCaptureStreamSettings *)captureStreamSettings;
-(void)addOutputSampleBufferRouter:(/*^block*/id)arg1 forBufferTypes:(id)arg2;
-(id)outputSampleBufferRouterForBufferType:(unsigned long long)arg1;
-(void)addBypassedProcessorType:(unsigned long long)arg1 forBufferTypes:(id)arg2;
-(void)addFrame:(opaqueCMSampleBufferRef)arg1;
-(BWStillImageSettings *)stillImageSettings;

@end

