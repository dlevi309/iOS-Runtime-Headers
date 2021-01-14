/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFileSinkNode.h>

@protocol OS_dispatch_queue;
@class FigStateMachine, FigCaptureAudioFileRecordingSettings, NSObject;

@interface BWAudioFileSinkNode : BWFileSinkNode {

	FigStateMachine* _stateMachine;
	OpaqueFigFormatWriterRef _formatWriter;
	OpaqueCMByteStreamRef _byteStream;
	int _trackID;
	BOOL _didBeginFileWriterSession;
	char* _parentPath;
	FigCaptureAudioFileRecordingSettings* _settings;
	SCD_Struct_BW8 _curFileDuration;
	unsigned long long _curFileSize;
	unsigned long long _adjustedMinFreeDiskSpace;
	NSObject*<OS_dispatch_queue> _propertySyncQueue;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(SCD_Struct_BW8)lastFileDuration;
-(id)initWithSinkID:(id)arg1 ;
-(void)_setupStateMachine;
-(unsigned long long)lastFileSize;
-(void)_stopRecordingWithError:(int)arg1 ;
-(int)_handleMarkerBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_applyRecordingLimits;
-(void)_updateFilePropertiesForSbuf:(opaqueCMSampleBufferRef)arg1 ;
-(int)_setupFileWriter;
-(void)_setupMinFreeDiskSpace;
-(int)_teardownFileWriter;
-(void)dealloc;
@end

