/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSMutableDictionary;

@interface VCRateControlBandwidthEstimatorMap : NSObject {

	unsigned _mode;
	unsigned _radioAccessTechnology;
	double _estimatedBandwidth;
	double _estimatedBandwidthUncapped;
	NSMutableDictionary* _estimatorMap;
	unsigned _currentActiveEstimatorID;
	int _state;

}

@property (assign,nonatomic) double estimatedBandwidth;                      //@synthesize estimatedBandwidth=_estimatedBandwidth - In the implementation block
@property (assign,nonatomic) double estimatedBandwidthUncapped;              //@synthesize estimatedBandwidthUncapped=_estimatedBandwidthUncapped - In the implementation block
@property (assign,nonatomic) unsigned radioAccessTechnology;                 //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mode;                                  //@synthesize mode=_mode - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(unsigned)radioAccessTechnology;
-(void)setRadioAccessTechnology:(unsigned)arg1 ;
-(void)setEstimatedBandwidth:(double)arg1 ;
-(double)estimatedBandwidth;
-(double)estimatedBandwidthUncapped;
-(id)bandwidthEstimatorWithID:(unsigned)arg1 isProbingSequence:(BOOL)arg2 isEndOfProbingSequence:(BOOL)arg3 ;
-(void)deregisterBandwidthEstimatorWithID:(unsigned)arg1 ;
-(void)setEstimatedBandwidthUncapped:(double)arg1 ;
@end

