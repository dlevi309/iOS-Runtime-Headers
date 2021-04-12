/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKProxyProvider.h>

@class NSString;

@interface HKPluginProxyProvider : HKProxyProvider

@property (nonatomic,readonly) NSString * pluginIdentifier; 
-(void)fetchProxyServiceEndpointForIdentifier:(id)arg1 healthStore:(id)arg2 endpointHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)fetchPluginProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(NSString *)pluginIdentifier;
-(id)initWithHealthStore:(id)arg1 pluginIdentifier:(id)arg2 exportedObject:(id)arg3 ;
@end

