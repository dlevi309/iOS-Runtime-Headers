/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@interface PKClusteringUtility : NSObject
+(id)_geometricBasedStrokeClusteringFromPoint:(CGPoint)arg1 visibleStrokes:(id)arg2 selectionType:(long long)arg3 inputType:(long long)arg4 ;
+(void)_fetchIntersectedStrokesForGeometricBasedStrokeClusteringBetweenPoint:(CGPoint)arg1 otherPoint:(CGPoint)arg2 visibleStrokes:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)horizontalDistanceBetweenStrokes:(id)arg1 lineHeight:(double)arg2 ;
+(id)kMeansCluster:(int)arg1 values:(id)arg2 clusterError:(double)arg3 maxIterations:(int)arg4 ;
+(double)arrayAverage:(id)arg1 ;
+(id)_clusteredStrokesWithInitialStrokes:(id)arg1 selectionType:(long long)arg2 visibleStrokes:(id)arg3 approximateLineHeight:(double)arg4 approximateLineCenter:(double)arg5 ;
+(double)estimatedWordDistanceForStrokes:(id)arg1 lineHeight:(double)arg2 ;
+(CGRect)constrainRect:(CGRect)arg1 ;
@end

