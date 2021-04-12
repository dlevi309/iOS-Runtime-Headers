/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

#import <DACalDAV/DACalDAV-Structs.h>
#import <libobjc.A.dylib/CalDAVAccountPropertyRefreshDelegate.h>
#import <libobjc.A.dylib/CalDAVCalendarPropertyRefreshDelegate.h>
#import <libobjc.A.dylib/CalDAVCalendarSyncDelegate.h>
#import <libobjc.A.dylib/CalDAVAccountDelegatesRefreshDelegate.h>

@protocol OS_dispatch_group;
@class DATransaction, CalDAVRefreshContext, MobileCalDAVAccount, NSMutableDictionary, NSMutableArray, NSObject, NSMutableSet, NSString, CalDiagAccountSync, NSArray;

@interface MobileCalDAVAccountRefreshActor : NSObject <CalDAVAccountPropertyRefreshDelegate, CalDAVCalendarPropertyRefreshDelegate, CalDAVCalendarSyncDelegate, CalDAVAccountDelegatesRefreshDelegate> {

	DATransaction* _transaction;
	BOOL _shouldCancel;
	BOOL _didFinish;
	BOOL _refreshing;
	BOOL _refreshFoundUpdatedTaskContainer;
	BOOL _refreshFoundUpdatedSpecialCalendar;
	BOOL _refreshFoundDeletedContainerURL;
	int _state;
	CalDAVRefreshContext* _context;
	MobileCalDAVAccount* _account;
	/*^block*/id _completionBlock;
	NSMutableDictionary* _pathsToCTags;
	NSMutableDictionary* _pathsToSyncTokens;
	NSMutableArray* _calendarsToRefresh;
	NSObject*<OS_dispatch_group> _outstandingOperationGroup;
	NSMutableSet* _outstandingTaskGroups;
	NSMutableSet* _outstandingTasks;
	NSString* _calendarHomeSyncToken;
	CalDiagAccountSync* _accountSyncDiagnostics;
	NSArray* _attachmentUUIDsToUpload;

}

@property (assign,nonatomic,__weak) MobileCalDAVAccount * account;                                //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) CalDAVRefreshContext * context;                                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL shouldCancel;                                                   //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (assign,nonatomic) BOOL didFinish;                                                      //@synthesize didFinish=_didFinish - In the implementation block
@property (assign,nonatomic) BOOL refreshing;                                                     //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                    //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pathsToCTags;                                  //@synthesize pathsToCTags=_pathsToCTags - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pathsToSyncTokens;                             //@synthesize pathsToSyncTokens=_pathsToSyncTokens - In the implementation block
@property (nonatomic,retain) NSMutableArray * calendarsToRefresh;                                 //@synthesize calendarsToRefresh=_calendarsToRefresh - In the implementation block
@property (assign,nonatomic) BOOL refreshFoundUpdatedTaskContainer;                               //@synthesize refreshFoundUpdatedTaskContainer=_refreshFoundUpdatedTaskContainer - In the implementation block
@property (assign,nonatomic) BOOL refreshFoundUpdatedSpecialCalendar;                             //@synthesize refreshFoundUpdatedSpecialCalendar=_refreshFoundUpdatedSpecialCalendar - In the implementation block
@property (assign,nonatomic) BOOL refreshFoundDeletedContainerURL;                                //@synthesize refreshFoundDeletedContainerURL=_refreshFoundDeletedContainerURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> outstandingOperationGroup;              //@synthesize outstandingOperationGroup=_outstandingOperationGroup - In the implementation block
@property (nonatomic,retain) NSMutableSet * outstandingTaskGroups;                                //@synthesize outstandingTaskGroups=_outstandingTaskGroups - In the implementation block
@property (nonatomic,retain) NSMutableSet * outstandingTasks;                                     //@synthesize outstandingTasks=_outstandingTasks - In the implementation block
@property (assign,nonatomic) int state;                                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * calendarHomeSyncToken;                                    //@synthesize calendarHomeSyncToken=_calendarHomeSyncToken - In the implementation block
@property (nonatomic,retain) CalDiagAccountSync * accountSyncDiagnostics;                         //@synthesize accountSyncDiagnostics=_accountSyncDiagnostics - In the implementation block
@property (nonatomic,retain) NSArray * attachmentUUIDsToUpload;                                   //@synthesize attachmentUUIDsToUpload=_attachmentUUIDsToUpload - In the implementation block
@property (nonatomic,readonly) BOOL needsRemindersSync; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(int)state;
-(CalDAVRefreshContext *)context;
-(void)setState:(int)arg1 ;
-(void)setContext:(CalDAVRefreshContext *)arg1 ;
-(MobileCalDAVAccount *)account;
-(void)setAccount:(MobileCalDAVAccount *)arg1 ;
-(void)refresh;
-(void)teardown;
-(BOOL)didFinish;
-(void)setRefreshing:(BOOL)arg1 ;
-(BOOL)refreshing;
-(BOOL)shouldCancel;
-(void)setShouldCancel:(BOOL)arg1 ;
-(void)setDidFinish:(BOOL)arg1 ;
-(id)_powerLogInfoDictionary;
-(NSString *)calendarHomeSyncToken;
-(void)cancelWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)needsRemindersSync;
-(id)initWithAccount:(id)arg1 context:(id)arg2 ;
-(void)setCalendarHomeSyncToken:(NSString *)arg1 ;
-(void)setOutstandingTaskGroups:(NSMutableSet *)arg1 ;
-(void)setOutstandingTasks:(NSMutableSet *)arg1 ;
-(void)setOutstandingOperationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSMutableSet *)outstandingTaskGroups;
-(NSMutableSet *)outstandingTasks;
-(void)_teardownAllOutstandingOperations;
-(void)_sendResultToAccount;
-(BOOL)_refreshShouldContinue;
-(void)_refreshCalendarProperties;
-(void)_refreshDelegateAccountProperties;
-(void)_sendMoveTasks;
-(id)_attachmentUUIDsToUpload;
-(void)setAttachmentUUIDsToUpload:(NSArray *)arg1 ;
-(void)_refreshRegularCalendars;
-(void)_uploadAttachments;
-(void)_refreshSpecialCalendars;
-(void)_calendarCollectionsWereRefreshed;
-(NSObject*<OS_dispatch_group>)outstandingOperationGroup;
-(void)_refreshAccountProperties;
-(void)_waitForStateTransition;
-(void)setRefreshFoundUpdatedTaskContainer:(BOOL)arg1 ;
-(void)setRefreshFoundUpdatedSpecialCalendar:(BOOL)arg1 ;
-(void)setRefreshFoundDeletedContainerURL:(BOOL)arg1 ;
-(void)setPathsToCTags:(NSMutableDictionary *)arg1 ;
-(void)setPathsToSyncTokens:(NSMutableDictionary *)arg1 ;
-(void)_cleanUpDuplicateCalendars;
-(void)calendarSyncForPrincipal:(id)arg1 calendar:(id)arg2 completedWithError:(id)arg3 ;
-(void)setCalendarsToRefresh:(NSMutableArray *)arg1 ;
-(NSMutableArray *)calendarsToRefresh;
-(BOOL)_cleanUpDuplicateCalendar:(id)arg1 ofCalendar:(id)arg2 ;
-(BOOL)_sendMoveForItem:(id)arg1 ;
-(void)_clearMoveChange:(id)arg1 ;
-(void)_saveMoveChange:(id)arg1 ;
-(void)_handleMoveTaskComplete:(id)arg1 moveItem:(id)arg2 ;
-(void)_syncCalendar:(id)arg1 ;
-(NSMutableDictionary *)pathsToCTags;
-(NSMutableDictionary *)pathsToSyncTokens;
-(id)_refreshedCtagForCalendar:(id)arg1 ;
-(id)_refreshedSyncTokenForCalendar:(id)arg1 ;
-(CalDiagAccountSync *)accountSyncDiagnostics;
-(CFArrayRef)_copyArrayOfAttachmentsToUpload;
-(id)_attachmentsByOwnerURL:(CFArrayRef)arg1 calDAVItemsByOwnerURL:(id*)arg2 ;
-(void)_uploadAttachments:(id)arg1 calDAVItemsByOwnerURL:(id)arg2 ;
-(NSArray *)attachmentUUIDsToUpload;
-(void)_uploadAttachments:(CFArrayRef)arg1 forOwnerURL:(id)arg2 syncKey:(id)arg3 scheduleTag:(id)arg4 ;
-(void)_handleAttachmentUploadComplete:(id)arg1 attachmentUUID:(id)arg2 ;
-(void)_cleanUpOrphanedPreferredUserAddressesPerCalendar;
-(id)_guidsOfExistingCalendars;
-(BOOL)refreshFoundUpdatedTaskContainer;
-(BOOL)refreshFoundUpdatedSpecialCalendar;
-(BOOL)refreshFoundDeletedContainerURL;
-(void)propertyRefreshForPrincipal:(id)arg1 completedWithError:(id)arg2 ;
-(void)calendarRefreshForPrincipal:(id)arg1 completedWithNewCTags:(id)arg2 newSyncTokens:(id)arg3 calendarHomeSyncToken:(id)arg4 updatedCalendars:(id)arg5 error:(id)arg6 ;
-(BOOL)calendarRefreshShouldRetryMkCalendarForPrincipal:(id)arg1 calendar:(id)arg2 error:(id)arg3 ;
-(void)calendarRefreshFoundUpdatedContainerWithIgnoredEntityType:(id)arg1 ;
-(void)calendarRefreshFoundUpdatedSpecialContainer:(id)arg1 ;
-(void)calendarRefreshFoundDeletedContainerURL:(id)arg1 ;
-(void)delegateRefreshForPrincipal:(id)arg1 completedWithError:(id)arg2 ;
-(void)setAccountSyncDiagnostics:(CalDiagAccountSync *)arg1 ;
@end

