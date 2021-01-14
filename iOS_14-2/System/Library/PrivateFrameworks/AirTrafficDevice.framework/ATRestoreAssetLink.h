/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <libobjc.A.dylib/MBManagerDelegate.h>
#import <libobjc.A.dylib/ATEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol OS_dispatch_queue, ATAssetLinkDelegate, ATRestoreAssetLinkDelegate;
@class MBManager, NSMutableArray, NSObject, NSArray, NSString;

@interface ATRestoreAssetLink : NSObject <MBManagerDelegate, ATEnvironmentMonitorObserver, ATAssetLink> {

	MBManager* _mbManager;
	NSMutableArray* _queuedAssets;
	NSMutableArray* _activeAssets;
	int _restoreState;
	BOOL _isRestoring;
	BOOL _batchingIsSupported;
	BOOL _singleAssetMode;
	unsigned long long _batchSize;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _open;
	id<ATAssetLinkDelegate> _delegate;
	NSArray* _allowedDataClasses;
	id<ATRestoreAssetLinkDelegate> _restoreDelegate;

}

@property (nonatomic,copy) NSArray * allowedDataClasses;                                         //@synthesize allowedDataClasses=_allowedDataClasses - In the implementation block
@property (assign,nonatomic,__weak) id<ATRestoreAssetLinkDelegate> restoreDelegate;              //@synthesize restoreDelegate=_restoreDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                                          //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
-(void)finishRestore;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(BOOL)open;
-(id)init;
-(id<ATAssetLinkDelegate>)delegate;
-(BOOL)isOpen;
-(void)close;
-(void)cancelAssets:(id)arg1 ;
-(void)managerDidFinishRestore:(id)arg1 ;
-(void)setRestoreDelegate:(id<ATRestoreAssetLinkDelegate>)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(BOOL)_hasConnectivity;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(void)manager:(id)arg1 didFailRestoreWithError:(id)arg2 ;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 ;
-(void)_processQueuedAssets;
-(void)managerDidCancelRestore:(id)arg1 ;
-(id<ATRestoreAssetLinkDelegate>)restoreDelegate;
-(void)processRestoreFailureForAsset:(id)arg1 ;
-(NSArray *)allowedDataClasses;
-(unsigned long long)maximumBatchSize;
-(void)restoreSessionActiveWithCompletion:(/*^block*/id)arg1 ;
-(void)setAllowedDataClasses:(NSArray *)arg1 ;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(unsigned long long)priority;
-(BOOL)linkIsReady;
-(void)managerDidLoseConnectionToService:(id)arg1 ;
@end

