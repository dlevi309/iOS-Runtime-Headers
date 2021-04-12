/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>
#import <libobjc.A.dylib/MOVWriterInterfaceDelegate.h>
#import <ARKit/ARRecordingTechniqueProtocol.h>

@protocol OS_dispatch_queue, ARRecordingTechniqueDelegate;
@class NSURL, NSSet, NSObject, MOVWriterInterface, NSMutableDictionary, NSError, NSMutableSet, ARParentImageSensorSettings, NSString;

@interface ARRecordingTechniquePublic : ARTechnique <MOVWriterInterfaceDelegate, ARRecordingTechniqueProtocol> {

	NSObject*<OS_dispatch_queue> _masterQueue;
	NSObject*<OS_dispatch_queue> _timeSensitiveQueue;
	MOVWriterInterface* _writer;
	unsigned long long _sensorDataTypes;
	double _sessionSourceTime;
	BOOL _writerReady;
	NSMutableDictionary* _lastRecordedTimestamps;
	NSError* _finishedError;
	BOOL _recordCollaborationData;
	NSMutableSet* _knownVIOSessionIDs;
	BOOL _expectDepthData;
	BOOL _expectAudioData;
	BOOL _expectCustomData;
	BOOL _shouldSaveVideoInPhotosLibrary;
	NSURL* _outputFileURL;
	id<ARRecordingTechniqueDelegate> _recordingTechniqueDelegate;
	ARParentImageSensorSettings* _parentImageSensorSettings;
	unsigned long long _state;

}

@property (assign) unsigned long long state;                                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSURL * outputFileURL;                                              //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (assign,nonatomic) BOOL expectDepthData;                                                 //@synthesize expectDepthData=_expectDepthData - In the implementation block
@property (assign,nonatomic) BOOL expectAudioData;                                                 //@synthesize expectAudioData=_expectAudioData - In the implementation block
@property (assign,nonatomic) BOOL expectCustomData;                                                //@synthesize expectCustomData=_expectCustomData - In the implementation block
@property (assign,nonatomic) BOOL shouldSaveVideoInPhotosLibrary;                                  //@synthesize shouldSaveVideoInPhotosLibrary=_shouldSaveVideoInPhotosLibrary - In the implementation block
@property (__weak) id<ARRecordingTechniqueDelegate> recordingTechniqueDelegate;                    //@synthesize recordingTechniqueDelegate=_recordingTechniqueDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long recordingSensorDataTypes; 
@property (nonatomic,readonly) NSSet * recordingResultDataClasses; 
@property (nonatomic,retain) ARParentImageSensorSettings * parentImageSensorSettings;              //@synthesize parentImageSensorSettings=_parentImageSensorSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
+(id)metadataIdentifierForARSensorDataClass:(Class)arg1 error:(id*)arg2 ;
+(id)metadataIdentifierForARRecordableResultsClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)finished;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)_finish:(id)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(NSURL *)outputFileURL;
-(void)startRecording;
-(id)processData:(id)arg1 ;
-(void)writeImageData:(id)arg1 ;
-(unsigned long long)requiredSensorDataTypes;
-(ARParentImageSensorSettings *)parentImageSensorSettings;
-(unsigned long long)recordingSensorDataTypes;
-(NSSet *)recordingResultDataClasses;
-(id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3 ;
-(id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2 ;
-(id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3 startImmediately:(BOOL)arg4 recordCollaborationData:(BOOL)arg5 ;
-(void)finishRecording;
-(void)_startRecording;
-(void)processTimeSensitiveNSCoderObject:(id)arg1 withTimestamp:(double)arg2 metadataID:(id)arg3 ;
-(void)_finishRecording;
-(void)_fail:(id)arg1 ;
-(id<ARRecordingTechniqueDelegate>)recordingTechniqueDelegate;
-(void)writeAudioData:(id)arg1 ;
-(void)writeTimeOfFlightData:(id)arg1 ;
-(void)writeSensorData:(id)arg1 ;
-(BOOL)allowedToWrite;
-(void)removeTemporaryVideoFile;
-(id)createFileMetadata;
-(void)setupSensorTracks;
-(void)setupCustomTrack;
-(BOOL)expectAudioData;
-(void)writeDepthMap:(id)arg1 withTimestamp:(SCD_Struct_AR19)arg2 ;
-(void)copyVideoToPhotoLibrary;
-(void)isReadyToRecord;
-(void)didFinishRecording;
-(void)recordCustomData:(id)arg1 forTimestamp:(double)arg2 ;
-(void)recordCollaborationData:(id)arg1 localSession:(BOOL)arg2 ;
-(void)recordAddedAnchor:(id)arg1 ;
-(void)recordRemovedAnchor:(id)arg1 ;
-(void)abortRecording;
-(BOOL)expectDepthData;
-(void)setExpectDepthData:(BOOL)arg1 ;
-(void)setExpectAudioData:(BOOL)arg1 ;
-(BOOL)expectCustomData;
-(void)setExpectCustomData:(BOOL)arg1 ;
-(BOOL)shouldSaveVideoInPhotosLibrary;
-(void)setShouldSaveVideoInPhotosLibrary:(BOOL)arg1 ;
-(void)setRecordingTechniqueDelegate:(id<ARRecordingTechniqueDelegate>)arg1 ;
-(void)setParentImageSensorSettings:(ARParentImageSensorSettings *)arg1 ;
-(void)writeResultData:(id)arg1 withTimestamp:(double)arg2 ;
@end

