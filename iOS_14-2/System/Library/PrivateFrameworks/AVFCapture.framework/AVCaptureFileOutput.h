/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>

@protocol AVCaptureFileOutputDelegate;
@class AVCaptureFileOutputInternal, NSURL;

@interface AVCaptureFileOutput : AVCaptureOutput {

	AVCaptureFileOutputInternal* _fileOutputInternal;
	id<AVCaptureFileOutputDelegate> _delegate;

}

@property (assign,nonatomic) id<AVCaptureFileOutputDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * outputFileURL; 
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (getter=isRecordingPaused,nonatomic,readonly) BOOL recordingPaused; 
@property (nonatomic,readonly) SCD_Struct_AV0 recordedDuration; 
@property (nonatomic,readonly) long long recordedFileSize; 
@property (assign,nonatomic) SCD_Struct_AV0 maxRecordedDuration; 
@property (assign,nonatomic) long long maxRecordedFileSize; 
@property (assign,nonatomic) long long minFreeDiskSpaceLimit; 
+(void)initialize;
-(void)stopRecording;
-(BOOL)isRecording;
-(id<AVCaptureFileOutputDelegate>)delegate;
-(void)resumeRecording;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(NSURL *)outputFileURL;
-(void)pauseRecording;
-(void)setDelegate:(id<AVCaptureFileOutputDelegate>)arg1 ;
-(SCD_Struct_AV0)maxRecordedDuration;
-(long long)maxRecordedFileSize;
-(long long)minFreeDiskSpaceLimit;
-(BOOL)pausesRecordingOnInterruption;
-(id)initSubclass;
-(BOOL)isRecordingPaused;
-(void)setPausesRecordingOnInterruption:(BOOL)arg1 ;
-(SCD_Struct_AV0)recordedDuration;
-(long long)recordedFileSize;
-(void)setMaxRecordedDuration:(SCD_Struct_AV0)arg1 ;
-(void)setMaxRecordedFileSize:(long long)arg1 ;
-(void)setMinFreeDiskSpaceLimit:(long long)arg1 ;
-(void)dealloc;
@end

