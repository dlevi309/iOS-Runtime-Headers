/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class AXShotflowNetwork, NSArray;

@interface AXShotflowDetector : NSObject {

	AXShotflowNetwork* _network;
	float _overlap_threshold;
	float _nmsThreshold;
	float _mergeHeadsThreshold;
	float _osfsThreshold;
	float _osfsSizeRatio;
	float _olmcsThreshold;
	int _olmcsMergeCountDelta;
	float _smartThreshold;
	float _smartDistanceFactor;
	NSArray* _filterThreshold;

}

@property (assign,nonatomic) float overlap_threshold;                //@synthesize overlap_threshold=_overlap_threshold - In the implementation block
@property (assign,nonatomic) float threshold; 
@property (nonatomic,retain) NSArray * filterThreshold;              //@synthesize filterThreshold=_filterThreshold - In the implementation block
@property (assign,nonatomic) float nmsThreshold;                     //@synthesize nmsThreshold=_nmsThreshold - In the implementation block
@property (assign,nonatomic) float mergeHeadsThreshold;              //@synthesize mergeHeadsThreshold=_mergeHeadsThreshold - In the implementation block
@property (assign,nonatomic) float osfsThreshold;                    //@synthesize osfsThreshold=_osfsThreshold - In the implementation block
@property (assign,nonatomic) float osfsSizeRatio;                    //@synthesize osfsSizeRatio=_osfsSizeRatio - In the implementation block
@property (assign,nonatomic) float olmcsThreshold;                   //@synthesize olmcsThreshold=_olmcsThreshold - In the implementation block
@property (assign,nonatomic) int olmcsMergeCountDelta;               //@synthesize olmcsMergeCountDelta=_olmcsMergeCountDelta - In the implementation block
@property (assign,nonatomic) float smartThreshold;                   //@synthesize smartThreshold=_smartThreshold - In the implementation block
@property (assign,nonatomic) float smartDistanceFactor;              //@synthesize smartDistanceFactor=_smartDistanceFactor - In the implementation block
+(id)cpuDetectorWithModelPath:(id)arg1 configuration:(id)arg2 version:(int)arg3 ;
+(id)gpuDetectorWithModelPath:(id)arg1 configuration:(id)arg2 preferredMetalDeviceID:(int)arg3 version:(int)arg4 ;
-(float)threshold;
-(float)nmsThreshold;
-(id)initWithNetwork:(id)arg1 nmsThreshold:(float)arg2 filterThreshold:(id)arg3 ;
-(float)osfsThreshold;
-(float)osfsSizeRatio;
-(id)detect:(id)arg1 ;
-(float)mergeHeadsThreshold;
-(float)olmcsThreshold;
-(int)olmcsMergeCountDelta;
-(float)smartThreshold;
-(float)smartDistanceFactor;
-(id)filterBoxes:(id)arg1 ;
-(id)enforceSquareFaces:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 ;
-(id)mergeHeadsBoxes:(id)arg1 ;
-(id)mergeBoxes:(id)arg1 ;
-(id)overlappingSmallFacesSuppression:(id)arg1 ;
-(id)overlappingLowMergeCountSuppression:(id)arg1 ;
-(id)smartMergeBoxes:(id)arg1 ;
-(float)overlap_threshold;
-(void)setOverlap_threshold:(float)arg1 ;
-(NSArray *)filterThreshold;
-(void)setFilterThreshold:(NSArray *)arg1 ;
-(void)setNmsThreshold:(float)arg1 ;
-(void)setMergeHeadsThreshold:(float)arg1 ;
-(void)setOsfsThreshold:(float)arg1 ;
-(void)setOsfsSizeRatio:(float)arg1 ;
-(void)setOlmcsThreshold:(float)arg1 ;
-(void)setOlmcsMergeCountDelta:(int)arg1 ;
-(void)setSmartThreshold:(float)arg1 ;
-(void)setSmartDistanceFactor:(float)arg1 ;
-(id)nmsBoxes:(id)arg1 ;
-(id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 ;
-(void)setThreshold:(float)arg1 ;
@end

