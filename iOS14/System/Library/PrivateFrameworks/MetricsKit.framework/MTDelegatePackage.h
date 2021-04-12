/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

