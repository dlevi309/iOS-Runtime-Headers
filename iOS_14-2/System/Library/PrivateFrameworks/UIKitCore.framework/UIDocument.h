/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryAttempter:(id)arg4 ;
+(void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(BOOL)arg4 ;
+(void)_autosavingTimerDidFireSoContinue:(id)arg1 ;
+(BOOL)_url:(id)arg1 matchesURL:(id)arg2 ;
+(id)_fileModificationDateForURL:(id)arg1 ;
+(id)_typeForContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id)userActivity;
-(unsigned long long)documentState;
-(void)_applicationWillResignActive:(id)arg1 ;
-(NSString *)localizedName;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(BOOL)_isOpen;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSProgress *)progress;
-(BOOL)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5 ;
-(void)presentedItemHasUnsavedChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(long long)arg4 error:(id*)arg5 ;
-(id)init;
-(void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2 ;
-(NSUndoManager *)undoManager;
-(void)presentedItemDidResolveConflictVersion:(id)arg1 ;
-(void)setFileType:(NSString *)arg1 ;
-(id)fileAttributesToWriteToURL:(id)arg1 forSaveOperation:(long long)arg2 error:(id*)arg3 ;
-(void)_finishSavingToURL:(id)arg1 forSaveOperation:(long long)arg2 changeCount:(id)arg3 ;
-(BOOL)_coordinateWritingItemAtURL:(id)arg1 error:(id*)arg2 byAccessor:(/*^block*/id)arg3 ;
-(void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(long long)arg2 ;
-(void)_autosaveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_rescheduleAutosaving;
-(void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(BOOL)arg2 ;
-(BOOL)_hasUnsavedChanges;
-(void)_autosavingCompletedSuccessfully:(BOOL)arg1 ;
-(void)_changeWasRedone:(id)arg1 ;
-(void)saveToURL:(id)arg1 forSaveOperation:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_saveUnsavedChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDocumentDifferenceSize *)differenceDueToRecentChanges;
-(NSDocumentDifferenceSize *)differenceSincePreservingPreviousVersion;
-(void)_setInConflict:(BOOL)arg1 ;
-(void)finishedHandlingError:(id)arg1 recovered:(BOOL)arg2 ;
-(void)_setHasSavingError:(BOOL)arg1 ;
-(void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2 ;
-(void)_setEditingDisabledDueToPermissions:(BOOL)arg1 ;
-(BOOL)_shouldAllowWritingInResponseToPresenterMessage;
-(BOOL)_isEditingTemporarilyDisabled;
-(void)revertToContentsOfURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isEditingDisabledDueToPermissions;
-(id)_fileOpeningQueue;
-(void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2 ;
-(void)_lockFileAccessQueueAndPerformBlock:(/*^block*/id)arg1 ;
-(id)_presentableFileNameForSaveOperation:(long long)arg1 url:(id)arg2 ;
-(void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2 ;
-(void)userInteractionNoLongerPermittedForError:(id)arg1 ;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(NSURL *)fileURL;
-(void)presentedSubitemDidAppearAtURL:(id)arg1 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg1 ;
-(BOOL)_isInOpen;
-(id)initWithFileURL:(id)arg1 ;
-(void)_setOpen:(BOOL)arg1 ;
-(NSString *)description;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidLoseVersion:(id)arg1 ;
-(void)setUserActivity:(id)arg1 ;
-(void)updateUserActivityState:(id)arg1 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(void)presentedItemDidChange;
-(void)_setInOpen:(BOOL)arg1 ;
-(NSDate *)fileModificationDate;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1 ;
-(void)_reallyManageUserActivity;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)_changeWasDone:(id)arg1 ;
-(BOOL)_hasSavingError;
-(BOOL)_isInConflict;
-(void)enableEditing;
-(id)contentsForType:(id)arg1 error:(id*)arg2 ;
-(void)_unlockFileAccessQueue;
-(void)setFileModificationDate:(NSDate *)arg1 ;
-(void)_updatePermissionsState:(BOOL)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateLocalizedName;
-(BOOL)_documentIsUbiquitous;
-(void)_releaseUndoManager;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)savingFileType;
-(void)disableEditing;
-(void)_progressPublished:(id)arg1 ;
-(void)_progressUnpublished:(id)arg1 ;
-(void)_setFileURL:(id)arg1 ;
-(void)_manageUserActivity;
-(void)_updateLastUsedDate;
-(void)_setUserActivity:(id)arg1 ;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)readFromURL:(id)arg1 error:(id*)arg2 ;
-(void)_performBlockSynchronouslyOnMainThread:(/*^block*/id)arg1 ;
-(id)_userInfoForActivityContinuation;
-(void)_clearUserActivity;
-(id)_titleForActivityContinuation;
-(id)_activityTypeIdentifierForCloudDocument:(BOOL*)arg1 ;
-(void)dealloc;
-(void)_invalidateCurrentUserActivity;
-(void)_updateConflictState;
-(id)_userActivityWithActivityType:(id)arg1 ;
-(void)_scheduleAutosaving;
-(BOOL)hasUnsavedChanges;
-(void)autosaveWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDocumentDifferenceSize *)differenceSinceSaving;
-(void)_registerAsFilePresenterIfNecessary;
-(double)_autosavingDelay;
-(void)handleError:(id)arg1 userInteractionPermitted:(BOOL)arg2 ;
-(void)_unregisterAsFilePresenterIfNecessary;
-(void)_performBlock:(/*^block*/id)arg1 synchronouslyOnQueue:(id)arg2 ;
-(void)performAsynchronousFileAccessUsingBlock:(/*^block*/id)arg1 ;
-(void)_sendStateChangedNotification;
-(void)_setEditingTemporarilyDisabled:(BOOL)arg1 ;
-(void)updateChangeCount:(long long)arg1 ;
-(BOOL)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(id)_writingProgressForURL:(id)arg1 indeterminate:(BOOL)arg2 ;
-(id)fileNameExtensionForType:(id)arg1 saveOperation:(long long)arg2 ;
-(NSString *)fileType;
-(id)changeCountTokenForSaveOperation:(long long)arg1 ;
-(void)_changeWasUndone:(id)arg1 ;
@end

