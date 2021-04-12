/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>
#import <ARKit/ARRecordingTechniqueProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, ARRecordingTechniqueDelegate;
@class NSObject, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVAssetWriterInputMetadataAdaptor, NSDictionary, NSSet, NSMutableArray, NSMutableDictionary, NSURL, NSString;

@interface ARRecordingTechnique : ARTechnique <ARRecordingTechniqueProtocol> {

	NSObject*<OS_dispatch_queue> _processingQueue;
	AVAssetWriter* _assetWriter;
	AVAssetWriterInput* _videoInput;
	AVAssetWriterInput* _videoMetadataInput;
	AVAssetWriterInput* _videoMetadataInput_CV3D;
	AVAssetWriterInput* _audioInput;
	AVAssetWriterInput* _accelInput_CV3D;
	AVAssetWriterInput* _gyroInput_CV3D;
	AVAssetWriterInput* _deviceOrientationInput_CV3D;
	AVAssetWriterInput* _locationInput_CV3D;
	AVAssetWriterInput* _customDataInput;
	AVAssetWriterInputPixelBufferAdaptor* _videoInputAdaptor;
	AVAssetWriterInput* _depthInput;
	AVAssetWriterInputPixelBufferAdaptor* _depthInputAdaptor;
	AVAssetWriterInputMetadataAdaptor* _accelInputAdaptor_CV3D;
	AVAssetWriterInputMetadataAdaptor* _gyroInputAdaptor_CV3D;
	AVAssetWriterInputMetadataAdaptor* _videoMetadataInputAdaptor;
	AVAssetWriterInputMetadataAdaptor* _videoMetadataInputAdaptor_CV3D;
	AVAssetWriterInputMetadataAdaptor* _deviceOrientationInputAdaptor_CV3D;
	AVAssetWriterInputMetadataAdaptor* _locationInputAdaptor_CV3D;
	AVAssetWriterInputMetadataAdaptor* _customDataInputAdaptor;
	NSDictionary* _resultAdaptors;
	NSDictionary* _resultInputs;
	NSObject*<OS_dispatch_semaphore> _inputIsReadySemaphore;
	BOOL _isWaitingUntilInputIsReady;
	unsigned long long _sensorDataTypes;
	NSSet* _recordableResultClasses;
	NSMutableArray* _sensorDataCache;
	NSMutableArray* _gyroDataQueue;
	NSMutableArray* _accelDataQueue;
	NSMutableArray* _orientationDataQueue;
	NSMutableArray* _locationDataQueue;
	double _imuTemperature;
	double _sessionSourceTime;
	NSMutableDictionary* _lastRecordedTimestamps;
	unsigned long long _state;
	BOOL _expectDepthData;
	BOOL _expectAudioData;
	BOOL _expectCustomData;
	BOOL _shouldSaveVideoInPhotosLibrary;
	NSURL* _outputFileURL;
	id<ARRecordingTechniqueDelegate> _recordingTechniqueDelegate;

}

@property (nonatomic,readonly) NSURL * outputFileURL;                                        //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (assign,nonatomic) BOOL expectDepthData;                                           //@synthesize expectDepthData=_expectDepthData - In the implementation block
@property (assign,nonatomic) BOOL expectAudioData;                                           //@synthesize expectAudioData=_expectAudioData - In the implementation block
@property (assign,nonatomic) BOOL expectCustomData;                                          //@synthesize expectCustomData=_expectCustomData - In the implementation block
@property (assign,nonatomic) BOOL shouldSaveVideoInPhotosLibrary;                            //@synthesize shouldSaveVideoInPhotosLibrary=_shouldSaveVideoInPhotosLibrary - In the implementation block
@property (__weak) id<ARRecordingTechniqueDelegate> recordingTechniqueDelegate;              //@synthesize recordingTechniqueDelegate=_recordingTechniqueDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long recordingSensorDataTypes; 
@property (nonatomic,readonly) NSSet * recordingResultDataClasses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metadataIdentifierForARRecordableResultsClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSURL *)outputFileURL;
-(void)startRecording;
-(id)processData:(id)arg1 ;
-(id)_fullDescription;
-(void)writeImageData:(id)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(unsigned long long)requiredSensorDataTypes;
-(unsigned long long)recordingSensorDataTypes;
-(NSSet *)recordingResultDataClasses;
-(id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3 ;
-(id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2 ;
-(id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3 startImmediately:(BOOL)arg4 recordCollaborationData:(BOOL)arg5 ;
-(void)finishRecording;
-(id<ARRecordingTechniqueDelegate>)recordingTechniqueDelegate;
-(void)writeAudioData:(id)arg1 ;
-(void)removeTemporaryVideoFile;
-(id)createFileMetadata;
-(void)setupCustomTrack;
-(BOOL)expectAudioData;
-(void)writeDepthMap:(id)arg1 withTimestamp:(SCD_Struct_AR19)arg2 ;
-(void)copyVideoToPhotoLibrary;
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
-(void)writeOutCachedSensorDataIfPresent;
-(void)writeAccelerometerMetadata:(id)arg1 ;
-(void)writeGyroscopeMetadata:(id)arg1 ;
-(void)writeDeviceOrientationMetadata:(id)arg1 ;
-(void)writeLocationMetadata:(id)arg1 ;
-(void)writeMetadata:(id)arg1 withTimestamp:(double)arg2 toInputAdaptor:(id)arg3 withIdentifier:(id)arg4 ;
-(CGAffineTransform)computeVideoTransformForDeviceOrientationWithCameraPosition:(long long)arg1 ;
-(void)createAssetWriter;
-(void)setupSensorTracksWithImageData:(id)arg1 ;
-(void)setupResultTracks;
-(void)startAssetWriterAtTimestamp:(double)arg1 ;
-(void)initAssetWriterIfRequiredWithImageData:(id)arg1 ;
-(void)writePixelBuffer:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_AR19)arg2 ;
-(id)getMetadataForBuffer:(CVBufferRef)arg1 additionalMetadata:(id)arg2 ;
-(void)writeMetadata:(id)arg1 withTimestamp:(double)arg2 toInputAdaptor:(id)arg3 withIdentifier:(id)arg4 withMetaItems:(id)arg5 ;
-(void)writeImageMetadata:(id)arg1 ;
-(id)makeMetaDataDictionaryItems:(id)arg1 withIdentifier:(id)arg2 ;
-(id)getJsonFriendlyCopy:(id)arg1 ;
-(BOOL)isValidJSONObject:(id)arg1 path:(id)arg2 ;
@end

