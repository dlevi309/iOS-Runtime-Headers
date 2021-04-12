/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

@class HKQuantity;


@protocol _HDDemoDataModuleDelegate <NSObject>
@property (nonatomic,readonly) long long activityType; 
@property (nonatomic,readonly) HKQuantity * speed; 
@required
-(long long)activityType;
-(HKQuantity *)speed;
-(void)demoDataModule:(id)arg1 didProduceDataObject:(id)arg2;

@end

