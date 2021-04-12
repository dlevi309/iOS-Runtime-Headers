/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDBezierSegment : NSObject {

	CGPoint mA;
	CGPoint mOut;
	CGPoint mIn;
	CGPoint mB;

}

@property (nonatomic,readonly) CGPoint fromPoint; 
@property (nonatomic,readonly) CGPoint outPoint; 
@property (nonatomic,readonly) CGPoint inPoint; 
@property (nonatomic,readonly) CGPoint toPoint; 
@property (nonatomic,readonly) BOOL bogusSegment; 
+(id)segmentFromPoint:(CGPoint)arg1 outPoint:(CGPoint)arg2 inPoint:(CGPoint)arg3 toPoint:(CGPoint)arg4 ;
-(id)description;
-(CGPoint)toPoint;
-(id)initFromPoint:(CGPoint)arg1 outPoint:(CGPoint)arg2 inPoint:(CGPoint)arg3 toPoint:(CGPoint)arg4 ;
-(double)parametricValueForPoint:(CGPoint)arg1 ;
-(CGPoint)pointAtParametricValue:(double)arg1 ;
-(BOOL)bogusSegment;
-(CGPoint)fromPoint;
-(CGPoint)inPoint;
-(CGPoint)outPoint;
-(void)splitAtParametricValue:(double)arg1 left:(id*)arg2 right:(id*)arg3 ;
-(CGPoint)closestPointToPoint:(CGPoint)arg1 ;
@end

