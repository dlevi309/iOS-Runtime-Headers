/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureFileOutput.h>

@class AVCaptureMovieFileOutputInternal, NSArray;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {

	AVCaptureMovieFileOutputInternal* _internal;

}

@property (assign,nonatomic) SCD_Struct_AV0 movieFragmentInterval; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,readonly) NSArray * availableVideoCodecTypes; 
+(id)new;
+(void)initialize;
+(long long)uniqueID;
+(BOOL)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3 ;
+(BOOL)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)stopRecording;
-(BOOL)isRecording;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_updateSupportedPropertiesForSourceDevice:(id)arg1 ;
-(id)init;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(void)resumeRecording;
-(id)connectionMediaTypes;
-(void)removeConnection:(id)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(id)outputFileURL;
-(void)pauseRecording;
-(void)setBravoCameraSelectionBehaviorForRecording:(id)arg1 ;
-(id)bravoCameraSelectionBehaviorForRecording;
-(NSArray *)availableVideoCodecTypes;
-(BOOL)_recordingInProgress;
-(id)outputSettingsForConnection:(id)arg1 ;
-(void)setMovieFragmentInterval:(SCD_Struct_AV0)arg1 ;
-(SCD_Struct_AV0)movieFragmentInterval;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)_startRecording:(id)arg1 ;
-(int)_stopRecording;
-(BOOL)isRecordingPaused;
-(id)supportedOutputSettingsKeysForConnection:(id)arg1 ;
-(void)handleDidStopRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 demoof:(BOOL)arg3 addMetadata:(BOOL)arg4 ;
-(void)handleDidStopRecordingNotificationForMomentCaptureWrapper:(id)arg1 withPayload:(id)arg2 demoof:(BOOL)arg3 addMetadata:(BOOL)arg4 ;
-(id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2 payload:(id)arg3 ;
-(void)_removeRecordingDelegateWrapper:(id)arg1 ;
-(NSArray *)metadata;
-(void)handleDidStartRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 ;
-(void)handleDidPauseRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 ;
-(void)handleDidResumeRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 ;
-(BOOL)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)arg1 ;
-(void)_updateAvailableVideoCodecTypesForSourceDevice:(id)arg1 ;
-(void)_updateBravoCameraSelectionBehaviorForSourceDevice:(id)arg1 ;
-(void)setSendsLastVideoPreviewFrame:(BOOL)arg1 ;
-(BOOL)sendsLastVideoPreviewFrame;
-(void)setOutputSettings:(id)arg1 forConnection:(id)arg2 ;
-(void)setRecordsVideoOrientationAndMirroringChanges:(BOOL)arg1 asMetadataTrackForConnection:(id)arg2 ;
-(void)startRecordingMovieWithSettings:(id)arg1 delegate:(id)arg2 ;
-(void)setConnectionsActive:(BOOL)arg1 ;
-(void)dealloc;
@end

