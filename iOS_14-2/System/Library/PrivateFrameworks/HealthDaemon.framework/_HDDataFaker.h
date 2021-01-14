/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/_HDDemoDataModuleDelegate.h>

@class HKQuantity, NSOperationQueue, NSArray, NSString;

@interface _HDDataFaker : NSObject <_HDDemoDataModuleDelegate> {

	long long _activityType;
	HKQuantity* _speed;
	/*^block*/id _objectHandler;
	NSOperationQueue* _operationQueue;
	NSArray* _modules;

}

@property (nonatomic,readonly) long long activityType; 
@property (nonatomic,readonly) HKQuantity * speed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSupportedActivityType:(long long)arg1 ;
-(long long)activityType;
-(HKQuantity *)speed;
-(void)start;
-(void)stop;
-(id)_generateSamplesForPeriodIncludeLessFrequentSamples:(BOOL)arg1 ;
-(void)demoDataModule:(id)arg1 didProduceDataObject:(id)arg2 ;
-(id)initWithActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(/*^block*/id)arg3 ;
-(void)generateDataForMinutes:(double)arg1 completion:(/*^block*/id)arg2 ;
@end

