/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface VNMPImageGrouping : NSObject
+(long long)computeHierarchicalClusteringOfImageDescriptors:(id)arg1 results:(MPClusteringTreeNode*)arg2 context:(id)arg3 ;
+(float)getDistanceForClusterNode:(MPClusteringTreeNode*)arg1 splitDistanceType:(int)arg2 ;
+(vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *> >*)computeClusteringIntoKGroups:(int)arg1 orUsingDistanceThreshold:(float)arg2 forHierarchicalTree:(MPClusteringTreeNode*)arg3 context:(id)arg4 ;
+(vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *> >*)computeClusteringIntoKGroups:(int)arg1 forHierarchicalTree:(MPClusteringTreeNode*)arg2 context:(id)arg3 ;
+(vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *> >*)computeClusteringUsingDistanceThreshold:(float)arg1 forHierarchicalTree:(MPClusteringTreeNode*)arg2 context:(id)arg3 ;
+(vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *> >*)computeNaturalClusteringForHierarchicalTree:(MPClusteringTreeNode*)arg1 context:(id)arg2 ;
+(float)computeTimestampAdjustedDistanceForBaseDistance:(float)arg1 andTimestampDiff:(long long)arg2 ;
+(float)computeTotalDistanceForDescriptorDistance:(float)arg1 timestampDiff:(long long)arg2 useTimestampAdjustment:(BOOL)arg3 ;
@end

