/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSXPCServerProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSURL, NSManagedObjectModel, NSDictionary, NSObject, NSArray, NSXPCListener, NSXPCStoreServerRequestHandlingPolicy, NSMapTable, NSString;

@interface NSXPCStoreServer : NSObject <NSXPCServerProtocol, NSXPCListenerDelegate> {

	id _delegate;
	NSURL* _modelURL;
	NSManagedObjectModel* _model;
	NSURL* _storeURL;
	NSDictionary* _storeOptions;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _entitlementNames;
	NSXPCListener* _listener;
	NSXPCStoreServerRequestHandlingPolicy* _policy;
	NSMapTable* _connectionToCoordinatorMap;
	BOOL _postRemoteChangeNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(unsigned long long)debugDefault;
-(void)dealloc;
-(id)delegate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
-(id)initForStoreWithURL:(id)arg1 usingModel:(id)arg2 options:(id)arg3 policy:(id)arg4 ;
-(BOOL)errorIsPlausiblyAnSQLiteIssue:(id)arg1 ;
-(BOOL)setupRecoveryForConnectionContext:(id)arg1 ifNecessary:(id)arg2 ;
-(id)_createCoordinator;
-(void)removeCachesForConnection:(id)arg1 ;
-(id)retainedCacheForConnection:(id)arg1 ;
-(oneway void)handleRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)handleMetadataRequestInContext:(id)arg1 ;
-(id)handleFetchRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handleSaveRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)postRemoteChangeNotificationForContext:(id)arg1 ;
-(id)handleObtainRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handleFaultRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handleRelationshipFaultRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handleNotificationNameRequestInContext:(id)arg1 error:(id*)arg2 ;
-(id)handleQueryGenerationRequestInContext:(id)arg1 error:(id*)arg2 ;
-(id)handleQueryGenerationReopenRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handleQueryGenerationReleaseRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handleBatchDeleteRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handlePersistentHistoryRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handlePersistentHistoryTokenRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handleBatchUpdateRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)handleBatchInsertRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)initForStoreWithURL:(id)arg1 usingModelAtURL:(id)arg2 options:(id)arg3 policy:(id)arg4 ;
-(id)errorHandlingDelegate;
-(void)setErrorHandlingDelegate:(id)arg1 ;
-(void)startListening;
-(void)stopListening;
-(id)requestHandlingPolicy;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
-(id)localGenerationForXPCToken:(id)arg1 withContext:(id)arg2 ;
-(void)_populateObject:(id)arg1 withValuesFromClient:(id)arg2 ;
-(id)unpackQueryGeneration:(id)arg1 withContext:(id)arg2 ;
-(id)retainedXPCEncodableGenerationTokenForOriginal:(id)arg1 inContext:(id)arg2 ;
@end

