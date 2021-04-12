/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@interface NTKBezierPathElement : NSObject {

	int _type;
	unsigned long long _pointCount;
	CGPoint* _points;
	double _length;

}

@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long pointCount;              //@synthesize pointCount=_pointCount - In the implementation block
@property (assign,nonatomic) CGPoint* points;                            //@synthesize points=_points - In the implementation block
@property (assign,nonatomic) double length;                              //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint; 
@property (nonatomic,readonly) CGPoint endPoint; 
-(void)dealloc;
-(double)length;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setLength:(double)arg1 ;
-(unsigned long long)pointCount;
-(CGPoint*)points;
-(void)setPoints:(CGPoint*)arg1 ;
-(CGPoint)startPoint;
-(void)setPointCount:(unsigned long long)arg1 ;
-(CGPoint)endPoint;
-(id)initWithStartPoint:(CGPoint)arg1 pathElement:(const CGPathElement*)arg2 ;
-(unsigned long long)numberOfPointsForCGPathElementType:(int)arg1 ;
-(double)computeLength;
-(CGPoint)pointOnPathForX:(double)arg1 ;
@end

