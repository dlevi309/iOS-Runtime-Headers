/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


@class NSString, NSUUID, BlastDoorMetadata_StorageContext;

@interface BlastDoorMetadata : NSObject {


}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSUUID * messageGUID; 
@property (readonly,nonatomic) BOOL has_timestamp; 
@property (readonly,nonatomic) unsigned long long timestamp; 
@property (readonly,nonatomic) BOOL wantsDeliveryReceipt; 
@property (readonly,nonatomic) BOOL wantsCheckpointing; 
@property (readonly,nonatomic) BlastDoorMetadata_StorageContext * storageContext; 
-(id)init;
-(NSUUID *)messageGUID;
-(unsigned long long)timestamp;
-(NSString *)description;
-(BOOL)has_timestamp;
-(BOOL)wantsDeliveryReceipt;
-(BOOL)wantsCheckpointing;
-(BlastDoorMetadata_StorageContext *)storageContext;
@end

