/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)numberOfItemsToElect;
-(id)initWithCluster:(id)arg1 numberOfItemsToElect:(unsigned long long)arg2 ;
@end

