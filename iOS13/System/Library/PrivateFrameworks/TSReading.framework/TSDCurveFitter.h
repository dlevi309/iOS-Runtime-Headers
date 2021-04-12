/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDCurveFitter : NSObject {

	double mErrorDistance;
	long long mErrorIterations;

}

@property (assign,nonatomic) double errorDistance; 
@property (assign,nonatomic) long long errorIterations; 
+(id)curveFitter;
-(id)init;
-(void)fitCurveToPoints:(id)arg1 bezierCallback:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(void)fitCurveToPointArray:(CGPoint*)arg1 count:(long long)arg2 bezierCallback:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(id)bezierPathFittingPoints:(id)arg1 ;
-(id)bezierPathFittingPointArray:(CGPoint*)arg1 count:(long long)arg2 ;
-(double)errorDistance;
-(void)setErrorDistance:(double)arg1 ;
-(long long)errorIterations;
-(void)setErrorIterations:(long long)arg1 ;
@end

