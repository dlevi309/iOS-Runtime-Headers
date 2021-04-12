/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


#import <Rapport/Rapport-Structs.h>
@interface RPHIDTouchEvent : NSObject {

	int _finger;
	int _phase;
	double _timestampSeconds;
	CGPoint _location;

}

@property (assign,nonatomic) int finger;                           //@synthesize finger=_finger - In the implementation block
@property (assign,nonatomic) CGPoint location;                     //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) int phase;                            //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) double timestampSeconds;              //@synthesize timestampSeconds=_timestampSeconds - In the implementation block
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(int)phase;
-(void)setPhase:(int)arg1 ;
-(void)setFinger:(int)arg1 ;
-(int)finger;
-(double)timestampSeconds;
-(void)setTimestampSeconds:(double)arg1 ;
@end

