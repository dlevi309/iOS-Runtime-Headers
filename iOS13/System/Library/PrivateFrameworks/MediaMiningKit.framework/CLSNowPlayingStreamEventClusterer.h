/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSArray, CLSNowPlayingStreamEventClusteringParameters;

@interface CLSNowPlayingStreamEventClusterer : NSObject {

	NSArray* _sessions;
	CLSNowPlayingStreamEventClusteringParameters* _clusteringParameters;

}

@property (nonatomic,readonly) CLSNowPlayingStreamEventClusteringParameters * clusteringParameters;              //@synthesize clusteringParameters=_clusteringParameters - In the implementation block
@property (nonatomic,readonly) NSArray * sessions;                                                               //@synthesize sessions=_sessions - In the implementation block
-(id)init;
-(NSArray *)sessions;
-(id)initWithClusteringParameters:(id)arg1 ;
-(void)clusterEvents:(id)arg1 ;
-(void)naiveClusterEvents:(id)arg1 ;
-(void)dbScanClusterEvents:(id)arg1 ;
-(id)_dbScanClusterEvents:(id)arg1 ;
-(id)_populateSessionsWithClusters:(id)arg1 ;
-(CLSNowPlayingStreamEventClusteringParameters *)clusteringParameters;
@end

