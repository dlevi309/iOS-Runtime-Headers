/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
*/


@interface CCSUsageMetrics : NSObject

@property (nonatomic,readonly) unsigned long long userInvocationCount; 
+(id)sharedInstance;
-(unsigned long long)userInvocationCount;
-(void)incrementUserInvocationCount;
@end

