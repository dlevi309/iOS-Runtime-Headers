/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class BWFigCaptureSynchronizedStreamsGroup, NSArray, NSDictionary, BWFigVideoCaptureStream;

@interface BWFigVideoCaptureSynchronizedStreamsGroup : NSObject {

	BWFigCaptureSynchronizedStreamsGroup* _synchronizedStreamsGroup;
	NSArray* _streams;
	NSArray* _portTypes;
	NSDictionary* _cameraViewMatricesByPortType;
	NSDictionary* _cameraPoseMatricesByPortType;
	NSDictionary* _baseZoomFactorsByPortType;
	NSDictionary* _clientBaseZoomFactorsByPortType;
	BOOL _readOnly;
	BOOL _atomicMasterSlaveReconfigurationSupported;
	BOOL _masterConfigurationSupported;
	BWFigVideoCaptureStream* _currentMasterStream;
	NSDictionary* _currentSlaveConfigurationsByPortType;
	BOOL _sensorToOutputSkippingEnabled;
	int _maximumNumberOfSlaveStreamsWithoutFrameSkipping;
	int _maximumNumberOfEnabledSlaveTimeMachines;
	BWFigVideoCaptureStream* _cameraControlsStatisticsMasterStream;
	BOOL _statsMasterHasBeenSet;

}

@property (nonatomic,readonly) BWFigCaptureSynchronizedStreamsGroup * syncGroup;                            //@synthesize synchronizedStreamsGroup=_synchronizedStreamsGroup - In the implementation block
@property (nonatomic,readonly) NSArray * portTypes;                                                         //@synthesize portTypes=_portTypes - In the implementation block
@property (nonatomic,readonly) BOOL minimumMasterToSlaveFrameRateRatioSupported; 
@property (nonatomic,readonly) BOOL maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported; 
@property (nonatomic,readonly) NSDictionary * clientBaseZoomFactorsByPortType;                              //@synthesize clientBaseZoomFactorsByPortType=_clientBaseZoomFactorsByPortType - In the implementation block
@property (nonatomic,copy) NSDictionary * baseZoomFactorsByPortType;                                        //@synthesize baseZoomFactorsByPortType=_baseZoomFactorsByPortType - In the implementation block
@property (nonatomic,readonly) BWFigVideoCaptureStream * cameraControlsStatisticsMasterStream;              //@synthesize cameraControlsStatisticsMasterStream=_cameraControlsStatisticsMasterStream - In the implementation block
+(void)initialize;
-(NSArray *)portTypes;
-(NSDictionary *)baseZoomFactorsByPortType;
-(int)_getViewAndPoseMatrices;
-(int)_computeBaseZoomFactorsWithOverrides:(id)arg1 ;
-(id)_slaveConfigurationForStream:(id)arg1 ;
-(id)_worldPortType;
-(BOOL)maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported;
-(id)initWithSynchronizedStreamsGroup:(id)arg1 activeStreams:(id)arg2 readOnly:(BOOL)arg3 baseZoomFactorOverrides:(id)arg4 error:(int*)arg5 ;
-(id)cameraViewMatrixForPortType:(id)arg1 ;
-(id)cameraPoseMatrixForPortType:(id)arg1 ;
-(BOOL)minimumMasterToSlaveFrameRateRatioSupported;
-(int)setMasterStream:(id)arg1 allStreams:(id)arg2 ;
-(int)setCameraControlsStatisticsMasterStream:(BWFigVideoCaptureStream *)arg1 ;
-(unsigned)minimumMasterToSlaveFrameRateRatio;
-(void)setMinimumMasterToSlaveFrameRateRatio:(unsigned)arg1 ;
-(void)setMaximumNumberOfSlaveStreamsWithoutFrameSkipping:(int)arg1 ;
-(void)setMaximumNumberOfEnabledSlaveTimeMachines:(int)arg1 ;
-(NSDictionary *)clientBaseZoomFactorsByPortType;
-(BWFigVideoCaptureStream *)cameraControlsStatisticsMasterStream;
-(void)setBaseZoomFactorsByPortType:(NSDictionary *)arg1 ;
-(BWFigCaptureSynchronizedStreamsGroup *)syncGroup;
-(void)dealloc;
@end

