/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface VNBoundingCircleAlgorithm : NSObject
+(id)boundingCircleForPoints:(id)arg1 error:(id*)arg2 ;
+(id)boundingCircleForSIMDPoints:(const 1*)arg1 pointCount:(long long)arg2 aspectRatioForCentroid:(float)arg3 error:(id*)arg4 ;
+(id)_boundingCircleForPoints:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 aspectRatioForCentroid:(float)arg2 ;
+(void)_boundThreePoints:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 circleCenter:(CGPoint*)arg2 circleRadius:(double*)arg3 ;
+(void)_findBoundingCircle:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 count:(unsigned long long)arg2 circleCenter:(CGPoint*)arg3 circleRadius:(double*)arg4 ;
+(void)_boundingCircle:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 circleCenter:(CGPoint*)arg2 circleRadius:(double*)arg3 ;
+(vector<CGPoint, std::__1::allocator<CGPoint> >*)_randomizePointsIndexes:(id)arg1 ;
+(vector<CGPoint, std::__1::allocator<CGPoint> >*)_randomizePointsIndexes:(const 1*)arg1 pointCount:(long long)arg2 ;
+(double)epsilon;
@end

