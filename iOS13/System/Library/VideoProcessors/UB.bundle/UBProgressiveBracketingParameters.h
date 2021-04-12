/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class NSArray, NSDictionary, NSString, UBProgressiveBracketingStatistics;

@interface UBProgressiveBracketingParameters : NSObject {

	NSArray* _firstGroupParameters;
	NSArray* _nextGroupParameters;
	NSArray* _lastGroupParameters;
	int _numberOfGroups;
	float _previewSNR;
	int _minAGC;
	NSDictionary* _options;
	double _maxNominalEVZeroIntegrationTime;
	BOOL _recomputeAWBCCM;
	int _mode;
	NSString* _portType;
	UBProgressiveBracketingStatistics* _statistics;
	double _totalIntegrationTime;

}

@property (nonatomic,readonly) NSString * portType;                                         //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) UBProgressiveBracketingStatistics * statistics;              //@synthesize statistics=_statistics - In the implementation block
@property (nonatomic,readonly) double totalIntegrationTime;                                 //@synthesize totalIntegrationTime=_totalIntegrationTime - In the implementation block
@property (nonatomic,readonly) int mode;                                                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) BOOL recomputeAWBCCM;                                        //@synthesize recomputeAWBCCM=_recomputeAWBCCM - In the implementation block
-(NSDictionary *)options;
-(int)mode;
-(NSString *)portType;
-(UBProgressiveBracketingStatistics *)statistics;
-(double)totalIntegrationTime;
-(id)currentBracketingParametersForGroup:(int)arg1 ;
-(BOOL)recomputeAWBCCM;
-(double)computeTotalIntegrationTimeWithStatistics:(id)arg1 forMode:(int)arg2 ;
-(id)initWithOptions:(id)arg1 portType:(id)arg2 statistics:(id)arg3 mode:(int)arg4 ;
-(float)evZeroTargetGainWithStatistics:(id)arg1 ;
-(double)_selectBracketsAndComputeExposureTimeWithOption:(id)arg1 statistics:(id)arg2 getAllInfo:(BOOL)arg3 updateDecision:(BOOL)arg4 minTotalExposureTime:(double)arg5 ;
-(void)_createBracketGroup:(id)arg1 statistics:(id)arg2 maxEV0Gain:(float)arg3 bracketGroup:(id)arg4 motionDataBiasErrorThreshold:(float)arg5 motionDataBiasErrorIntegrationCap:(float)arg6 ;
-(void)_preprocessThumbnail:(unsigned*)arg1 :(float*)arg2 :(id)arg3 :(int)arg4 :(unsigned)arg5 :(int)arg6 ;
-(float)_estimateSNRatShutterScale:(float)arg1 statistics:(id)arg2 rawThumbnail:(float*)arg3 thumbnailSorted:(BOOL)arg4 clippingThreshold:(float)arg5 numBrackets:(int)arg6 ;
-(float)_getGroupExposureTime:(id)arg1 ;
-(id)_truncateGroupParameters:(id)arg1 maxTotalExpTime:(float)arg2 minNumFrames:(unsigned)arg3 ;
-(float)_getGroupSNR:(id)arg1 statistics:(id)arg2 rawThumbnail:(float*)arg3 thumbnailSorted:(BOOL)arg4 snrClippingThreshold:(float)arg5 ;
-(double)_computeTotalIntegrationTimeFromFirstGroupParameters:(id)arg1 nextGroupParameters:(id)arg2 lastGroupParameters:(id)arg3 numberOfGroups:(int)arg4 ;
-(id)_lowLightFrameParametersWithStatistics:(id)arg1 EVRatio:(double)arg2 maxEVZeroGain:(float)arg3 motionDataBiasErrorThreshold:(float)arg4 motionDataBiasErrorIntegrationCap:(float)arg5 ;
@end

