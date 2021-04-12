/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
*/


@interface CCSUsageMetrics : NSObject

@property (nonatomic,readonly) unsigned long long userInvocationCount; 
+(id)sharedInstance;
-(void)incrementUserInvocationCount;
-(unsigned long long)userInvocationCount;
@end

