/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDDatabaseDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMBCloudDatabase, NSString;

@interface HMDCameraClipsQuotaManager : NSObject <HMDDatabaseDelegate, HMFLogging> {

	HMBCloudDatabase* _cloudDatabase;

}

@property (readonly) HMBCloudDatabase * cloudDatabase;              //@synthesize cloudDatabase=_cloudDatabase - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)defaultManager;
+(id)_quotaErrorFromServerError:(id)arg1 ;
+(id)_quotaServerErrorFromServerError:(id)arg1 ;
-(id)logIdentifier;
-(id)initWithDatabase:(id)arg1 ;
-(HMBCloudDatabase *)cloudDatabase;
-(id)database:(id)arg1 willRemoveZoneWithName:(id)arg2 isPrivate:(BOOL)arg3 ;
-(id)_addCodeOperationWithFunctionName:(id)arg1 request:(id)arg2 responseClass:(Class)arg3 ;
-(id)disableCloudStorageForZoneWithName:(id)arg1 ;
-(id)enableCloudStorageForZoneWithName:(id)arg1 ;
@end

