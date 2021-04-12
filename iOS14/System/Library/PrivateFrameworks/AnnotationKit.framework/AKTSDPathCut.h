/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@interface AKTSDPathCut : NSObject {

	long long mSegment;
	double mT;
	double mSkew;

}

@property (nonatomic,readonly) long long segment; 
@property (nonatomic,readonly) double t; 
@property (nonatomic,readonly) double skew; 
-(double)t;
-(long long)segment;
-(double)skew;
-(id)description;
-(id)initWithSegment:(long long)arg1 atT:(double)arg2 withSkew:(double)arg3 ;
@end

