/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLength:(double)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)endPoint;
-(void)setPoints:(CGPoint*)arg1 ;
-(double)length;
-(void)setType:(int)arg1 ;
-(void)setPointCount:(unsigned long long)arg1 ;
-(int)type;
-(CGPoint*)points;
-(unsigned long long)pointCount;
-(void)dealloc;
-(id)initWithStartPoint:(CGPoint)arg1 pathElement:(const CGPathElement*)arg2 ;
-(unsigned long long)numberOfPointsForCGPathElementType:(int)arg1 ;
-(double)computeLength;
-(CGPoint)pointOnPathForX:(double)arg1 ;
@end

