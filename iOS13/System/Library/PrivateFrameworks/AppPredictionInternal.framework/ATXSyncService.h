/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class SYService, ATXSyncDelegate;

@interface ATXSyncService : NSObject {

	SYService* _service;
	ATXSyncDelegate* _serviceDelegate;

}

@property (nonatomic,readonly) SYService * service;                            //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) ATXSyncDelegate * serviceDelegate;              //@synthesize serviceDelegate=_serviceDelegate - In the implementation block
+(id)sharedSyncService;
-(id)_init;
-(SYService *)service;
-(void)resumeSync;
-(void)sendData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)attemptSync;
-(void)handleResultsSyncData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(ATXSyncDelegate *)serviceDelegate;
@end

