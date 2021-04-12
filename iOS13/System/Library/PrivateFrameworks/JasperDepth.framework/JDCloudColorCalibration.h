/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class JasperPointCloudUtils, DNNEngine, RgbJController, NSString;

@interface JDCloudColorCalibration : NSObject {

	BOOL _isMemoryDumpEnable;
	BOOL _featureVectorFull;
	unsigned _frameSelect;
	unsigned _highRateFrameSelect;
	unsigned _lowRateFrameSelect;
	unsigned _featureVectorSize;
	unsigned _numInputAggregated;
	unsigned _aggregationCounter;
	float _alphaCorrectionFactor;
	JasperPointCloudUtils* _jasperPointCloudUtils;
	DNNEngine* _DNNEngine;
	RgbJController* _controller;
	unsigned* _featureVectorDim;
	float* _backendResultAggregated;
	NSString* _currentSessionDirPath;
	unsigned* _rateFrameSelect;
	SCD_Struct_JD0 _analytics;

}

@property (nonatomic,retain) JasperPointCloudUtils * jasperPointCloudUtils;              //@synthesize jasperPointCloudUtils=_jasperPointCloudUtils - In the implementation block
@property (nonatomic,retain) DNNEngine * DNNEngine;                                      //@synthesize DNNEngine=_DNNEngine - In the implementation block
@property (nonatomic,retain) RgbJController * controller;                                //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) unsigned* featureVectorDim;                                 //@synthesize featureVectorDim=_featureVectorDim - In the implementation block
@property (assign,nonatomic) unsigned featureVectorSize;                                 //@synthesize featureVectorSize=_featureVectorSize - In the implementation block
@property (assign,nonatomic) unsigned numInputAggregated;                                //@synthesize numInputAggregated=_numInputAggregated - In the implementation block
@property (assign,nonatomic) unsigned aggregationCounter;                                //@synthesize aggregationCounter=_aggregationCounter - In the implementation block
@property (assign,nonatomic) float* backendResultAggregated;                             //@synthesize backendResultAggregated=_backendResultAggregated - In the implementation block
@property (nonatomic,retain) NSString * currentSessionDirPath;                           //@synthesize currentSessionDirPath=_currentSessionDirPath - In the implementation block
@property (assign,nonatomic) float alphaCorrectionFactor;                                //@synthesize alphaCorrectionFactor=_alphaCorrectionFactor - In the implementation block
@property (assign,nonatomic) BOOL featureVectorFull;                                     //@synthesize featureVectorFull=_featureVectorFull - In the implementation block
@property (assign,nonatomic) unsigned* rateFrameSelect;                                  //@synthesize rateFrameSelect=_rateFrameSelect - In the implementation block
@property (assign,nonatomic) SCD_Struct_JD0 analytics;                                   //@synthesize analytics=_analytics - In the implementation block
@property (assign,nonatomic) BOOL isMemoryDumpEnable;                                    //@synthesize isMemoryDumpEnable=_isMemoryDumpEnable - In the implementation block
@property (assign,nonatomic) unsigned frameSelect;                                       //@synthesize frameSelect=_frameSelect - In the implementation block
@property (assign,nonatomic) unsigned highRateFrameSelect;                               //@synthesize highRateFrameSelect=_highRateFrameSelect - In the implementation block
@property (assign,nonatomic) unsigned lowRateFrameSelect;                                //@synthesize lowRateFrameSelect=_lowRateFrameSelect - In the implementation block
-(id)init;
-(void)dealloc;
-(SCD_Struct_JD0)analytics;
-(void)setAnalytics:(SCD_Struct_JD0)arg1 ;
-(void)setController:(RgbJController *)arg1 ;
-(RgbJController *)controller;
-(id)init:(unsigned)arg1 ;
-(void)resetSession;
-(void)memoryDumpImageBeforeCropScale:(CVBufferRef)arg1 ;
-(void)memoryDumpImageAfterCropScale:(CVBufferRef)arg1 ;
-(void)memoryDumpJasper:(id)arg1 ;
-(void)memoryDumpResult:(JDCloudColorCalibrationResult*)arg1 ;
-(void)memoryDumpJasperFinal:(float*)arg1 withSize:(unsigned)arg2 ;
-(BOOL)runController:(CVBufferRef)arg1 jdpc:(id)arg2 ;
-(int)createPreprocessed:(CVBufferRef)arg1 andJDPC:(id)arg2 cropWidth:(unsigned long long)arg3 cropHeight:(unsigned long long)arg4 scale:(double)arg5 outputRGB:(_CVBuffer*)arg6 outputPC:(float*)arg7 outputPCSize:(unsigned*)arg8 ;
-(int)runRGBJNet:(CVBufferRef)arg1 pointCloud:(float*)arg2 pointCloudSize:(unsigned)arg3 result:(JDCloudColorCalibrationResult*)arg4 poolLogic:(BOOL)arg5 analyticsData:(id*)arg6 ;
-(BOOL)runControllerLogic:(CVBufferRef)arg1 jdpc:(id)arg2 ;
-(BOOL)createPreprocessedRGBImage:(CVBufferRef)arg1 andJDPC:(id)arg2 cropWidth:(unsigned long long)arg3 cropHeight:(unsigned long long)arg4 scale:(double)arg5 outputRGB:(_CVBuffer*)arg6 outputPC:(float*)arg7 outputPCSize:(unsigned*)arg8 ;
-(BOOL)runRGBJNetFirstPart:(CVBufferRef)arg1 pointCloud:(float*)arg2 pointCloudSize:(unsigned)arg3 numAggFrames:(int)arg4 ;
-(BOOL)runRGBJNetSecondPart:(JDCloudColorCalibrationResult*)arg1 poolLogic:(BOOL)arg2 ;
-(void)resetAggregationCounter:(int)arg1 ;
-(BOOL)isMemoryDumpEnable;
-(void)setIsMemoryDumpEnable:(BOOL)arg1 ;
-(unsigned)frameSelect;
-(void)setFrameSelect:(unsigned)arg1 ;
-(unsigned)highRateFrameSelect;
-(void)setHighRateFrameSelect:(unsigned)arg1 ;
-(unsigned)lowRateFrameSelect;
-(void)setLowRateFrameSelect:(unsigned)arg1 ;
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
-(BOOL)featureVectorFull;
-(void)setFeatureVectorFull:(BOOL)arg1 ;
-(unsigned*)rateFrameSelect;
-(void)setRateFrameSelect:(unsigned*)arg1 ;
@end

