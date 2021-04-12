/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@interface PKPathUtility : NSObject
+(void)smoothedHullForPoints:(vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 completion:(/*^block*/id)arg2 ;
+(void)convexHull:(vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 forPoints:(vector<CGPoint, std::__1::allocator<CGPoint> >*)arg2 ;
+(void)openConvexHullToConcave:(vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 points:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg2 ;
+(id)catmullRomForHull:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 alpha:(double)arg2 ;
+(BOOL)vector:(const vector<(anonymous namespace)::Edge, std::__1::allocator<(anonymous namespace)::Edge> >*)arg1 containsEdge:(Edge)arg2 ;
+(Edge)longestEdgeInHull:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 atIndex:(int*)arg2 visitedEdges:(const vector<(anonymous namespace)::Edge, std::__1::allocator<(anonymous namespace)::Edge> >*)arg3 ;
+(double)averageDistanceForEdge:(Edge)arg1 withPoints:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg2 ;
+(CGPoint)pointWithMinAngleForEdge:(Edge)arg1 fromPoints:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg2 minAngle:(double*)arg3 ;
+(BOOL)vector:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 containsPoint:(CGPoint)arg2 ;
+(BOOL)newEdgeWithPoint:(CGPoint)arg1 betweenEdge:(Edge)arg2 intersectsOtherEdgesInHull:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg3 ;
+(BOOL)edge:(Edge)arg1 intersectsEdge:(Edge)arg2 ;
@end

