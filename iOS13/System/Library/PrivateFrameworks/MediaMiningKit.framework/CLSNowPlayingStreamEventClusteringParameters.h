/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@interface CLSNowPlayingStreamEventClusteringParameters : NSObject {

	double _minimumClusteringTimeInSeconds;
	unsigned long long _algorithm;

}

@property (assign,nonatomic) double minimumClusterTimeInSeconds;              //@synthesize minimumClusteringTimeInSeconds=_minimumClusteringTimeInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long algorithm;                    //@synthesize algorithm=_algorithm - In the implementation block
-(id)init;
-(unsigned long long)algorithm;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(double)minimumClusterTimeInSeconds;
-(void)setMinimumClusterTimeInSeconds:(double)arg1 ;
@end

