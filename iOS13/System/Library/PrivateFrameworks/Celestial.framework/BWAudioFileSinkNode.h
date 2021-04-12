/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFileSinkNode.h>

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
	SCD_Struct_BW2 _curFileDuration;
	unsigned long long _curFileSize;
	unsigned long long _adjustedMinFreeDiskSpace;
	NSObject*<OS_dispatch_queue> _propertySyncQueue;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithSinkID:(id)arg1 ;
-(void)_setupStateMachine;
-(void)_stopRecordingWithError:(int)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(int)_handleMarkerBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_applyRecordingLimits;
-(void)_updateFilePropertiesForSbuf:(opaqueCMSampleBufferRef)arg1 ;
-(int)_setupFileWriter;
-(void)_setupMinFreeDiskSpace;
-(int)_teardownFileWriter;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(SCD_Struct_BW2)lastFileDuration;
-(unsigned long long)lastFileSize;
@end

