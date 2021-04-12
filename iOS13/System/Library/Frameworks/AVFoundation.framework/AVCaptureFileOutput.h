/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

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
@property (nonatomic,readonly) SCD_Struct_AV7 recordedDuration; 
@property (nonatomic,readonly) long long recordedFileSize; 
@property (assign,nonatomic) SCD_Struct_AV7 maxRecordedDuration; 
@property (assign,nonatomic) long long maxRecordedFileSize; 
@property (assign,nonatomic) long long minFreeDiskSpaceLimit; 
+(void)initialize;
-(void)dealloc;
-(id<AVCaptureFileOutputDelegate>)delegate;
-(void)setDelegate:(id<AVCaptureFileOutputDelegate>)arg1 ;
-(void)stopRecording;
-(id)initSubclass;
-(NSURL *)outputFileURL;
-(BOOL)isRecording;
-(SCD_Struct_AV7)maxRecordedDuration;
-(long long)maxRecordedFileSize;
-(long long)minFreeDiskSpaceLimit;
-(BOOL)pausesRecordingOnInterruption;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(BOOL)isRecordingPaused;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)setPausesRecordingOnInterruption:(BOOL)arg1 ;
-(SCD_Struct_AV7)recordedDuration;
-(long long)recordedFileSize;
-(void)setMaxRecordedDuration:(SCD_Struct_AV7)arg1 ;
-(void)setMaxRecordedFileSize:(long long)arg1 ;
-(void)setMinFreeDiskSpaceLimit:(long long)arg1 ;
@end

