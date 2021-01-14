/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

@class HDSPEnvironment;


@protocol HDSPEnvironmentAware <NSObject>
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment; 
@optional
-(void)environmentDidBecomeReady:(id)arg1;
-(void)environmentWillBecomeReady:(id)arg1;
-(void)environmentWillInvalidate:(id)arg1;

@required
+(id)new;
-(id)init;
-(id)initWithEnvironment:(id)arg1;
-(HDSPEnvironment *)environment;

@end

