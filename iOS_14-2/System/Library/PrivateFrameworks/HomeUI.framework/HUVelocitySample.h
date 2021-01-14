/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)end;
-(CGVector)velocity;
-(CGPoint)start;
-(void)setStartTime:(double)arg1 ;
-(void)setEnd:(CGPoint)arg1 ;
-(CGVector)translation;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(double)dt;
-(double)startTime;
-(void)setStart:(CGPoint)arg1 ;
-(BOOL)isSampleDistinctFromPoint:(CGPoint)arg1 ;
@end

