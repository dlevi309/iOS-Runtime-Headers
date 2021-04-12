/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class PLDataCluster;

@interface CLSSummaryClusteringItem : NSObject {

	PLDataCluster* _cluster;
	unsigned long long _numberOfItemsToElect;

}

@property (readonly) PLDataCluster * cluster;                              //@synthesize cluster=_cluster - In the implementation block
@property (readonly) unsigned long long numberOfItemsToElect;              //@synthesize numberOfItemsToElect=_numberOfItemsToElect - In the implementation block
-(PLDataCluster *)cluster;
-(id)initWithCluster:(id)arg1 numberOfItemsToElect:(unsigned long long)arg2 ;
-(unsigned long long)numberOfItemsToElect;
@end

