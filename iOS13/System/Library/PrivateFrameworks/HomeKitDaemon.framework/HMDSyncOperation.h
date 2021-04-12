/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, HMFTimer, HMDSyncOperationOptions, NSString;

@interface HMDSyncOperation : HMFObject {

	NSUUID* _identifier;
	unsigned long long _operationType;
	HMFTimer* _delayTimer;
	/*^block*/id _operationBlock;
	HMDSyncOperationOptions* _options;

}

@property (nonatomic,readonly) NSUUID * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * zoneName; 
@property (nonatomic,readonly) unsigned long long operationType;               //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,retain) HMFTimer * delayTimer;                            //@synthesize delayTimer=_delayTimer - In the implementation block
@property (nonatomic,copy) id operationBlock;                                  //@synthesize operationBlock=_operationBlock - In the implementation block
@property (nonatomic,readonly) HMDSyncOperationOptions * options;              //@synthesize options=_options - In the implementation block
+(id)queryDatabaseOperationWithBlock:(/*^block*/id)arg1 ;
+(id)cancelOperationWithBlock:(/*^block*/id)arg1 ;
+(id)cloudPushSyncOperationWithBlock:(/*^block*/id)arg1 ;
+(id)cloudForcePushSyncOperationWithBlock:(/*^block*/id)arg1 ;
+(id)cloudVerifyAccountSyncOperationWithBlock:(/*^block*/id)arg1 ;
+(id)cloudFetchSyncOperationWithCloudConflict:(BOOL)arg1 block:(/*^block*/id)arg2 ;
+(id)cloudZonePushSyncOperation:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(id)description;
-(HMDSyncOperationOptions *)options;
-(NSUUID *)identifier;
-(unsigned long long)operationType;
-(NSString *)zoneName;
-(HMFTimer *)delayTimer;
-(void)setDelayTimer:(HMFTimer *)arg1 ;
-(id)operationBlock;
-(void)setOperationBlock:(id)arg1 ;
-(id)_initWithOperationType:(unsigned long long)arg1 options:(id)arg2 syncBlock:(/*^block*/id)arg3 ;
@end

