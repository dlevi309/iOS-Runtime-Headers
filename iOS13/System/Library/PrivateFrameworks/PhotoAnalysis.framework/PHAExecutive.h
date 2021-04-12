/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <libobjc.A.dylib/PHPhotoLibraryAvailabilityObserver.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol PFDTransactionDispatchQueue, OS_voucher, OS_xpc_object, OS_dispatch_source;
@class PFSerialQueue, NSObject, NSMutableArray, PHAActivityLog, NSMutableSet, NSMutableDictionary, PHAPhotoLibraryList, PHASleepWakeMonitor, NSString;

@interface PHAExecutive : NSObject <PHPhotoLibraryAvailabilityObserver, NSXPCListenerDelegate> {

	BOOL _isPhotoAnalysisAgent;
	BOOL _backgroundAnalysisActivityTriggered;
	PFSerialQueue*<PFDTransactionDispatchQueue> _executiveStateQueue;
	NSObject*<OS_voucher> _turboModeBoostVoucher;
	NSMutableArray* _processingLog;
	PHAActivityLog* _currentLog;
	NSMutableArray* _cachedTurboLibraryURLs;
	NSObject*<OS_xpc_object> _turboAnalysisActivity;
	os_unfair_lock_s _turboLibrariesLock;
	NSMutableSet* _pendingBackgroundLibraries;
	os_unfair_lock_s _connectedClientsLock;
	BOOL _shouldDeferActivity;
	unsigned char _state;
	PHAActivityLog* _activityLog;
	NSMutableSet* _clients;
	NSMutableDictionary* _managersByLibraryPath;
	PHAPhotoLibraryList* _photoLibraryList;
	PHASleepWakeMonitor* _sleepWakeMonitor;
	long long _countOfCoordinatorsRunningBackgroundAnalysis;
	NSObject*<OS_dispatch_source> _backgroundAnalysisMonitorTimer;
	NSObject*<OS_xpc_object> _backgroundAnalysisActivity;

}

@property (retain) NSMutableSet * clients;                                                    //@synthesize clients=_clients - In the implementation block
@property (retain) NSMutableDictionary * managersByLibraryPath;                               //@synthesize managersByLibraryPath=_managersByLibraryPath - In the implementation block
@property (assign) unsigned char state;                                                       //@synthesize state=_state - In the implementation block
@property (retain) PHAPhotoLibraryList * photoLibraryList;                                    //@synthesize photoLibraryList=_photoLibraryList - In the implementation block
@property (retain) PHASleepWakeMonitor * sleepWakeMonitor;                                    //@synthesize sleepWakeMonitor=_sleepWakeMonitor - In the implementation block
@property (assign) long long countOfCoordinatorsRunningBackgroundAnalysis;                    //@synthesize countOfCoordinatorsRunningBackgroundAnalysis=_countOfCoordinatorsRunningBackgroundAnalysis - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> backgroundAnalysisMonitorTimer;              //@synthesize backgroundAnalysisMonitorTimer=_backgroundAnalysisMonitorTimer - In the implementation block
@property (retain) NSObject*<OS_xpc_object> backgroundAnalysisActivity;                       //@synthesize backgroundAnalysisActivity=_backgroundAnalysisActivity - In the implementation block
@property (readonly) PHAActivityLog * activityLog;                                            //@synthesize activityLog=_activityLog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bootDateForTurboLibraryRegistration;
+(void)unregisterBackgroundActivities;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(unsigned char)state;
-(void)setState:(unsigned char)arg1 ;
-(NSMutableSet *)clients;
-(void)shutdown;
-(void)setClients:(NSMutableSet *)arg1 ;
-(void)notifyLibraryAvailableAtURL:(id)arg1 ;
-(void)writeQALog:(id)arg1 ;
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)photoLibraryDidBecomeUnavailable:(id)arg1 ;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(void)startup;
-(void)handleOperation:(id)arg1 ;
-(id)statusAsDictionary;
-(void)enableTurboModeForManager:(id)arg1 ;
-(BOOL)turboIsEnabledForManager:(id)arg1 ;
-(void)disableTurboModeForManager:(id)arg1 ;
-(BOOL)_photoAnalysisEnabled;
-(BOOL)_photoAnalysCoreDuetSchedulingDisabled;
-(void)_backgroundActivityDidBegin;
-(void)addProcessingActivityToStatusDictionary:(id)arg1 ;
-(void)dumpStatusToLog;
-(id)managerForPhotoLibraryURL:(id)arg1 ;
-(void)terminateManagerForPhotoLibraryURL:(id)arg1 ;
-(BOOL)hasPhotosConnectionForManager:(id)arg1 ;
-(BOOL)hasConnectedClientsForManager:(id)arg1 ;
-(id)clientInfoForManager:(id)arg1 ;
-(void)removeClientHandler:(id)arg1 ;
-(void)terminateManagerIfQuiescentAndNoConnectedClients:(id)arg1 ;
-(void)dispatchAsyncToExecutiveStateQueue:(/*^block*/id)arg1 ;
-(void)checkQuiescenceForManager:(id)arg1 ;
-(void)triggerBackgroundActivity;
-(void)stopBackgroundActivityForManager:(id)arg1 ;
-(void)stopAllBackgroundActivities;
-(void)_startBackgroundAnalysis;
-(void)_stopAllBackgroundAnalysisWithCompletion:(/*^block*/id)arg1 ;
-(void)_installBackgroundAnalysisMonitor;
-(void)_registerCuratedLibraryActivity;
-(void)_registerBackgroundActivity;
-(void)_cleanupAfterBackgroundActivityFinishedForDefer:(BOOL)arg1 skipActivityStateCheck:(BOOL)arg2 ;
-(void)_runTurboProcessing:(id)arg1 ;
-(void)_registerTurboActivity;
-(PHAActivityLog *)activityLog;
-(NSMutableDictionary *)managersByLibraryPath;
-(void)setManagersByLibraryPath:(NSMutableDictionary *)arg1 ;
-(PHAPhotoLibraryList *)photoLibraryList;
-(void)setPhotoLibraryList:(PHAPhotoLibraryList *)arg1 ;
-(PHASleepWakeMonitor *)sleepWakeMonitor;
-(void)setSleepWakeMonitor:(PHASleepWakeMonitor *)arg1 ;
-(long long)countOfCoordinatorsRunningBackgroundAnalysis;
-(void)setCountOfCoordinatorsRunningBackgroundAnalysis:(long long)arg1 ;
-(NSObject*<OS_dispatch_source>)backgroundAnalysisMonitorTimer;
-(void)setBackgroundAnalysisMonitorTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_xpc_object>)backgroundAnalysisActivity;
-(void)setBackgroundAnalysisActivity:(NSObject*<OS_xpc_object>)arg1 ;
@end

