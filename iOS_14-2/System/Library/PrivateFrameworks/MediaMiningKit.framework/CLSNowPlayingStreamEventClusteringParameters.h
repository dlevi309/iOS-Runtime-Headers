/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@interface CLSNowPlayingStreamEventClusteringParameters : NSObject {

	double _minimumClusteringTimeInSeconds;
	unsigned long long _algorithm;

}

@property (assign,nonatomic) double minimumClusterTimeInSeconds;              //@synthesize minimumClusteringTimeInSeconds=_minimumClusteringTimeInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long algorithm;                    //@synthesize algorithm=_algorithm - In the implementation block
-(unsigned long long)algorithm;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(id)init;
-(double)minimumClusterTimeInSeconds;
-(void)setMinimumClusterTimeInSeconds:(double)arg1 ;
@end

