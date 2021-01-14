/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


#import <TVPlayback/TVPlayback-Structs.h>
@interface TVPTimeRange : NSObject {

	double _startTime;
	double _duration;

}

@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double endTime; 
+(SCD_Struct_TV2)forwardmostCMTimeRangeInCMTimeRanges:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)description;
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 ;
-(double)endTime;
-(double)duration;
-(double)startTime;
-(id)initWithStartTime:(double)arg1 duration:(double)arg2 ;
-(BOOL)containsTime:(double)arg1 ;
-(id)initWithCMTimeRange:(SCD_Struct_TV2)arg1 ;
-(id)intersectTimeRange:(id)arg1 ;
@end

