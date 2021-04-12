/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSFilePresenter.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSURL, NSOperationQueue, NSSet, NSProgress, NSUserActivity, NSLock, NSString, NSUndoManager, NSDate, NSObject, NSTimer, NSMutableArray, NSMutableSet, NSDocumentDifferenceSize;

@interface UIDocument : NSObject <NSFilePresenter, NSProgressReporting> {

	NSUserActivity* _currentUserActivity;
	NSLock* _activityContinuationLock;
	NSURL* _fileURL;
	NSString* _fileBookmark;
	NSString* _fileType;
	NSString* _localizedName;
	NSUndoManager* _undoManager;
	NSDate* _fileModificationDate;
	NSObject*<OS_dispatch_queue> _fileAccessQueue;
	NSObject*<OS_dispatch_queue> _openingQueue;
	NSObject*<OS_dispatch_semaphore> _fileAccessSemaphore;
	NSOperationQueue* _filePresenterQueue;
	id _differenceDueToRecentChanges;
	id _differenceSincePreservingPreviousVersion;
	id _differenceSinceSaving;
	NSTimer* _autosavingTimer;
	double _lastSaveTime;
	double _lastPreservationTime;
	id _versionWithoutRecentChanges;
	NSMutableArray* _versions;
	id _alertPresenter;
	id _progressSubscriber;
	NSMutableSet* _progresses;
	struct {
		unsigned inClose : 1;
		unsigned isOpen : 1;
		unsigned inOpen : 1;
		unsigned inRevert : 1;
		unsigned isAutosavingBecauseOfTimer : 1;
		unsigned versionWithoutRecentChangesIsNotLastOpened : 1;
		unsigned ignoreUndoAndRedoNotifications : 1;
		unsigned editingTemporarilyDisabled : 1;
		unsigned editingDisabledDueToPermissions : 1;
		unsigned isRegisteredAsFilePresenter : 1;
		unsigned movingFile : 1;
		unsigned savingError : 1;
		unsigned inConflict : 1;
		unsigned needToStopAccessingSecurityScopedResource : 1;
	}  _docFlags;

}

@property (nonatomic,readonly) NSDocumentDifferenceSize * differenceDueToRecentChanges;                          //@synthesize differenceDueToRecentChanges=_differenceDueToRecentChanges - In the implementation block
@property (nonatomic,readonly) NSDocumentDifferenceSize * differenceSincePreservingPreviousVersion;              //@synthesize differenceSincePreservingPreviousVersion=_differenceSincePreservingPreviousVersion - In the implementation block
@property (nonatomic,readonly) NSDocumentDifferenceSize * differenceSinceSaving;                                 //@synthesize differenceSinceSaving=_differenceSinceSaving - In the implementation block
@property (readonly) NSURL * fileURL; 
@property (copy,readonly) NSString * localizedName; 
@property (copy,readonly) NSString * fileType; 
@property (copy) NSDate * fileModificationDate; 
@property (readonly) unsigned long long documentState; 
@property (readonly) NSProgress * progress; 
@property (retain) NSUndoManager * undoManager; 
@property (nonatomic,readonly) BOOL hasUnsavedChanges; 
@property (nonatomic,readonly) NSString * savingFileType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
+(id)_fileModificationDateForURL:(id)arg1 ;
+(id)_typeForContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(BOOL)arg4 ;
+(BOOL)_url:(id)arg1 matchesURL:(id)arg2 ;
+(void)_autosavingTimerDidFireSoContinue:(id)arg1 ;
+(id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryAttempter:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSDate *)fileModificationDate;
-(NSString *)fileType;
-(NSProgress *)progress;
-(NSString *)localizedName;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemHasUnsavedChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg1 ;
-(void)presentedItemDidChange;
-(void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2 ;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2 ;
-(void)presentedItemDidLoseVersion:(id)arg1 ;
-(void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2 ;
-(void)presentedItemDidResolveConflictVersion:(id)arg1 ;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1 ;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(void)presentedSubitemDidAppearAtURL:(id)arg1 ;
-(NSURL *)fileURL;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)setFileType:(NSString *)arg1 ;
-(id)userActivity;
-(void)setUserActivity:(id)arg1 ;
-(void)updateUserActivityState:(id)arg1 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(void)_setFileURL:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_releaseUndoManager;
-(unsigned long long)documentState;
-(void)_performBlockSynchronouslyOnMainThread:(/*^block*/id)arg1 ;
-(id)_userInfoForActivityContinuation;
-(id)_titleForActivityContinuation;
-(id)_activityTypeIdentifierForCloudDocument:(BOOL*)arg1 ;
-(BOOL)_documentIsUbiquitous;
-(void)_invalidateCurrentUserActivity;
-(id)_userActivityWithActivityType:(id)arg1 ;
-(void)_reallyManageUserActivity;
-(void)_setUserActivity:(id)arg1 ;
-(void)autosaveWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_isInOpen;
-(void)_setInOpen:(BOOL)arg1 ;
-(void)_registerAsFilePresenterIfNecessary;
-(BOOL)readFromURL:(id)arg1 error:(id*)arg2 ;
-(void)setFileModificationDate:(NSDate *)arg1 ;
-(void)_updateLocalizedName;
-(void)_setOpen:(BOOL)arg1 ;
-(void)handleError:(id)arg1 userInteractionPermitted:(BOOL)arg2 ;
-(void)_unregisterAsFilePresenterIfNecessary;
-(void)_clearUserActivity;
-(void)_manageUserActivity;
-(void)_updateLastUsedDate;
-(void)_performBlock:(/*^block*/id)arg1 synchronouslyOnQueue:(id)arg2 ;
-(void)performAsynchronousFileAccessUsingBlock:(/*^block*/id)arg1 ;
-(void)_progressPublished:(id)arg1 ;
-(void)_progressUnpublished:(id)arg1 ;
-(void)_updateConflictState;
-(void)_updatePermissionsState:(BOOL)arg1 ;
-(void)_sendStateChangedNotification;
-(BOOL)_isOpen;
-(void)_setEditingTemporarilyDisabled:(BOOL)arg1 ;
-(void)updateChangeCount:(long long)arg1 ;
-(NSUndoManager *)undoManager;
-(BOOL)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(BOOL)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5 ;
-(id)_writingProgressForURL:(id)arg1 indeterminate:(BOOL)arg2 ;
-(NSString *)savingFileType;
-(id)fileNameExtensionForType:(id)arg1 saveOperation:(long long)arg2 ;
-(id)contentsForType:(id)arg1 error:(id*)arg2 ;
-(id)changeCountTokenForSaveOperation:(long long)arg1 ;
-(id)fileAttributesToWriteToURL:(id)arg1 forSaveOperation:(long long)arg2 error:(id*)arg3 ;
-(BOOL)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(long long)arg4 error:(id*)arg5 ;
-(void)_finishSavingToURL:(id)arg1 forSaveOperation:(long long)arg2 changeCount:(id)arg3 ;
-(BOOL)_coordinateWritingItemAtURL:(id)arg1 error:(id*)arg2 byAccessor:(/*^block*/id)arg3 ;
-(void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(long long)arg2 ;
-(BOOL)hasUnsavedChanges;
-(void)_scheduleAutosaving;
-(void)_autosaveWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)_autosavingDelay;
-(void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(BOOL)arg2 ;
-(void)_rescheduleAutosaving;
-(void)_autosavingCompletedSuccessfully:(BOOL)arg1 ;
-(void)saveToURL:(id)arg1 forSaveOperation:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_saveUnsavedChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDocumentDifferenceSize *)differenceSinceSaving;
-(BOOL)_hasUnsavedChanges;
-(NSDocumentDifferenceSize *)differenceDueToRecentChanges;
-(NSDocumentDifferenceSize *)differenceSincePreservingPreviousVersion;
-(void)_changeWasUndone:(id)arg1 ;
-(void)_changeWasRedone:(id)arg1 ;
-(void)_changeWasDone:(id)arg1 ;
-(void)finishedHandlingError:(id)arg1 recovered:(BOOL)arg2 ;
-(void)_setHasSavingError:(BOOL)arg1 ;
-(void)_setEditingDisabledDueToPermissions:(BOOL)arg1 ;
-(BOOL)_shouldAllowWritingInResponseToPresenterMessage;
-(BOOL)_isEditingTemporarilyDisabled;
-(void)revertToContentsOfURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setInConflict:(BOOL)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(BOOL)_isEditingDisabledDueToPermissions;
-(BOOL)_hasSavingError;
-(BOOL)_isInConflict;
-(void)_lockFileAccessQueueAndPerformBlock:(/*^block*/id)arg1 ;
-(void)_unlockFileAccessQueue;
-(id)_presentableFileNameForSaveOperation:(long long)arg1 url:(id)arg2 ;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)userInteractionNoLongerPermittedForError:(id)arg1 ;
-(void)enableEditing;
-(void)disableEditing;
-(id)_fileOpeningQueue;
@end

