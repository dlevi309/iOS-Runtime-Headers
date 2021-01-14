/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/

#import <ScoreBoard/SCRSchedulingConfiguration.h>

@class NSDate;

@interface SCRMutableSchedulingConfiguration : SCRSchedulingConfiguration

@property (nonatomic,retain) NSDate * latestStartDate; 
@property (nonatomic,copy) NSDate * earliestStartDate; 
@property (assign,nonatomic) double schedulingWindow; 
@property (assign,nonatomic) BOOL wakeDeviceForDeadline; 
@property (assign,nonatomic) BOOL requiresClassAAccess; 
@property (assign,nonatomic) BOOL requiresNetworkAccess; 
-(void)setLatestStartDate:(NSDate *)arg1 ;
@end

