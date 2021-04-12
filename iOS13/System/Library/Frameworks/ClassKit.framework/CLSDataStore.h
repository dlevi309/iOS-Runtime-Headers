/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <libobjc.A.dylib/CLSFaultProcessorDelegate.h>
#import <libobjc.A.dylib/NSLocking.h>

@protocol CLSDataStoreDelegate;
@class NSMutableSet, NSMutableDictionary, CLSCurrentUser, NSMutableArray, CLSAuthTree, NSDate, NSString, CLSContext, CLSEndpointConnection, CLSGraph, CLSActivity;

@interface CLSDataStore : NSObject <CLSFaultProcessorDelegate, NSLocking> {

	NSMutableSet* _dataObservers;
	NSMutableDictionary* _deletedObjectsByID;
	NSMutableDictionary* _objectGenerationsByID;
	CLSCurrentUser* _cachedCurrentUser;
	int _accountChangeToken;
	os_unfair_recursive_lock_s _lock;
	NSMutableArray* _pendingSaves;
	BOOL _saveInProgress;
	CLSAuthTree* _authTree;
	NSMutableArray* _runningActivities;
	NSDate* _lastPruneDate;
	NSString* _appBundleIdentifier;
	NSString* _appName;
	id<CLSDataStoreDelegate> _delegate;
	CLSContext* _mainAppContext;
	CLSEndpointConnection* _endpointConnection;
	CLSGraph* _graph;

}

@property (nonatomic,retain) CLSContext * mainAppContext;                             //@synthesize mainAppContext=_mainAppContext - In the implementation block
@property (nonatomic,retain) CLSEndpointConnection * endpointConnection;              //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,retain) CLSCurrentUser * cachedCurrentUser; 
@property (nonatomic,readonly) CLSGraph * graph;                                      //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) CLSAuthTree * authTree; 
@property (nonatomic,readonly) CLSContext * activeContext; 
@property (nonatomic,readonly) CLSActivity * runningActivity; 
@property (assign,nonatomic,__weak) id<CLSDataStoreDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAvailable;
+(id)shared;
+(BOOL)isPrivateSearchAPIEnabled;
+(BOOL)isSearchAPIEnabled;
+(id)newDatastore;
+(BOOL)isDashboardApp;
+(Class)endpointClass;
+(BOOL)isPDTool;
-(id)_cna_objectsMatching:(id)arg1 ;
-(id)_cna_membersOfGroupWithIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id<CLSDataStoreDelegate>)delegate;
-(void)setDelegate:(id<CLSDataStoreDelegate>)arg1 ;
-(void)lock;
-(void)unlock;
-(void)reset;
-(id)initWithEndpoint:(id)arg1 ;
-(CLSGraph *)graph;
-(void)_reconnect;
-(id)currentUser;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(id)allContexts;
-(void)_save;
-(id)_addObject:(id)arg1 ;
-(id)appIdentifier;
-(void)objectsMatching:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)objectWithObjectID:(id)arg1 ;
-(void)executeQuery:(id)arg1 ;
-(id)runningActivities;
-(BOOL)isRemovedObject:(id)arg1 ;
-(void)pruneDeletedObjectsWithCompletion:(/*^block*/id)arg1 ;
-(CLSContext *)mainAppContext;
-(void)saveWithCompletion:(/*^block*/id)arg1 ;
-(void)contextsMatchingIdentifierPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPrivateSearchAPIEnabled;
-(BOOL)isDashboardAPIEnabled;
-(BOOL)isSearchAPIEnabled;
-(void)triggerProgressTransparencyMessageIfNeeded;
-(void)developerModeChanged:(id)arg1 ;
-(void)_connectionInterupted;
-(void)_connectionConnected;
-(void)_registerForAccountChangedDarwinNotification;
-(void)_reenableObservers;
-(void)currentUserWithCompletion:(/*^block*/id)arg1 ;
-(void)registerDataObserver:(id)arg1 ;
-(void)refreshMainAppContext;
-(id)dataServer:(/*^block*/id)arg1 ;
-(void)dataServer:(id)arg1 executeQuery:(id)arg2 ;
-(id)syncDataServer:(/*^block*/id)arg1 ;
-(id)cachedMainAppContext;
-(void)_createMainAppContext;
-(void)_refreshMainAppContext;
-(CLSEndpointConnection *)endpointConnection;
-(void)awaitExecuteQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isAppClient;
-(void)fetchAndCompleteAllAssignedActivitiesForContextPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_modifiedObjects;
-(id)_validateObjects:(id)arg1 ;
-(id)_filterObjectsBeingSavedFromObjects:(id)arg1 ;
-(void)saveObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saveObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshAuthTreeWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isAllowedToInsertObject:(id)arg1 ;
-(void)markObjectAsDeleted:(id)arg1 ;
-(void)removeObjectWithObjectID:(id)arg1 class:(Class)arg2 ;
-(void)contextsMatchingIdentifierPath:(id)arg1 parentContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)utilityServer:(/*^block*/id)arg1 ;
-(id)syncUtilityServer:(/*^block*/id)arg1 ;
-(void)fetchTransparencyMessageInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)faultMainAppContext;
-(void)currentUserWithServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCachedCurrentUser:(CLSCurrentUser *)arg1 ;
-(BOOL)faultProcessor:(id)arg1 shouldFaultRelation:(id)arg2 fromObject:(id)arg3 ;
-(CLSCurrentUser *)cachedCurrentUser;
-(void)fetchCollectionsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCollectionItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteArchivedCollectionObjects:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)contextsMatchingIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)contextsMatchingPredicate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)syncFetchThumbnailBlobForContext:(id)arg1 ;
-(void)syncDeleteThumbnailBlobForContext:(id)arg1 ;
-(void)completeAllAssignedActivitiesMatching:(id)arg1 ;
-(CLSAuthTree *)authTree;
-(void)removeContext:(id)arg1 ;
-(void)removeContextWithObjectID:(id)arg1 ;
-(CLSContext *)activeContext;
-(CLSActivity *)runningActivity;
-(void)addRunningActivitiesObject:(id)arg1 ;
-(void)removeRunningActivitiesObject:(id)arg1 ;
-(void)shouldSyncTeacherBrowsedContextsWithCompletion:(/*^block*/id)arg1 ;
-(void)setShouldSyncTeacherBrowsedContexts:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)deregisterDataObserver:(id)arg1 ;
-(void)syncFetchWithCompletion:(/*^block*/id)arg1 ;
-(void)featureIsEnabled:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMainAppContext:(CLSContext *)arg1 ;
-(void)setEndpointConnection:(CLSEndpointConnection *)arg1 ;
-(void)classesForPersonID:(id)arg1 role:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_classesForCurrentUserWithRole:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)addHandout:(id)arg1 ;
-(void)removeHandout:(id)arg1 ;
-(void)publishHandout:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handoutAttachmentForDocumentURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addCollection:(id)arg1 ;
-(void)removeCollection:(id)arg1 ;
-(void)addFavorite:(id)arg1 ;
-(void)removeFavorite:(id)arg1 ;
-(void)instructedClassesWithCompletion:(/*^block*/id)arg1 ;
-(void)personsInClassWithClassID:(id)arg1 role:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveClass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeClass:(id)arg1 ;
-(void)enrolledClassesWithCompletion:(/*^block*/id)arg1 ;
-(void)studentActivityForAttachmentsWithIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)canSearchRostersWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isSearchAllowed;
-(BOOL)shouldPerformSearchAPIOperation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)membersOfGroupWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)collaborationStatesForObjectWithID:(id)arg1 ownerPersonID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)collaborationStatesForObjectWithID:(id)arg1 ownerPersonID:(id)arg2 ;
-(void)publishCollaborationStateChanges:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)syncFetchSettingsForUserNotificationType:(long long)arg1 ;
-(BOOL)syncSetSettingsForUserNotificationType:(long long)arg1 settings:(id)arg2 ;
@end

