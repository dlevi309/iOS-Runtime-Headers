/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDPathIntersection : NSObject {

	long long mSegment;
	long long mSegmentB;
	double mT;
	double mTB;
	CGPoint mPoint;

}

@property (nonatomic,readonly) long long segment; 
@property (nonatomic,readonly) long long segmentB; 
@property (nonatomic,readonly) double t; 
@property (nonatomic,readonly) double tB; 
@property (assign,nonatomic) CGPoint point; 
-(id)description;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(long long)segment;
-(long long)compareSegmentAndT:(id)arg1 ;
-(double)t;
-(id)initWithSegment:(long long)arg1 atT:(double)arg2 onSegmentB:(long long)arg3 atT:(double)arg4 atPoint:(CGPoint)arg5 ;
-(long long)compareT:(id)arg1 ;
-(id)initWithSegment:(long long)arg1 atT:(double)arg2 atPoint:(CGPoint)arg3 ;
-(long long)segmentB;
-(double)tB;
@end

