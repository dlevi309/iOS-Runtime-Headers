/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSProgress;

@interface PXCPLSyncActivity : PXObservable {

	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned long long _syncProgressState;
	id _syncProgressSubscriber;
	NSProgress* _syncProgress;
	BOOL _isSyncing;

}

@property (nonatomic,readonly) BOOL isSyncing;              //@synthesize isSyncing=_isSyncing - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(id)description;
-(BOOL)isSyncing;
-(void)setIsSyncing:(BOOL)arg1 ;
-(void)_setSyncProgress:(id)arg1 ;
-(void)_setSyncProgressState:(unsigned long long)arg1 ;
-(void)_queue_subscribeToSyncProgress;
-(void)_unsubscribeFromSyncProgress;
-(void)_updateIsSyncing;
-(void)_updateSyncProgressState;
-(void)dealloc;
@end

