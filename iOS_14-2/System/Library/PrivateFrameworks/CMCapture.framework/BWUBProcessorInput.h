/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorInput.h>
#import <libobjc.A.dylib/BWNoiseReductionAndFusionProcessorInput.h>

@protocol BWUBProcessorInputDelegate;
@class BWStillImageSettings, FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWStillImageCaptureStreamSettings, NSString, NSMutableArray, NSMutableDictionary;

@interface BWUBProcessorInput : BWStillImageProcessorInput <BWNoiseReductionAndFusionProcessorInput> {

	int _fusionMode;
	id<BWUBProcessorInputDelegate> _delegate;
	NSMutableArray* _frames;
	BOOL _keepFrames;
	int _receivedFrames;
	BOOL _receivedAllFrames;
	opaqueCMSampleBufferRef _referenceFrame;
	opaqueCMSampleBufferRef _errorRecoveryFrame;
	BOOL _emitErrorRecoveryFrame;
	int _adaptiveBracketingStopFrameCount;
	NSMutableDictionary* _oisRecenteringLoggingData;

}

@property (nonatomic,readonly) opaqueCMSampleBufferRef originalImage; 
@property (nonatomic,retain) id<BWUBProcessorInputDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL keepFrames; 
@property (nonatomic,readonly) NSMutableDictionary * oisRecenteringLoggingData; 
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
@property (assign,nonatomic) int fusionMode;                                                           //@synthesize fusionMode=_fusionMode - In the implementation block
@property (assign,nonatomic) BOOL emitErrorRecoveryFrame;                                              //@synthesize emitErrorRecoveryFrame=_emitErrorRecoveryFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)frames;
-(opaqueCMSampleBufferRef)originalImage;
-(opaqueCMSampleBufferRef)errorRecoveryFrame;
-(int)receivedFrames;
-(int)fusionMode;
-(id<BWUBProcessorInputDelegate>)delegate;
-(void)stopAdaptiveBracketingWithGroup:(int)arg1 ;
-(BOOL)receivedAllFrames;
-(opaqueCMSampleBufferRef)evMinusReferenceFrame;
-(void)setFusionMode:(int)arg1 ;
-(BOOL)emitErrorRecoveryFrame;
-(void)setEmitErrorRecoveryFrame:(BOOL)arg1 ;
-(BOOL)keepFrames;
-(void)setKeepFrames:(BOOL)arg1 ;
-(void)_setReferenceFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)_setErrorRecoveryFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)stopAdaptiveBracketingNow;
-(void)updateAdaptiveBracketingFrameParametersIfNeededUsingFrame:(opaqueCMSampleBufferRef)arg1 err:(int)arg2 ;
-(opaqueCMSampleBufferRef)referenceFrame;
-(NSMutableDictionary *)oisRecenteringLoggingData;
-(id)adaptiveBracketingParameters;
-(void)setDelegate:(id<BWUBProcessorInputDelegate>)arg1 ;
-(id)initWithSettings:(id)arg1 portType:(id)arg2 ;
-(void)addFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
@end

