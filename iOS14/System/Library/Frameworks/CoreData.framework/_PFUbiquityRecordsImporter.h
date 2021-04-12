/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/_PFUbiquityRecordImportOperationDelegate.h>
#import <libobjc.A.dylib/NSManagedObjectContextFaultingDelegate.h>
#import <libobjc.A.dylib/PFUbiquityBaselineRollOperationDelegate.h>
#import <libobjc.A.dylib/PFUbiquityBaselineRecoveryOperationDelegate.h>
#import <libobjc.A.dylib/PFUbiquityBaselineRollResponseOperationDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSOperationQueue, NSObject, NSString, PFUbiquityLocation, NSPersistentStoreCoordinator, NSSQLCore, PFUbiquityRecordsImporterSchedulingContext, PFUbiquitySwitchboardCacheWrapper, NSRecursiveLock;

@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate> {

	NSOperationQueue* _importQueue;
	NSObject*<OS_dispatch_queue> _privateQueue;
	BOOL _isMonitoring;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _storeName;
	NSString* _modelVersionHash;
	NSPersistentStoreCoordinator* _privatePSC;
	NSSQLCore* _privateStore;
	PFUbiquityRecordsImporterSchedulingContext* _schedulingContext;
	PFUbiquitySwitchboardCacheWrapper* _sideLoadCacheWrapper;
	NSObject*<OS_dispatch_source> _logRestartTimer;
	NSRecursiveLock* _schedulingLock;
	BOOL _importOnlyActiveStores;
	BOOL _throttleNotifications;
	unsigned long long _numPendingNotifications;
	BOOL _allowBaselineRoll;
	unsigned long long _pendingImportOperationsCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operationWasInterruptedDuringImport:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(id)createSortedOperationsArrayWithMetadata:(id)arg1 isFirstImport:(BOOL)arg2 ;
-(void)scheduleRecoveryTimer;
-(void)baselineRollOperationWasUnableToLockPersistentStore:(id)arg1 ;
-(void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)arg1 ;
-(void)recoveryOperation:(id)arg1 didReplaceLocalStoreFileWithBaseline:(id)arg2 ;
-(void)recoveryOperation:(id)arg1 encounteredAnError:(id)arg2 duringRecoveryOfBaseline:(id)arg3 ;
-(void)rollResponseOperation:(id)arg1 successfullyAdoptedBaseline:(id)arg2 ;
-(void)rollResponseOperation:(id)arg1 encounteredAnError:(id)arg2 whileTryingToAdoptBaseline:(id)arg3 ;
-(NSString *)description;
-(void)operationDidFinish:(id)arg1 ;
-(void)dealloc;
@end

