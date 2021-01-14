/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


@protocol HMISystemResourceUsageMonitorProtocol
@property (__weak) id<HMISystemResourceUsageMonitorDelegate> delegate; 
@required
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)start;
-(void)setDelegate:(id)arg1;
-(id)getCurrentSystemResourceUsage;

@end

