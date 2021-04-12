/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@interface GPBDuration : GPBMessage

@property (assign,nonatomic) double timeInterval; 
@property (assign,nonatomic) double timeIntervalSince1970; 
@property (assign,nonatomic) long long seconds; 
@property (assign,nonatomic) int nanos; 
+(id)descriptor;
-(double)timeIntervalSince1970;
-(double)timeInterval;
-(id)initWithTimeIntervalSince1970:(double)arg1 ;
-(void)setTimeInterval:(double)arg1 ;
-(id)initWithTimeInterval:(double)arg1 ;
-(void)setTimeIntervalSince1970:(double)arg1 ;
@end

