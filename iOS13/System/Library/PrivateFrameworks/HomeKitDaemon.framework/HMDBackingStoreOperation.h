/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)main;
-(HMDBackingStore *)store;
-(void)setStore:(HMDBackingStore *)arg1 ;
-(id)initWithResultBlock:(/*^block*/id)arg1 ;
-(id)resultBlock;
-(void)setResultBlock:(id)arg1 ;
-(NSUUID *)operationUUID;
-(id)mainReturningError;
@end

