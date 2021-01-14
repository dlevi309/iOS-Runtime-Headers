/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInternalState:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)getInternalState;
-(id)initWithSystemCalibrationData:(id)arg1 ;
-(void)setGmoProvider:(id)arg1 ;
-(BOOL)setDataBufferPool:(CVDataBufferPoolRef)arg1 ;
-(BOOL)prepareDataPool;
-(BOOL)prepareForJasperPreset:(int)arg1 ;
-(unsigned long long)requiredStorageBytesForGeneratedPointClouds;
-(id)generatePointCloudFromRawFrame:(id)arg1 ;
-(id)generateFrameConfigsForPreset:(int)arg1 overrides:(FrameConfigOverrides*)arg2 ;
-(id)generateFrameConfigsForPreset:(int)arg1 withOptions:(id)arg2 ;
-(id)generateFrameConfigsForPreset:(int)arg1 withOverrides:(JDFrameConfigOverrides*)arg2 ;
-(void)setGmoDebugMode;
-(void)setGmoFlowBitmap:(unsigned)arg1 ;
-(void)startNewStatisticsSession;
-(BOOL)reportSessionStatistics;
-(BOOL)outputAdditionalEchos;
-(void)setOutputAdditionalEchos:(BOOL)arg1 ;
@end

