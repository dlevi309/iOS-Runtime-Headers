/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class JasperPointCloudUtils, DNNEngine, JDCloudColorCalibrationController, NSString, JDJasperCameraSystemCalibrationData;

@interface JDCloudColorCalibration : NSObject {

	BOOL _debugOutputEnabled;
	BOOL _isMemoryDumpEnable;
	unsigned _featureVectorSize;
	unsigned _numInputAggregated;
	unsigned _aggregationCounter;
	float _alphaCorrectionFactor;
	unsigned _backendNetworkInputPixelFormat;
	JasperPointCloudUtils* _jasperPointCloudUtils;
	DNNEngine* _DNNEngine;
	JDCloudColorCalibrationController* _controller;
	unsigned* _featureVectorDim;
	float* _backendResultAggregated;
	NSString* _currentSessionDirPath;
	JDJasperCameraSystemCalibrationData* _calib;
	CGSize _backendNetworkInputDimensions;
	SCD_Struct_JD2 _analytics;

}

@property (nonatomic,retain) JasperPointCloudUtils * jasperPointCloudUtils;               //@synthesize jasperPointCloudUtils=_jasperPointCloudUtils - In the implementation block
@property (nonatomic,retain) DNNEngine * DNNEngine;                                       //@synthesize DNNEngine=_DNNEngine - In the implementation block
@property (nonatomic,retain) JDCloudColorCalibrationController * controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) unsigned* featureVectorDim;                                  //@synthesize featureVectorDim=_featureVectorDim - In the implementation block
@property (assign,nonatomic) unsigned featureVectorSize;                                  //@synthesize featureVectorSize=_featureVectorSize - In the implementation block
@property (assign,nonatomic) unsigned numInputAggregated;                                 //@synthesize numInputAggregated=_numInputAggregated - In the implementation block
@property (assign,nonatomic) unsigned aggregationCounter;                                 //@synthesize aggregationCounter=_aggregationCounter - In the implementation block
@property (assign,nonatomic) float* backendResultAggregated;                              //@synthesize backendResultAggregated=_backendResultAggregated - In the implementation block
@property (nonatomic,retain) NSString * currentSessionDirPath;                            //@synthesize currentSessionDirPath=_currentSessionDirPath - In the implementation block
@property (assign,nonatomic) float alphaCorrectionFactor;                                 //@synthesize alphaCorrectionFactor=_alphaCorrectionFactor - In the implementation block
@property (assign,nonatomic) SCD_Struct_JD2 analytics;                                    //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) JDJasperCameraSystemCalibrationData * calib;                 //@synthesize calib=_calib - In the implementation block
@property (assign,nonatomic) CGSize backendNetworkInputDimensions;                        //@synthesize backendNetworkInputDimensions=_backendNetworkInputDimensions - In the implementation block
@property (assign,nonatomic) unsigned backendNetworkInputPixelFormat;                     //@synthesize backendNetworkInputPixelFormat=_backendNetworkInputPixelFormat - In the implementation block
@property (assign,nonatomic) BOOL debugOutputEnabled;                                     //@synthesize debugOutputEnabled=_debugOutputEnabled - In the implementation block
@property (assign,nonatomic) BOOL isMemoryDumpEnable;                                     //@synthesize isMemoryDumpEnable=_isMemoryDumpEnable - In the implementation block
-(SCD_Struct_JD2)analytics;
-(BOOL)setInternalState:(id)arg1 ;
-(JDJasperCameraSystemCalibrationData *)calib;
-(void)setController:(JDCloudColorCalibrationController *)arg1 ;
-(void)resetSession;
-(JDCloudColorCalibrationController *)controller;
-(void)dealloc;
-(unsigned long long)gcd:(unsigned long long)arg1 and:(unsigned long long)arg2 ;
-(id)init:(unsigned)arg1 ;
-(id)dateAndTimeString;
-(void)memoryDumpImage:(CVBufferRef)arg1 withNameExtension:(id)arg2 ;
-(void)memoryDumpJasper:(id)arg1 ;
-(void)memoryDumpResultOutcome:(id)arg1 ;
-(void)memoryDumpBinary:(char*)arg1 sizeInBytes:(unsigned)arg2 withNameExtension:(id)arg3 ;
-(id)initWithSystemCalibrationData:(id)arg1 aggregationSize:(int)arg2 ;
-(BOOL)runController:(CVBufferRef)arg1 jdpc:(id)arg2 ;
-(CGRect)calculateJasperFOVInImageWithJasperCalibration:(id)arg1 withCameraCalibration:(id)arg2 withOriginalImageWidth:(unsigned long long)arg3 withOriginalImageHeight:(unsigned long long)arg4 forOutputImageWidth:(unsigned long long)arg5 forOutputImageHeight:(unsigned long long)arg6 ;
-(int)createPreprocessed:(CVBufferRef)arg1 andJDPC:(id)arg2 outputRGB:(_CVBuffer*)arg3 outputPC:(float*)arg4 outputPCSize:(unsigned*)arg5 ;
-(int)createPreprocessed:(CVBufferRef)arg1 andJDPC:(id)arg2 cropWidth:(unsigned long long)arg3 cropHeight:(unsigned long long)arg4 scale:(double)arg5 outputRGB:(_CVBuffer*)arg6 outputPC:(float*)arg7 outputPCSize:(unsigned*)arg8 ;
-(int)runRGBJNet:(CVBufferRef)arg1 pointCloud:(float*)arg2 pointCloudSize:(unsigned)arg3 resultOutcome:(id*)arg4 poolLogic:(BOOL)arg5 analyticsData:(id*)arg6 ;
-(int)runRGBJNet:(CVBufferRef)arg1 pointCloud:(float*)arg2 pointCloudSize:(unsigned)arg3 result:(JDCloudColorCalibrationResult*)arg4 poolLogic:(BOOL)arg5 analyticsData:(id*)arg6 ;
-(int)runRGBJNet:(CVBufferRef)arg1 pointCloud:(float*)arg2 pointCloudSize:(unsigned)arg3 resultOutcome:(id*)arg4 analyticsData:(id*)arg5 ;
-(id)calibratePointCloud:(id)arg1 andImage:(CVBufferRef)arg2 analyticsData:(id*)arg3 debugInfo:(id*)arg4 ;
-(id)getInternalState;
-(BOOL)isCloudColorCalibrationInDebug;
-(void)rgbj_calibration_log:(id)arg1 isErrorMessage:(BOOL)arg2 ;
-(BOOL)debugOutputEnabled;
-(void)setDebugOutputEnabled:(BOOL)arg1 ;
-(BOOL)isMemoryDumpEnable;
-(void)setIsMemoryDumpEnable:(BOOL)arg1 ;
-(JasperPointCloudUtils *)jasperPointCloudUtils;
-(void)setJasperPointCloudUtils:(JasperPointCloudUtils *)arg1 ;
-(DNNEngine *)DNNEngine;
-(void)setDNNEngine:(DNNEngine *)arg1 ;
-(unsigned*)featureVectorDim;
-(void)setFeatureVectorDim:(unsigned*)arg1 ;
-(unsigned)featureVectorSize;
-(void)setFeatureVectorSize:(unsigned)arg1 ;
-(unsigned)numInputAggregated;
-(void)setNumInputAggregated:(unsigned)arg1 ;
-(unsigned)aggregationCounter;
-(void)setAggregationCounter:(unsigned)arg1 ;
-(float*)backendResultAggregated;
-(void)setBackendResultAggregated:(float*)arg1 ;
-(NSString *)currentSessionDirPath;
-(void)setCurrentSessionDirPath:(NSString *)arg1 ;
-(float)alphaCorrectionFactor;
-(void)setAlphaCorrectionFactor:(float)arg1 ;
-(void)setAnalytics:(SCD_Struct_JD2)arg1 ;
-(void)setCalib:(JDJasperCameraSystemCalibrationData *)arg1 ;
-(CGSize)backendNetworkInputDimensions;
-(void)setBackendNetworkInputDimensions:(CGSize)arg1 ;
-(unsigned)backendNetworkInputPixelFormat;
-(void)setBackendNetworkInputPixelFormat:(unsigned)arg1 ;
@end

