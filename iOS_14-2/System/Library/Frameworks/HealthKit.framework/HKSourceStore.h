/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKSourceStoreClient.h>

@class HKProxyProvider, NSString;

@interface HKSourceStore : NSObject <_HKXPCExportable, HKSourceStoreClient> {

	HKProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)fetchHasSampleWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllSourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchOrderedSourcesForObjectType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

