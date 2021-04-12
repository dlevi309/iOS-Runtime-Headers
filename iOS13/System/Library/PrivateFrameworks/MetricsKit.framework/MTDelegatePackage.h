/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@protocol MTDelegatePackage <NSObject>
@property (nonatomic,readonly) id<MTConfigDelegate> configDelegate; 
@property (nonatomic,readonly) id<MTEventRecorderDelegate> eventRecorderDelegate; 
@property (nonatomic,readonly) id<MTEnvironmentDelegate> environmentDelegate; 
@required
-(id<MTConfigDelegate>)configDelegate;
-(id<MTEventRecorderDelegate>)eventRecorderDelegate;
-(id<MTEnvironmentDelegate>)environmentDelegate;

@end

