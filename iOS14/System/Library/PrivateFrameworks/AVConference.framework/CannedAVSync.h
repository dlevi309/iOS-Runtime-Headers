/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface CannedAVSync : NSObject {

	double _base;
	double _modulo;

}

@property (assign,nonatomic) double base;                //@synthesize base=_base - In the implementation block
@property (assign,nonatomic) double modulo;              //@synthesize modulo=_modulo - In the implementation block
+(id)sharedCannedAVSync;
-(void)clear;
-(double)base;
-(id)init;
-(void)setBase:(double)arg1 ;
-(double)modulo;
-(double)clampForTime:(double)arg1 ;
-(void)addDrift:(double)arg1 ;
-(void)addStreamWithCount:(int)arg1 rate:(double)arg2 ;
-(void)setModulo:(double)arg1 ;
@end

