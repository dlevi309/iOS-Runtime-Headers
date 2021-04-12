/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <libobjc.A.dylib/APMetricNotificationRegister.h>
#import <libobjc.A.dylib/APMetricReceiving.h>

@class NSMutableDictionary, NSLock, NSString;

@interface APMetricNotificationRegistrar : NSObject <APMetricNotificationRegister, APMetricReceiving> {

	NSMutableDictionary* _registryByRoute;
	NSMutableDictionary* _registryByClosure;
	NSLock* _registryLock;
	long long _registrationCounter;

}

@property (nonatomic,readonly) NSMutableDictionary * registryByRoute;                //@synthesize registryByRoute=_registryByRoute - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * registryByClosure;              //@synthesize registryByClosure=_registryByClosure - In the implementation block
@property (nonatomic,readonly) NSLock * registryLock;                                //@synthesize registryLock=_registryLock - In the implementation block
@property (nonatomic,readonly) long long registrationCounter;                        //@synthesize registrationCounter=_registrationCounter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSLock *)registryLock;
-(NSMutableDictionary *)registryByRoute;
-(long long)registerHandlerForRoute:(long long)arg1 andMetric:(long long)arg2 closure:(/*^block*/id)arg3 ;
-(id)_metricRegistryForRoute:(long long)arg1 andMetric:(long long)arg2 ;
-(NSMutableDictionary *)registryByClosure;
-(id)_closuresForRoute:(long long)arg1 andMetric:(long long)arg2 ;
-(long long)registerHandlerForRoute:(long long)arg1 closure:(/*^block*/id)arg2 ;
-(void)removeHandlerWithIdentifier:(long long)arg1 ;
-(void)receivedMetric:(id)arg1 ;
-(long long)registrationCounter;
@end

