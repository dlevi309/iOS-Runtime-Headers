/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSMutableDictionary, VCRateControlBandwidthEstimator, VCRateControlServerBag;

@interface VCRateControlBandwidthEstimatorMap : NSObject {

	unsigned _mode;
	unsigned _radioAccessTechnology;
	double _estimatedBandwidth;
	double _estimatedBandwidthUncapped;
	NSMutableDictionary* _estimatorMap;
	unsigned _currentActiveEstimatorID;
	int _state;
	VCRateControlBandwidthEstimator* _defaultEstimator;
	int _bandwidthEstimationState;
	BOOL _fastSuddenBandwidthDetectionEnabled;
	VCRateControlServerBag* _serverBag;
	void* _logBWEDump;

}

@property (assign,nonatomic) double estimatedBandwidth;                             //@synthesize estimatedBandwidth=_estimatedBandwidth - In the implementation block
@property (assign,nonatomic) double estimatedBandwidthUncapped;                     //@synthesize estimatedBandwidthUncapped=_estimatedBandwidthUncapped - In the implementation block
@property (assign,nonatomic) unsigned radioAccessTechnology;                        //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mode;                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) int bandwidthEstimationState; 
@property (assign,nonatomic) BOOL fastSuddenBandwidthDetectionEnabled;              //@synthesize fastSuddenBandwidthDetectionEnabled=_fastSuddenBandwidthDetectionEnabled - In the implementation block
@property (nonatomic,retain) VCRateControlServerBag * serverBag;                    //@synthesize serverBag=_serverBag - In the implementation block
-(unsigned)mode;
-(id)init;
-(void)setRadioAccessTechnology:(unsigned)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(void)setServerBag:(VCRateControlServerBag *)arg1 ;
-(unsigned)radioAccessTechnology;
-(VCRateControlServerBag *)serverBag;
-(void)dealloc;
-(void)enableBWELogDump:(void*)arg1 ;
-(void)setFastSuddenBandwidthDetectionEnabled:(BOOL)arg1 ;
-(void)setEstimatedBandwidth:(double)arg1 ;
-(double)estimatedBandwidth;
-(int)bandwidthEstimationState;
-(double)estimatedBandwidthUncapped;
-(id)bandwidthEstimatorWithID:(unsigned)arg1 isProbingSequence:(BOOL)arg2 isEndOfProbingSequence:(BOOL)arg3 ;
-(void)deregisterBandwidthEstimatorWithID:(unsigned)arg1 ;
-(BOOL)fastSuddenBandwidthDetectionEnabled;
-(void)setEstimatedBandwidthUncapped:(double)arg1 ;
@end

