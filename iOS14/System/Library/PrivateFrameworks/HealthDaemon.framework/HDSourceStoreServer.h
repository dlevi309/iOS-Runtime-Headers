/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKSourceStoreServer.h>

@class NSString;

@interface HDSourceStoreServer : HDStandardTaskServer <HKSourceStoreServer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchAllSourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchHasSampleWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_deleteSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchOrderedSourcesForObjectType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

