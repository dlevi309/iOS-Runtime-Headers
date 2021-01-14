/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTrafficDevice/ATDeviceSyncSessionTask.h>

@protocol ATSyncClient;
@class ATDeviceSettings, NSMutableArray;

@interface ATDeviceSyncSessionSyncTask : ATDeviceSyncSessionTask {

	id<ATSyncClient> _pluginClient;
	ATDeviceSettings* _settings;
	NSMutableArray* _streamReaders;
	BOOL _addedTransportUpgradeException;
	double _taskStartTime;
	unsigned long long _syncIterationCount;
	unsigned long long _totalItemsSyncedCount;
	unsigned long long _clientCurrentItemCount;
	unsigned long long _clientTotalItemCount;
	unsigned long long _serverCurrentItemCount;
	unsigned long long _serverTotalItemCount;
	BOOL _startAssetTaskWhenFinished;

}

@property (assign,nonatomic) BOOL startAssetTaskWhenFinished;              //@synthesize startAssetTaskWhenFinished=_startAssetTaskWhenFinished - In the implementation block
-(void)start;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(id)sessionGroupingKey;
-(void)cancel;
-(id)initWithDataClass:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_finishTaskWithError:(id)arg1 ;
-(void)_sendSyncRequestOnMessageLink:(id)arg1 ;
-(void)_finishSyncWithError:(id)arg1 ;
-(void)_processSyncRequest:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_updateProgressWithCount:(unsigned long long)arg1 totalItemCount:(unsigned long long)arg2 forEndpointType:(int)arg3 ;
-(void)setStartAssetTaskWhenFinished:(BOOL)arg1 ;
-(BOOL)startAssetTaskWhenFinished;
-(void)_sendSyncRequestWithChangesAfterRevision:(unsigned long long)arg1 toRevision:(unsigned long long)arg2 withNewRevision:(unsigned long long)arg3 withSyncType:(unsigned)arg4 onMessageLink:(id)arg5 ;
-(void)_resetSyncDataForLibrary:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_sendSyncRequestWithParams:(id)arg1 withSyncType:(unsigned)arg2 syncState:(id)arg3 newRevision:(unsigned long long)arg4 versionToken:(id)arg5 inputStream:(id)arg6 onMessageLink:(id)arg7 ;
-(void)_processSyncResponse:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_drainInputStream:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_applyChangesForSyncResponse:(id)arg1 toCurrentRevision:(unsigned long long)arg2 versionToken:(id)arg3 onMessageLink:(id)arg4 ;
-(void)_sendSyncResponseToRequest:(id)arg1 withChangesAfterRevision:(unsigned long long)arg2 toRevision:(unsigned long long)arg3 withNewRevision:(unsigned long long)arg4 withSyncType:(unsigned)arg5 onMessageLink:(id)arg6 ;
-(void)_sendSyncResponseToRequest:(id)arg1 withParams:(id)arg2 withNewRevision:(unsigned long long)arg3 withSyncType:(unsigned)arg4 inputStream:(id)arg5 onMessageLink:(id)arg6 ;
@end

