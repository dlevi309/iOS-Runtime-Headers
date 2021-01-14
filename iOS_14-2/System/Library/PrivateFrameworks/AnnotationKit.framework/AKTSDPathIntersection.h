/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKTSDPathIntersection : NSObject {

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
-(double)t;
-(double)tB;
-(CGPoint)point;
-(long long)segment;
-(id)description;
-(void)setPoint:(CGPoint)arg1 ;
-(long long)compareSegmentAndT:(id)arg1 ;
-(id)initWithSegment:(long long)arg1 atT:(double)arg2 onSegmentB:(long long)arg3 atT:(double)arg4 atPoint:(CGPoint)arg5 ;
-(long long)compareT:(id)arg1 ;
-(id)initWithSegment:(long long)arg1 atT:(double)arg2 atPoint:(CGPoint)arg3 ;
-(long long)segmentB;
@end

