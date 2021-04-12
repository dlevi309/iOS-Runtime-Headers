/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <Foundation/NSOperation.h>

@class NSUUID, HMDBackingStore;

@interface HMDBackingStoreOperation : NSOperation {

	/*^block*/id _resultBlock;
	NSUUID* _operationUUID;
	HMDBackingStore* _store;

}

@property (nonatomic,retain) HMDBackingStore * store;               //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) id resultBlock;                          //@synthesize resultBlock=_resultBlock - In the implementation block
@property (nonatomic,readonly) NSUUID * operationUUID;              //@synthesize operationUUID=_operationUUID - In the implementation block
-(void)setStore:(HMDBackingStore *)arg1 ;
-(id)init;
-(HMDBackingStore *)store;
-(id)resultBlock;
-(id)description;
-(void)main;
-(id)initWithResultBlock:(/*^block*/id)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(NSUUID *)operationUUID;
-(id)mainReturningError;
@end

