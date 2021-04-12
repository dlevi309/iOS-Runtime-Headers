/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKProxyProvider.h>

@class NSString;

@interface HKPluginProxyProvider : HKProxyProvider

@property (nonatomic,readonly) NSString * pluginIdentifier; 
-(NSString *)pluginIdentifier;
-(void)fetchProxyServiceEndpointForIdentifier:(id)arg1 endpointHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)initWithHealthStore:(id)arg1 pluginIdentifier:(id)arg2 exportedObject:(id)arg3 ;
-(void)fetchPluginProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

