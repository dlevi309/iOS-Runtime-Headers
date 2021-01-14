/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clusterEvents:(id)arg1 ;
-(id)initWithClusteringParameters:(id)arg1 ;
-(void)naiveClusterEvents:(id)arg1 ;
-(void)dbScanClusterEvents:(id)arg1 ;
-(id)_dbScanClusterEvents:(id)arg1 ;
-(id)_populateSessionsWithClusters:(id)arg1 ;
-(CLSNowPlayingStreamEventClusteringParameters *)clusteringParameters;
@end

