/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@interface HUVelocitySample : NSObject {

	double _startTime;
	double _endTime;
	CGPoint _start;
	CGPoint _end;

}

@property (assign,nonatomic) CGPoint start;                       //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) CGPoint end;                         //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) double startTime;                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                      //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) CGVector translation; 
@property (nonatomic,readonly) double dt; 
@property (nonatomic,readonly) CGVector velocity; 
+(id)sampleWithStart:(CGPoint)arg1 end:(CGPoint)arg2 startTime:(double)arg3 endTime:(double)arg4 ;
-(CGPoint)start;
-(CGPoint)end;
-(CGVector)velocity;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(CGVector)translation;
-(void)setStart:(CGPoint)arg1 ;
-(void)setEnd:(CGPoint)arg1 ;
-(double)dt;
-(BOOL)isSampleDistinctFromPoint:(CGPoint)arg1 ;
@end

