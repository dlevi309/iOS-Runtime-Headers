/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLCloudChangeTracker.h>

@protocol OS_dispatch_queue, PLCloudChangeTrackerDelegate;
@class NSString, NSPersistentHistoryToken, NSManagedObjectContext, PLChangeHandlingNotificationObserver, NSObject;

@interface PLCloudPersistentHistoryChangeTracker : NSObject <PLCloudChangeTracker> {

	NSPersistentHistoryToken* _lastKnownToken;
	NSPersistentHistoryToken* _lastKnownDeletionToken;
	NSManagedObjectContext* _context;
	PLChangeHandlingNotificationObserver* _notificationObserver;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	id<PLCloudChangeTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLCloudChangeTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSString * lastKnownTokenDescription; 
@property (readonly) BOOL hasChangeTrackerToken; 
@property (copy,readonly) NSString * lastKnownDeletionTokenDescription; 
@property (copy,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedDataWithToken:(id)arg1 ;
+(id)unarchiveTokentWithData:(id)arg1 ;
-(BOOL)isConnected;
-(void)disconnect;
-(id<PLCloudChangeTrackerDelegate>)delegate;
-(BOOL)connect;
-(NSString *)name;
-(void)changeTrackerDidReceiveChangesWithTransaction:(id)arg1 ;
-(void)setDelegate:(id<PLCloudChangeTrackerDelegate>)arg1 ;
-(id)currentToken;
-(void)clearToken;
-(NSString *)lastKnownTokenDescription;
-(void)updateLastKnownTokenToResult:(id)arg1 ;
-(id)fetchAllEvents;
-(BOOL)hasChangeTrackerToken;
-(void)forceTokenToCurrent;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(void)saveLastKnownChangeTrackerTokenToDisk;
-(id)fetchDeletionEvents;
-(void)updateLastKnownDeletionTokenToResult:(id)arg1 ;
-(NSString *)lastKnownDeletionTokenDescription;
-(id)lastKnownTokenFromDisk;
-(void)_registerForChangeHandlingNotifications;
-(void)_updateLastKnownTokensToToken:(id)arg1 ;
-(void)_unregisterForChangeHandlingNotifications;
-(id)eventsResultFromPersistentHistoryToken:(id)arg1 ;
-(void)_updateLastKnownDeletionTokenToToken:(id)arg1 ;
@end

