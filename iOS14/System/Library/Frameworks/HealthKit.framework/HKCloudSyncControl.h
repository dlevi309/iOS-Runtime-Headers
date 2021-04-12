/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, NSString;

@interface HKCloudSyncControl : NSObject <_HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(void)accountConfigurationDidChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)forceCloudSyncWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)fetchCloudSyncRequiredWithCompletion:(/*^block*/id)arg1 ;
-(void)forceCloudSyncDataUploadForProfileWithCompletion:(/*^block*/id)arg1 ;
-(void)forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchCloudSyncStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCloudSyncProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceCloudSyncWithOptions:(unsigned long long)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)forceCloudResetWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCloudDescriptionWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableCloudSyncAndDeleteAllCloudDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableCloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)enableCloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)requestDataRefreshWithCompletion:(/*^block*/id)arg1 ;
-(void)oldestSampleStartDateInHealthDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(/*^block*/id)arg1 ;
@end

