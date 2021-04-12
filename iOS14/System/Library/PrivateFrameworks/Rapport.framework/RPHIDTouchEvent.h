/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)finger;
-(void)setLocation:(CGPoint)arg1 ;
-(int)phase;
-(void)setPhase:(int)arg1 ;
-(void)setFinger:(int)arg1 ;
-(double)timestampSeconds;
-(void)setTimestampSeconds:(double)arg1 ;
@end

