/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <libobjc.A.dylib/PFMulticasterDelegate.h>
#import <libobjc.A.dylib/PFWeakContainerNilNotificationDelegate.h>

@protocol PHAGraphManagerClientMessagesMulticaster;
@class PFDirectMessagingMulticaster, NSMutableSet, PFSerialQueue, PGManager, PFWeakContainer, NSConditionLock, PGGraphUpdateManager, PHAManager;

@interface PHAGraphManager : NSObject <PFMulticasterDelegate, PFWeakContainerNilNotificationDelegate> {

	PFDirectMessagingMulticaster*<PHAGraphManagerClientMessagesMulticaster> _clientMulticaster;
	NSMutableSet* _clientsWantingUpdates;
	long long _updateManagerSuspendCount;
	BOOL _rebuildInProgress;
	PFSerialQueue* _serializer;
	PGManager* _graphManager;
	PFWeakContainer* _graphMonitor;
	NSConditionLock* _graphLoadedCondition;
	PGGraphUpdateManager* _updateManager;
	PHAManager* _photoAnalysisManager;

}

@property (nonatomic,readonly) PGGraphUpdateManager * updateManager;              //@synthesize updateManager=_updateManager - In the implementation block
@property (nonatomic,retain) PHAManager * photoAnalysisManager;                   //@synthesize photoAnalysisManager=_photoAnalysisManager - In the implementation block
-(void)dealloc;
-(id)initWithManager:(id)arg1 ;
-(void)weakReferenceBecameNil:(id)arg1 ;
-(void)multicasterHasNoReceivers:(id)arg1 invalidateBlock:(/*^block*/id)arg2 ;
-(void)shutdown;
-(void)unloadGraph;
-(PGGraphUpdateManager *)updateManager;
-(id)statusAsDictionary;
-(PHAManager *)photoAnalysisManager;
-(void)setPhotoAnalysisManager:(PHAManager *)arg1 ;
-(void)_graphBecameReady:(id)arg1 ;
-(BOOL)graphNeedsRebuild;
-(id)registerGraphClient:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)unregisterGraphClient:(id)arg1 ;
-(id)loadGraphWithProgressBlock:(/*^block*/id)arg1 ;
-(void)performFullRebuildWithProgressBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)performLightWeightRebuildWithProgressBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_performRebuildFullRebuild:(BOOL)arg1 withProgressBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)suspendGraphUpdateAndPerformBlock:(/*^block*/id)arg1 ;
-(void)_configureGraphManagerWithProgressBlock:(/*^block*/id)arg1 ;
-(void)_startListeningWithClient:(id)arg1 ;
-(void)_stopListeningWithClient:(id)arg1 ;
-(void)_startUpdateManager;
-(void)_stopUpdateManager;
@end

