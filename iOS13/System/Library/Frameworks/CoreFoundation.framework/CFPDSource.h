/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


@protocol OS_xpc_object, OS_os_transaction;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class CFPrefsDaemon, CFPDDataBuffer, NSObject;

@interface CFPDSource : NSObject {

	CFPrefsDaemon* _cfprefsd;
	CFPDDataBuffer* _plist;
	NSObject*<OS_xpc_object> _pendingChangesQueue;
	unsigned long long _pendingChangesSize;
	CFStringRef _userName;
	CFStringRef _domain;
	const char* _actualPath;
	CFSetRef _observingConnections;
	NSObject*<OS_os_transaction> _dirtyTransaction;
	os_unfair_lock_s _observingConnectionsLock;
	os_unfair_lock_s _writeLock;
	os_unfair_lock_s _lock;
	unsigned _lastEuid;
	unsigned _lastEgid;
	int _fileProtectionClass;
	short _generationShmemIndex;
	BOOL _handlingRequest;
	BOOL _dirty;
	BOOL _byHost;
	BOOL _managed;
	BOOL _managedUsesContainer;
	BOOL _neverCache;
	BOOL _checkedForNonPrefsPlist;
	BOOL _restrictedReadability;
	BOOL _waitingForDeviceUnlock;
	BOOL _watchingParentDirectory;
	BOOL _disableBackup;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 byHost:(BOOL)arg3 managed:(BOOL)arg4 shmemIndex:(short)arg5 daemon:(id)arg6 ;
-(void)setManagedPreferencesUseContainer:(BOOL)arg1 ;
-(void)lockedSync:(/*^block*/id)arg1 ;
-(BOOL)shouldBePurgable;
-(void)tryEndAccessingPlist;
-(void)cacheActualPathCreatingIfNecessary:(BOOL)arg1 euid:(unsigned)arg2 egid:(unsigned)arg3 isWritable:(BOOL*)arg4 ;
-(BOOL)getUncanonicalizedPath:(char*)arg1 ;
-(void)handleDeviceUnlock;
-(CFStringRef)container;
-(void)syncWriteToDiskAndFlushCache;
-(void)updateShmemEntry;
-(void)asyncNotifyObserversOfWriteFromConnection:(id)arg1 message:(id)arg2 ;
-(CFStringRef)debugDump;
-(void)setDirty:(BOOL)arg1 ;
-(void)drainPendingChanges;
-(void)markNeedsToReloadFromDiskDueToFailedWrite;
-(void)cleanUpIfNecessaryAfterCreatingPlist;
-(void)handleOpenForWritingFailureWithErrno:(int)arg1 ;
-(void)handleWritingFailureWithError:(int)arg1 ;
-(void)syncWriteToDisk;
-(void)clearCache;
-(/*^block*/id)createDiskWriteShouldPerformSynchronously:(BOOL*)arg1 ;
-(void)lockedAsync:(/*^block*/id)arg1 ;
-(void)cacheActualPath;
-(CFStringRef)user;
-(id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(BOOL)arg1 ;
-(BOOL)hasObservers;
-(CFStringRef)cloudConfigurationPath;
-(void)observingConnectionsLockedSync:(/*^block*/id)arg1 ;
-(void)stopNotifyingObserver:(id)arg1 ;
-(void)setPlist:(id)arg1 ;
-(BOOL)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(BOOL)arg4 ;
-(id)copyPropertyListValidatingPlist:(BOOL)arg1 ;
-(BOOL)validateAccessToken:(int)arg1 accessType:(int)arg2 ;
-(BOOL)validateSandboxForWrite:(id)arg1 containerPath:(const char*)arg2 ;
-(int)validateSandboxForRead:(id)arg1 containerPath:(const char*)arg2 ;
-(int)validatePOSIXPermissionsForMessage:(id)arg1 accessType:(int)arg2 fullyValidated:(BOOL*)arg3 ;
-(int)validateSandboxPermissionsForMessage:(id)arg1 containerPath:(const char*)arg2 accessType:(int)arg3 ;
-(void)handleAvoidCache;
-(void)handleEUIDorEGIDMismatch;
-(int)cloneAndOpenPropertyListWithoutDrainingPendingChangesOrValidatingPlist;
-(int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(BOOL)arg4 containerPath:(const char*)arg5 diagnosticMessage:(const char**)arg6 ;
-(unsigned long long)approximatePlistSizeIncludingPendingChanges;
-(void)attachSizeWarningsToReply:(id)arg1 forByteCount:(unsigned long long)arg2 ;
-(void)handleSynchronous;
-(void)handleNoPlistFound;
-(void)setObserved:(BOOL)arg1 bySenderOfMessage:(id)arg2 ;
-(void)handleNeverCache;
-(void)beginHandlingRequest;
-(void)endHandlingRequest;
-(CFStringRef)copyUncanonicalizedPath;
-(BOOL)managed;
-(CFStringRef)domain;
-(void)respondToFileWrittenToBehindOurBack;
-(BOOL)byHost;
-(short)shmemIndex;
-(void)finishedNonRequestWriteWithError:(int)arg1 ;
-(void)observingConnectionWasInvalidated:(id)arg1 ;
-(id)acceptMessage:(id)arg1 ;
-(void)cleanUpAfterAcceptingMessage:(id)arg1 ;
@end

