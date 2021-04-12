/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARReplaySensorProtocolInternal.h>
#import <ARKit/ARReplaySensorProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source, ARReplaySensorDelegate, ARSensorDelegate;
@class NSMutableDictionary, NSObject, MOVReaderInterface, ARImageCroppingTechnique, NSSet, JDJasperCameraSystemCalibrationData, NSString, ARDepthPointCloudGenerator, ARReplayMovieDataWrapper, NSURL, ARParentImageSensorSettings, ARSession, NSMutableArray, NSArray;

@interface ARReplaySensorPublic : NSObject <ARReplaySensorProtocolInternal, ARReplaySensorProtocol> {

	BOOL _manualCommandLineMode;
	NSMutableDictionary* _nextWrappedImageDataForStreamIdentifierMap;
	NSMutableDictionary* _metadataCache;
	double _recordTimestampToMovieTimestampDifference;
	NSObject*<OS_dispatch_queue> _replayQueue;
	NSObject*<OS_dispatch_source> _timer;
	double _startTime;
	long long _tick;
	BOOL _running;
	BOOL _interrupted;
	BOOL _replayStarted;
	AB _finishedReplaying;
	MOVReaderInterface* _reader;
	BOOL _displaySynchronizationMarker;
	long long _displaySynchronizationMarkerFrames;
	CVBufferRef _synchronizationMarker;
	CVPixelBufferPoolRef _synchronizationMarkerPool;
	OpaqueVTPixelTransferSessionRef _synchronizationTransferSession;
	ARImageCroppingTechnique* _croppingTechnique;
	NSSet* _availableVideoStreams;
	NSSet* _availableMetadataStreams;
	NSSet* _videoStreamsToReplay;
	id<ARReplaySensorDelegate> _traceReplaySensorDelegate;
	SCD_Struct_AR1 _extrinsicsFromUltrawideToWide;
	JDJasperCameraSystemCalibrationData* _depthCameraCalibrationData;
	NSString* _depthVideoStreamIdentifier;
	unsigned long long _depthVideoTrackType;
	ARDepthPointCloudGenerator* _depthPointCloudGenerator;
	ARReplayMovieDataWrapper* _mostRecentWrappedImageDataOfDepthStream;
	BOOL _isJasperEnabled;
	SCD_Struct_AR1 _extrinsicsFromWideToJasper;
	SCD_Struct_AR1 _extrinsicsFromUltrawideToJasper;
	NSMutableDictionary* _calibrationBuffer;
	BOOL _usingST2Recording;
	BOOL _recordingTimeToReplayTimeOffsetReset;
	float _advanceFramesPerSecondMultiplier;
	int _imageIndex;
	id<ARSensorDelegate> _delegate;
	id<ARReplaySensorDelegate> _replaySensorDelegate;
	NSURL* _sequenceURL;
	NSString* _deviceModel;
	NSString* _osVersion;
	NSString* _arkitVersion;
	double _nominalFrameRate;
	unsigned long long _recordedSensorTypes;
	NSSet* _recordedResultClasses;
	long long _replayMode;
	long long _nextFrameIndex;
	NSSet* _customDataClasses;
	ARParentImageSensorSettings* _parentImageSensorSettings;
	NSString* _mainVideoStreamIdentifier;
	ARSession* _session;
	long long _targetFrameIndex;
	double _recordingTimeToReplayTimeOffset;
	NSMutableArray* _cmDataBuffer;
	NSMutableArray* _userEventBuffer;
	NSMutableArray* _cvaDepthTOFBuffer;
	CGSize _imageResolution;

}

@property (assign,nonatomic) int imageIndex;                                                       //@synthesize imageIndex=_imageIndex - In the implementation block
@property (assign) long long nextFrameIndex;                                                       //@synthesize nextFrameIndex=_nextFrameIndex - In the implementation block
@property (assign) long long targetFrameIndex;                                                     //@synthesize targetFrameIndex=_targetFrameIndex - In the implementation block
@property (assign,nonatomic) double recordingTimeToReplayTimeOffset;                               //@synthesize recordingTimeToReplayTimeOffset=_recordingTimeToReplayTimeOffset - In the implementation block
@property (assign,nonatomic) BOOL recordingTimeToReplayTimeOffsetReset;                            //@synthesize recordingTimeToReplayTimeOffsetReset=_recordingTimeToReplayTimeOffsetReset - In the implementation block
@property (nonatomic,readonly) NSMutableArray * cmDataBuffer;                                      //@synthesize cmDataBuffer=_cmDataBuffer - In the implementation block
@property (nonatomic,readonly) NSMutableArray * userEventBuffer;                                   //@synthesize userEventBuffer=_userEventBuffer - In the implementation block
@property (nonatomic,readonly) NSMutableArray * cvaDepthTOFBuffer;                                 //@synthesize cvaDepthTOFBuffer=_cvaDepthTOFBuffer - In the implementation block
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<ARReplaySensorDelegate> replaySensorDelegate;                                //@synthesize replaySensorDelegate=_replaySensorDelegate - In the implementation block
@property (nonatomic,readonly) NSURL * sequenceURL;                                                //@synthesize sequenceURL=_sequenceURL - In the implementation block
@property (nonatomic,readonly) NSString * deviceModel;                                             //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                                               //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * arkitVersion;                                            //@synthesize arkitVersion=_arkitVersion - In the implementation block
@property (nonatomic,readonly) CGSize imageResolution;                                             //@synthesize imageResolution=_imageResolution - In the implementation block
@property (nonatomic,readonly) double nominalFrameRate;                                            //@synthesize nominalFrameRate=_nominalFrameRate - In the implementation block
@property (nonatomic,readonly) unsigned long long recordedSensorTypes;                             //@synthesize recordedSensorTypes=_recordedSensorTypes - In the implementation block
@property (nonatomic,readonly) NSSet * recordedResultClasses;                                      //@synthesize recordedResultClasses=_recordedResultClasses - In the implementation block
@property (nonatomic,readonly) NSArray * recordedResultClassList; 
@property (nonatomic,readonly) long long replayMode;                                               //@synthesize replayMode=_replayMode - In the implementation block
@property (nonatomic,readonly) BOOL isReplayingManually; 
@property (getter=isSynchronousMode,nonatomic,readonly) BOOL synchronousMode; 
@property (assign) float advanceFramesPerSecondMultiplier;                                         //@synthesize advanceFramesPerSecondMultiplier=_advanceFramesPerSecondMultiplier - In the implementation block
@property (nonatomic,copy) NSSet * customDataClasses;                                              //@synthesize customDataClasses=_customDataClasses - In the implementation block
@property (nonatomic,retain) ARParentImageSensorSettings * parentImageSensorSettings;              //@synthesize parentImageSensorSettings=_parentImageSensorSettings - In the implementation block
@property (nonatomic,retain) NSString * mainVideoStreamIdentifier;                                 //@synthesize mainVideoStreamIdentifier=_mainVideoStreamIdentifier - In the implementation block
@property (assign,nonatomic,__weak) ARSession * session;                                           //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BOOL interrupted;                                                   //@synthesize interrupted=_interrupted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long powerUsage; 
@property (__weak) id<ARReplaySensorDelegate> traceReplaySensorDelegate; 
@property (nonatomic,readonly) BOOL finishedReplaying; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)interrupt;
-(ARSession *)session;
-(void)setSession:(ARSession *)arg1 ;
-(double)currentTime;
-(BOOL)interrupted;
-(NSString *)osVersion;
-(NSString *)deviceModel;
-(void)advance;
-(double)nominalFrameRate;
-(void)endInterruption;
-(long long)replayMode;
-(CGSize)imageResolution;
-(unsigned long long)providedDataTypes;
-(ARParentImageSensorSettings *)parentImageSensorSettings;
-(id)initWithDataFromFile:(id)arg1 ;
-(id)initWithSequenceURL:(id)arg1 replayMode:(long long)arg2 ;
-(id)initWithSequenceURL:(id)arg1 manualReplay:(BOOL)arg2 ;
-(id)initWithSequenceURL:(id)arg1 manualReplay:(BOOL)arg2 synchronousMode:(BOOL)arg3 ;
-(void)advanceFrame;
-(void)advanceToFrameIndex:(long long)arg1 ;
-(id)replayTechniqueForResultDataClasses:(id)arg1 ;
-(id)customDataForTimestamp:(double)arg1 ;
-(id<ARReplaySensorDelegate>)replaySensorDelegate;
-(void)setReplaySensorDelegate:(id<ARReplaySensorDelegate>)arg1 ;
-(NSURL *)sequenceURL;
-(NSString *)arkitVersion;
-(unsigned long long)recordedSensorTypes;
-(NSSet *)recordedResultClasses;
-(NSArray *)recordedResultClassList;
-(BOOL)isReplayingManually;
-(BOOL)isSynchronousMode;
-(BOOL)finishedReplaying;
-(long long)nextFrameIndex;
-(float)advanceFramesPerSecondMultiplier;
-(void)setAdvanceFramesPerSecondMultiplier:(float)arg1 ;
-(NSSet *)customDataClasses;
-(void)setCustomDataClasses:(NSSet *)arg1 ;
-(void)setParentImageSensorSettings:(ARParentImageSensorSettings *)arg1 ;
-(id<ARReplaySensorDelegate>)traceReplaySensorDelegate;
-(void)setTraceReplaySensorDelegate:(id<ARReplaySensorDelegate>)arg1 ;
-(void)endReplay;
-(void)prepareForReplay;
-(void)startReplayIfNeeded;
-(void)setTargetFrameIndex:(long long)arg1 ;
-(void)setImageIndex:(int)arg1 ;
-(void)tick;
-(long long)targetFrameIndex;
-(int)imageIndex;
-(void)_didOutputSensorData:(id)arg1 ;
-(void)setNextFrameIndex:(long long)arg1 ;
-(id)_mainVideoStringID:(id)arg1 ;
-(void)readFileMetadata;
-(id)_streamIdentifierForCaptureDeviceType:(id)arg1 position:(long long)arg2 ;
-(id)getResultDataForClasses:(id)arg1 upToRecordTime:(double)arg2 ;
-(/*^block*/id)keyedArchiveConverterForClasses:(id)arg1 ;
-(id)getItemsFromStream:(id)arg1 upToMovieTime:(double)arg2 converter:(/*^block*/id)arg3 ;
-(BOOL)_allStreamsAreAvailable:(id)arg1 ;
-(SCD_Struct_AR57)currentCMTime;
-(id)peekNextWrappedImageDataForAllRequiredStreams;
-(void)_replaySensorFinishedReplayingData;
-(id)imageDataToReplayForTimestamp:(double)arg1 ;
-(id)getNextWrappedImageDataForReplay;
-(id)wrappedImageDataOrderedByTime:(id)arg1 ;
-(/*^block*/id)metadataWrapperConverter:(Class)arg1 ;
-(double)recordingTimeToReplayTimeOffset;
-(/*^block*/id)keyedArchiveConverter:(Class)arg1 ;
-(id)getWrappedItemsFromPixelBufferStream:(id)arg1 upToMovieTime:(double)arg2 converter:(/*^block*/id)arg3 ;
-(void)_appendCalibrationData:(id)arg1 streamIdentifier:(id)arg2 ;
-(double)sourceTimestampForMovieTimestamp:(double)arg1 ;
-(void)readAndVendCVADepthTOFsUntil:(double)arg1 ;
-(void)readAndVendCMDatasUntil:(double)arg1 ;
-(void)readAndVendCVAUserEventsUntil:(double)arg1 ;
-(id)_populateCalibrationStream:(id)arg1 ;
-(NSString *)mainVideoStreamIdentifier;
-(NSMutableArray *)cmDataBuffer;
-(NSMutableArray *)cvaDepthTOFBuffer;
-(NSMutableArray *)userEventBuffer;
-(id)peekNextWrappedImageDataForStreamIdentifier:(id)arg1 ;
-(id)getWrappedItemsFromStream:(id)arg1 upToMovieTime:(double)arg2 converter:(/*^block*/id)arg3 ;
-(double)_getMinFrameDurationForStream:(id)arg1 ;
-(BOOL)readNextFrameFromStream:(id)arg1 forWrapper:(id)arg2 ;
-(id)getNextWrappedItemsFromStream:(id)arg1 converter:(/*^block*/id)arg2 ;
-(id)_readDepthCameraCalibrationData;
-(id)availableVideoFormatForDeviceType:(id)arg1 position:(long long)arg2 ;
-(void)setMainVideoStreamIdentifier:(NSString *)arg1 ;
-(void)setRecordingTimeToReplayTimeOffset:(double)arg1 ;
-(BOOL)recordingTimeToReplayTimeOffsetReset;
-(void)setRecordingTimeToReplayTimeOffsetReset:(BOOL)arg1 ;
@end

