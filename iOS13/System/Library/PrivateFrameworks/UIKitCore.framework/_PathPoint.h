/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _PathPoint : NSObject {

	BOOL _sentinelPoint;
	double _force;
	double _relativeTime;
	double _absoluteTime;
	double _decay;
	double _length;
	CGPoint _point;

}

@property (assign,getter=isSentinelPoint,nonatomic) BOOL sentinelPoint;              //@synthesize sentinelPoint=_sentinelPoint - In the implementation block
@property (assign,nonatomic) CGPoint point;                                          //@synthesize point=_point - In the implementation block
@property (assign,nonatomic) double force;                                           //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) double relativeTime;                                    //@synthesize relativeTime=_relativeTime - In the implementation block
@property (assign,nonatomic) double absoluteTime;                                    //@synthesize absoluteTime=_absoluteTime - In the implementation block
@property (assign,nonatomic) double decay;                                           //@synthesize decay=_decay - In the implementation block
@property (assign,nonatomic) double length;                                          //@synthesize length=_length - In the implementation block
-(double)length;
-(id)description;
-(void)setLength:(double)arg1 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(double)decay;
-(void)setDecay:(double)arg1 ;
-(double)force;
-(void)setForce:(double)arg1 ;
-(double)absoluteTime;
-(void)setRelativeTime:(double)arg1 ;
-(void)setAbsoluteTime:(double)arg1 ;
-(void)setSentinelPoint:(BOOL)arg1 ;
-(BOOL)isSentinelPoint;
-(double)relativeTime;
@end

