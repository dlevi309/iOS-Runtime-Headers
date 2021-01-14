/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, HMFTimer, HMDSyncOperationOptions, NSString;

@interface HMDSyncOperation : HMFObject {

	NSUUID* _identifier;
	HMFTimer* _delayTimer;
	/*^block*/id _operationBlock;
	HMDSyncOperationOptions* _options;

}

@property (nonatomic,readonly) NSUUID * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * zoneName; 
@property (nonatomic,readonly) unsigned long long operationType; 
@property (nonatomic,retain) HMFTimer * delayTimer;                            //@synthesize delayTimer=_delayTimer - In the implementation block
@property (nonatomic,copy) id operationBlock;                                  //@synthesize operationBlock=_operationBlock - In the implementation block
@property (nonatomic,readonly) HMDSyncOperationOptions * options;              //@synthesize options=_options - In the implementation block
+(id)queryDatabaseOperationWithBlock:(/*^block*/id)arg1 ;
+(id)cancelOperationWithBlock:(/*^block*/id)arg1 ;
+(id)postFetchOperationWithBlock:(/*^block*/id)arg1 ;
+(id)cloudPushSyncOperationWithBlock:(/*^block*/id)arg1 ;
+(id)cloudForcePushSyncOperationWithBlock:(/*^block*/id)arg1 ;
+(id)cloudVerifyAccountSyncOperationWithBlock:(/*^block*/id)arg1 ;
+(id)cloudFetchSyncOperationWithCloudConflict:(BOOL)arg1 block:(/*^block*/id)arg2 ;
+(id)cloudZonePushSyncOperation:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(BOOL)arg2 block:(/*^block*/id)arg3 ;
+(id)cloudOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned long long)operationType;
-(NSString *)zoneName;
-(HMDSyncOperationOptions *)options;
-(id)description;
-(void)setDelayTimer:(HMFTimer *)arg1 ;
-(id)operationBlock;
-(void)setOperationBlock:(id)arg1 ;
-(NSUUID *)identifier;
-(HMFTimer *)delayTimer;
-(id)_initWithOptions:(id)arg1 syncBlock:(/*^block*/id)arg2 ;
@end

