/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDConnectionLineAbstractLayout.h>

@interface TSDConnectionLineOrthogonalLayout : TSDConnectionLineAbstractLayout
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(CGPoint)arg3 ;
-(CGPoint)controlPointForPointA:(CGPoint)arg1 pointB:(CGPoint)arg2 andOriginalA:(CGPoint)arg3 originalB:(CGPoint)arg4 ;
-(BOOL)canEndpointsCoincide;
-(CGRect)orthoRectOfLayout:(id)arg1 outset:(double)arg2 ;
-(CGPoint)axisSnapPoint:(CGPoint)arg1 toXs:(vector<double, std::__1::allocator<double> >*)arg2 toYs:(vector<double, std::__1::allocator<double> >*)arg3 withThreshold:(double)arg4 ;
-(void)addEndpointSnapsToXs:(vector<double, std::__1::allocator<double> >*)arg1 andYs:(vector<double, std::__1::allocator<double> >*)arg2 ;
@end

