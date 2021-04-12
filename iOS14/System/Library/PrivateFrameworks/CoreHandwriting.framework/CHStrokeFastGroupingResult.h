/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroupingResult.h>

@interface CHStrokeFastGroupingResult : CHStrokeGroupingResult {

	vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> >* _fastGroupingClusters;

}

@property (nonatomic,readonly) vector<CHFastGroupingCluster fastGroupingClusters;              //@synthesize fastGroupingClusters=_fastGroupingClusters - In the implementation block
+(id)_strokeGroupsFromFastGroupingClusters:(const vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> >*)arg1 clusteredStrokes:(id)arg2 strokeProvider:(id)arg3 strategyIdentifier:(id)arg4 clutterFilter:(id)arg5 ;
+(id)_strokeGroupFromSortedStrokeIdentifiers:(id)arg1 strokeProvider:(id)arg2 strategyIdentifier:(id)arg3 ;
+(id)_strokeGroupFromFastGroupingCluster:(const CHFastGroupingCluster*)arg1 strokeProvider:(id)arg2 strategyIdentifier:(id)arg3 ;
-(vector<CHFastGroupingCluster)fastGroupingClusters;
-(id)initWithFastGroupingClusters:(const vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> >*)arg1 clusteredStrokes:(id)arg2 strokeProvider:(id)arg3 strategyIdentifier:(id)arg4 clutterFilter:(id)arg5 ;
@end

