/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject {

	HMDHomeManager* _homeManager;

}

@property (__weak,readonly) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
-(id)initWithHomeManager:(id)arg1 ;
-(HMDHomeManager *)homeManager;
-(BOOL)isKeychainSyncEnabled;
-(BOOL)supportsKeyTransferServer;
-(id)keyTransferAgent;
-(BOOL)isControllerKeyAvailable;
-(unsigned long long)dataMigrationOptions;
-(id)queryDatabaseOperationWithBlock:(/*^block*/id)arg1 ;
@end

