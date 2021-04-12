/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long activityType; 
@property (nonatomic,readonly) HKQuantity * speed; 
+(BOOL)_isSupportedActivityType:(long long)arg1 ;
-(void)stop;
-(void)start;
-(long long)activityType;
-(HKQuantity *)speed;
-(id)_generateSamplesForPeriodIncludeLessFrequentSamples:(BOOL)arg1 ;
-(void)demoDataModule:(id)arg1 didProduceDataObject:(id)arg2 ;
-(id)initWithActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(/*^block*/id)arg3 ;
-(void)generateDataForMinutes:(double)arg1 completion:(/*^block*/id)arg2 ;
@end

