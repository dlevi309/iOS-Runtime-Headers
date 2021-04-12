/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


@protocol HMISystemResourceUsageMonitorProtocol
@property (__weak) id<HMISystemResourceUsageMonitorDelegate> delegate; 
@required
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)start;
-(id)getCurrentSystemResourceUsage;

@end

