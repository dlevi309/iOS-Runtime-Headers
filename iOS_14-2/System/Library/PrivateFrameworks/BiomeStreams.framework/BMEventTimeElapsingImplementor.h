/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMEventTimeElapsing.h>

@class NSDateInterval, NSString;

@interface BMEventTimeElapsingImplementor : BMEventBase <BMEventTimeElapsing> {

	double absoluteTimestamp;
	double duration;

}

@property (nonatomic,copy) NSDateInterval * dateInterval; 
@property (assign,nonatomic) double absoluteTimestamp; 
@property (assign,nonatomic) double duration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(BOOL)isValidWithContext:(id)arg1 error:(id*)arg2 ;
-(double)absoluteTimestamp;
-(BOOL)isCompleteWithContext:(id)arg1 error:(id*)arg2 ;
-(void)setAbsoluteTimestamp:(double)arg1 ;
-(double)duration;
@end

