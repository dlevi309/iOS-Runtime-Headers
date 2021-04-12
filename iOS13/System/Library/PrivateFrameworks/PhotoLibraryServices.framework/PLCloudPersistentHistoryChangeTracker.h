/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLCloudChangeTracker.h>

@protocol OS_dispatch_queue, PLCloudChangeTrackerDelegate;
@class NSString, NSPersistentHistoryToken, NSManagedObjectContext, NSObject;

@interface PLCloudPersistentHistoryChangeTracker : NSObject <PLCloudChangeTracker> {

	NSPersistentHistoryToken* _lastKnownToken;
	NSPersistentHistoryToken* _lastKnownDeletionToken;
	NSManagedObjectContext* _context;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	id<PLCloudChangeTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLCloudChangeTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSString * lastKnownTokenDescription; 
@property (readonly) BOOL hasChangeTrackerToken; 
@property (copy,readonly) NSString * lastKnownDeletionTokenDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * name; 
+(id)archivedDataWithToken:(id)arg1 ;
+(id)unarchiveTokentWithData:(id)arg1 ;
-(NSString *)name;
-(id<PLCloudChangeTrackerDelegate>)delegate;
-(void)setDelegate:(id<PLCloudChangeTrackerDelegate>)arg1 ;
-(void)disconnect;
-(BOOL)connect;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(BOOL)isConnected;
-(void)changeTrackerDidReceiveChanges;
-(void)saveLastKnownChangeTrackerTokenToDisk;
-(NSString *)lastKnownTokenDescription;
-(void)updateLastKnownTokenToResult:(id)arg1 ;
-(id)fetchAllEvents;
-(void)clearToken;
-(BOOL)hasChangeTrackerToken;
-(void)forceTokenToCurrent;
-(id)fetchDeletionEvents;
-(void)updateLastKnownDeletionTokenToResult:(id)arg1 ;
-(NSString *)lastKnownDeletionTokenDescription;
-(id)lastKnownTokenFromDisk;
-(unsigned)_registerToChangeHubNotification;
-(void)_unregisterToChangeHubNotification;
-(id)eventsResultFromPersistentHistoryToken:(id)arg1 ;
-(id)currentToken;
-(void)_updateLastKnownTokensToToken:(id)arg1 ;
-(void)_updateLastKnownDeletionTokenToToken:(id)arg1 ;
@end

