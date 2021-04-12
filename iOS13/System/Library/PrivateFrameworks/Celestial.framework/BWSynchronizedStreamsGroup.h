/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSDictionary, NSArray, NSMutableDictionary, BWFigVideoCaptureStream;

@interface BWSynchronizedStreamsGroup : NSObject {

	OpaqueFigCaptureSynchronizedStreamsGroupRef _synchronizedStreamsGroup;
	NSDictionary* _synchronizedStreamsGroupSupportedProperties;
	NSArray* _streams;
	NSArray* _portTypes;
	NSDictionary* _cameraViewMatricesByPortType;
	NSDictionary* _cameraPoseMatricesByPortType;
	NSMutableDictionary* _baseZoomFactorsByPortType;
	NSMutableDictionary* _clientBaseZoomFactorsByPortType;
	OpaqueFigCaptureStreamRef _synchronizationMaster;
	BOOL _readOnly;
	BOOL _atomicMasterSlaveReconfigurationSupported;
	BOOL _masterConfigurationSupported;
	NSDictionary* _currentMasterConfiguration;
	BOOL _sensorToOutputSkippingEnabled;
	int _maximumNumberOfSlaveStreamsWithoutFrameSkipping;
	int _maximumNumberOfEnabledSlaveTimeMachines;
	BWFigVideoCaptureStream* _cameraControlsStatisticsMasterStream;
	BOOL _statsMasterHasBeenSet;

}

@property (nonatomic,readonly) OpaqueFigCaptureSynchronizedStreamsGroupRef syncGroup;                       //@synthesize synchronizedStreamsGroup=_synchronizedStreamsGroup - In the implementation block
@property (nonatomic,readonly) NSArray * portTypes;                                                         //@synthesize portTypes=_portTypes - In the implementation block
@property (nonatomic,readonly) OpaqueFigCaptureStreamRef synchronizationMaster;                             //@synthesize synchronizationMaster=_synchronizationMaster - In the implementation block
@property (nonatomic,readonly) BOOL minimumMasterToSlaveFrameRateRatioSupported; 
@property (nonatomic,readonly) BOOL maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported; 
@property (nonatomic,readonly) NSDictionary * clientBaseZoomFactorsByPortType;                              //@synthesize clientBaseZoomFactorsByPortType=_clientBaseZoomFactorsByPortType - In the implementation block
@property (nonatomic,copy) NSDictionary * baseZoomFactorsByPortType;                                        //@synthesize baseZoomFactorsByPortType=_baseZoomFactorsByPortType - In the implementation block
@property (nonatomic,readonly) BWFigVideoCaptureStream * cameraControlsStatisticsMasterStream;              //@synthesize cameraControlsStatisticsMasterStream=_cameraControlsStatisticsMasterStream - In the implementation block
+(void)initialize;
+(int)resetAllSynchronizedStreamsGroupsForDevice:(OpaqueFigCaptureDeviceRef)arg1 ;
-(void)dealloc;
-(int)_getViewAndPoseMatrices;
-(int)_computeBaseZoomFactors;
-(void)_updateClientBaseZoomFactors;
-(id)_slaveConfigurationForStream:(id)arg1 ;
-(BOOL)maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported;
-(id)_worldPortType;
-(id)initWithStreams:(id)arg1 device:(OpaqueFigCaptureDeviceRef)arg2 readOnly:(BOOL)arg3 baseZoomFactorOverrides:(id)arg4 ;
-(void)setBaseZoomFactorsByPortType:(NSDictionary *)arg1 ;
-(id)cameraViewMatrixForPortType:(id)arg1 ;
-(id)cameraPoseMatrixForPortType:(id)arg1 ;
-(BOOL)supportsProperty:(CFStringRef)arg1 ;
-(BOOL)minimumMasterToSlaveFrameRateRatioSupported;
-(int)setMasterStream:(id)arg1 allStreams:(id)arg2 ;
-(int)setCameraControlsStatisticsMasterStream:(BWFigVideoCaptureStream *)arg1 ;
-(unsigned)minimumMasterToSlaveFrameRateRatio;
-(void)setMinimumMasterToSlaveFrameRateRatio:(unsigned)arg1 ;
-(void)setMaximumNumberOfSlaveStreamsWithoutFrameSkipping:(int)arg1 ;
-(void)setMaximumNumberOfEnabledSlaveTimeMachines:(int)arg1 ;
-(int)_getSynchronizationMasterFromStreams:(id)arg1 ;
-(OpaqueFigCaptureSynchronizedStreamsGroupRef)syncGroup;
-(NSArray *)portTypes;
-(OpaqueFigCaptureStreamRef)synchronizationMaster;
-(NSDictionary *)baseZoomFactorsByPortType;
-(NSDictionary *)clientBaseZoomFactorsByPortType;
-(BWFigVideoCaptureStream *)cameraControlsStatisticsMasterStream;
@end

