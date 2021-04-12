/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface CannedAVSync : NSObject {

	double _base;
	double _modulo;

}

@property (assign,nonatomic) double base;                //@synthesize base=_base - In the implementation block
@property (assign,nonatomic) double modulo;              //@synthesize modulo=_modulo - In the implementation block
+(id)sharedCannedAVSync;
-(id)init;
-(void)clear;
-(void)setBase:(double)arg1 ;
-(double)base;
-(double)clampForTime:(double)arg1 ;
-(void)addDrift:(double)arg1 ;
-(void)addStreamWithCount:(int)arg1 rate:(double)arg2 ;
-(double)modulo;
-(void)setModulo:(double)arg1 ;
@end

