/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@interface _CACGesturePathPoint : NSObject {

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
-(void)setLength:(double)arg1 ;
-(double)force;
-(double)decay;
-(CGPoint)point;
-(double)length;
-(double)absoluteTime;
-(void)setForce:(double)arg1 ;
-(id)description;
-(void)setDecay:(double)arg1 ;
-(void)setRelativeTime:(double)arg1 ;
-(BOOL)isSentinelPoint;
-(void)setAbsoluteTime:(double)arg1 ;
-(void)setSentinelPoint:(BOOL)arg1 ;
-(void)setPoint:(CGPoint)arg1 ;
-(double)relativeTime;
@end

