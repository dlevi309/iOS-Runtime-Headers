/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableSet *)clients;
-(BOOL)hasPhotosConnectionForManager:(id)arg1 ;
-(void)shutdown;
-(id)init;
-(void)_installBackgroundAnalysisMonitor;
-(BOOL)turboIsEnabledForManager:(id)arg1 ;
-(PHAPhotoLibraryList *)photoLibraryList;
-(PHASleepWakeMonitor *)sleepWakeMonitor;
-(void)photoLibraryDidBecomeUnavailable:(id)arg1 ;
-(void)setCountOfCoordinatorsRunningBackgroundAnalysis:(long long)arg1 ;
-(void)setBackgroundAnalysisActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setSleepWakeMonitor:(PHASleepWakeMonitor *)arg1 ;
-(void)startup;
-(void)setManagersByLibraryPath:(NSMutableDictionary *)arg1 ;
-(void)_startBackgroundAnalysis;
-(void)_backgroundActivityDidBegin;
-(void)addProcessingActivityToStatusDictionary:(id)arg1 ;
-(void)setPhotoLibraryList:(PHAPhotoLibraryList *)arg1 ;
-(id)managerForPhotoLibraryURL:(id)arg1 ;
-(void)_cleanupAfterBackgroundActivityFinishedForDefer:(BOOL)arg1 skipActivityStateCheck:(BOOL)arg2 ;
-(void)_runTurboProcessing:(id)arg1 ;
-(void)writeQALog:(id)arg1 ;
-(BOOL)hasConnectedClientsForManager:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)dumpStatusToLog;
-(id)statusAsDictionary;
-(void)disableTurboModeForManager:(id)arg1 ;
-(void)stopAllBackgroundActivities;
-(void)setState:(unsigned char)arg1 ;
-(NSObject*<OS_dispatch_source>)backgroundAnalysisMonitorTimer;
-(void)enableTurboModeForManager:(id)arg1 ;
-(unsigned char)state;
-(NSObject*<OS_xpc_object>)backgroundAnalysisActivity;
-(void)dispatchAsyncToExecutiveStateQueue:(/*^block*/id)arg1 ;
-(void)handleOperation:(id)arg1 ;
-(long long)countOfCoordinatorsRunningBackgroundAnalysis;
-(void)_registerBackgroundActivity;
-(BOOL)_photoAnalysCoreDuetSchedulingDisabled;
-(void)_registerTurboActivity;
-(void)terminateManagerIfQuiescentAndNoConnectedClients:(id)arg1 ;
-(NSMutableDictionary *)managersByLibraryPath;
-(BOOL)_photoAnalysisEnabled;
-(void)_registerCuratedLibraryActivity;
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)clientInfoForManager:(id)arg1 ;
-(void)setupAnalyticsEnvironment;
-(void)_stopAllBackgroundAnalysisWithCompletion:(/*^block*/id)arg1 ;
-(void)notifyLibraryAvailableAtURL:(id)arg1 ;
-(void)setBackgroundAnalysisMonitorTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setClients:(NSMutableSet *)arg1 ;
-(void)terminateManagerForPhotoLibraryURL:(id)arg1 ;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(void)stopBackgroundActivityForManager:(id)arg1 ;
-(void)removeClientHandler:(id)arg1 ;
-(void)triggerBackgroundActivity;
-(void)dealloc;
-(PHAActivityLog *)activityLog;
-(void)checkQuiescenceForManager:(id)arg1 ;
@end

