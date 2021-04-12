/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol SBFIdleTimerBehaviorProviding <NSObject>
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
@optional
-(double)customIdleExpirationTimeout;
-(double)customIdleWarningTimeout;

@required
-(long long)idleTimerMode;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;

@end

