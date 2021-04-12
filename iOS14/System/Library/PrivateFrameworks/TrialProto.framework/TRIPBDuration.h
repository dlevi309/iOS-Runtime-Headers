/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@interface TRIPBDuration : TRIPBMessage

@property (assign,nonatomic) double timeInterval; 
@property (assign,nonatomic) double timeIntervalSince1970; 
@property (assign,nonatomic) long long seconds; 
@property (assign,nonatomic) int nanos; 
+(id)descriptor;
-(id)initWithTimeIntervalSince1970:(double)arg1 ;
-(void)setTimeInterval:(double)arg1 ;
-(double)timeInterval;
-(double)timeIntervalSince1970;
-(void)setTimeIntervalSince1970:(double)arg1 ;
-(id)initWithTimeInterval:(double)arg1 ;
@end

