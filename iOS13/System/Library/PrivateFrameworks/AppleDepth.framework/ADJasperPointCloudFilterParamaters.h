/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


@interface ADJasperPointCloudFilterParamaters : NSObject {

	float _confidenceThreshold;
	float _minDistance;
	float _maxDistance;
	float _shortRangeDepthThreshold;
	float _shortRangeConfidenceThreshold;
	unsigned long long _echoMode;

}

@property (assign,nonatomic) unsigned long long echoMode;                      //@synthesize echoMode=_echoMode - In the implementation block
@property (assign,nonatomic) float confidenceThreshold;                        //@synthesize confidenceThreshold=_confidenceThreshold - In the implementation block
@property (assign,nonatomic) float minDistance;                                //@synthesize minDistance=_minDistance - In the implementation block
@property (assign,nonatomic) float maxDistance;                                //@synthesize maxDistance=_maxDistance - In the implementation block
@property (assign,nonatomic) float shortRangeDepthThreshold;                   //@synthesize shortRangeDepthThreshold=_shortRangeDepthThreshold - In the implementation block
@property (assign,nonatomic) float shortRangeConfidenceThreshold;              //@synthesize shortRangeConfidenceThreshold=_shortRangeConfidenceThreshold - In the implementation block
-(id)init;
-(float)confidenceThreshold;
-(void)setConfidenceThreshold:(float)arg1 ;
-(float)maxDistance;
-(void)setMaxDistance:(float)arg1 ;
-(unsigned long long)echoMode;
-(void)setEchoMode:(unsigned long long)arg1 ;
-(float)minDistance;
-(void)setMinDistance:(float)arg1 ;
-(float)shortRangeDepthThreshold;
-(void)setShortRangeDepthThreshold:(float)arg1 ;
-(float)shortRangeConfidenceThreshold;
-(void)setShortRangeConfidenceThreshold:(float)arg1 ;
@end

