/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureFileOutput.h>

@class AVCaptureMovieFileOutputInternal, NSArray;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {

	AVCaptureMovieFileOutputInternal* _internal;

}

@property (assign,nonatomic) SCD_Struct_AV7 movieFragmentInterval; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,readonly) NSArray * availableVideoCodecTypes; 
+(void)initialize;
+(id)new;
+(long long)uniqueID;
+(BOOL)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2 ;
+(BOOL)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
-(void)stopRecording;
-(void)removeConnection:(id)arg1 ;
-(SCD_Struct_AV7)movieFragmentInterval;
-(void)setMovieFragmentInterval:(SCD_Struct_AV7)arg1 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)_recordingInProgress;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(id)outputFileURL;
-(BOOL)isRecording;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(BOOL)isRecordingPaused;
-(void)pauseRecording;
-(void)resumeRecording;
-(id)bravoCameraSelectionBehaviorForRecording;
-(void)_updateAvailableVideoCodecTypesForSourceDevice:(id)arg1 ;
-(void)_updateBravoCameraSelectionBehaviorForSourceDevice:(id)arg1 ;
-(void)_startRecording:(id)arg1 ;
-(int)_stopRecording;
-(id)supportedOutputSettingsKeysForConnection:(id)arg1 ;
-(NSArray *)availableVideoCodecTypes;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(void)handleDidStopRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 demoof:(BOOL)arg3 addMetadata:(BOOL)arg4 ;
-(void)handleDidStopRecordingNotificationForMomentCaptureWrapper:(id)arg1 withPayload:(id)arg2 demoof:(BOOL)arg3 addMetadata:(BOOL)arg4 ;
-(id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2 payload:(id)arg3 ;
-(void)_removeRecordingDelegateWrapper:(id)arg1 ;
-(void)handleDidStartRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 ;
-(void)handleDidPauseRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 ;
-(void)handleDidResumeRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 ;
-(BOOL)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)arg1 ;
-(id)outputSettingsForConnection:(id)arg1 ;
-(void)setSendsLastVideoPreviewFrame:(BOOL)arg1 ;
-(BOOL)sendsLastVideoPreviewFrame;
-(void)setBravoCameraSelectionBehaviorForRecording:(id)arg1 ;
-(void)setOutputSettings:(id)arg1 forConnection:(id)arg2 ;
-(void)setRecordsVideoOrientationAndMirroringChanges:(BOOL)arg1 asMetadataTrackForConnection:(id)arg2 ;
-(void)startRecordingMovieWithSettings:(id)arg1 delegate:(id)arg2 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
@end

