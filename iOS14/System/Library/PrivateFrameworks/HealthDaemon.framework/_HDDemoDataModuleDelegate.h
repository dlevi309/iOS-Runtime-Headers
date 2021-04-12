/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

