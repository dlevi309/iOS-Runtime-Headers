/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


@protocol JDDepthProcessorDelegate;
#import <JasperDepth/JasperDepth-Structs.h>
@class JDJasperModuleCalibrationData, JDCameraCalibrationData;

@interface JDDepthProcessor : NSObject {

	JDJasperModuleCalibrationData* _moduleCalib;
	JDCameraCalibrationData* _cameraCalib;
	JasperAlgo* _algo;
	CVDataBufferPoolRef _dataBufferPool;
	BridgeProvider* _bridgeProvider;
	id<JDDepthProcessorDelegate> _delegate;
	BOOL _outputAdditionalEchos;

}

@property (readonly) unsigned long long requiredStorageBytesForGeneratedPointClouds; 
@property (assign) BOOL outputAdditionalEchos;                                                    //@synthesize outputAdditionalEchos=_outputAdditionalEchos - In the implementation block
+(JDFrameConfigOverrides)defaultFrameConfigOverrides;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithSystemCalibrationData:(id)arg1 ;
-(id)generatePointCloudFromRawFrame:(id)arg1 ;
-(BOOL)setDataBufferPool:(CVDataBufferPoolRef)arg1 ;
-(void)setGmoDebugMode;
-(void)setGmoFlowBitmap:(unsigned)arg1 ;
-(BOOL)prepareForJasperPreset:(int)arg1 ;
-(void)startNewStatisticsSession;
-(BOOL)reportSessionStatistics;
-(id)generateFrameConfigsForPreset:(int)arg1 withOverrides:(JDFrameConfigOverrides*)arg2 ;
-(void)setGmoProvider:(id)arg1 ;
-(BOOL)prepareDataPool;
-(unsigned long long)requiredStorageBytesForGeneratedPointClouds;
-(BOOL)outputAdditionalEchos;
-(void)setOutputAdditionalEchos:(BOOL)arg1 ;
@end

