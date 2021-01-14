/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/PHAServiceOperationHandling.h>
#import <libobjc.A.dylib/PHAGraphRegistration.h>
#import <libobjc.A.dylib/PLPhotoAnalysisServiceProtocol.h>

@protocol OS_dispatch_group, OS_dispatch_semaphore;
@class NSString, NSMapTable, NSMutableArray, NSObject, PFDispatchQueue, PHAManager, NSXPCConnection, PHAExecutive, NSLock;

@interface PHAServiceClientHandler : NSObject <NSXPCConnectionDelegate, PHAServiceOperationHandling, PHAGraphRegistration, PLPhotoAnalysisServiceProtocol> {

	NSString* _clientBundleID;
	NSMapTable* _cancelableOperationsById;
	NSMutableArray* _clientHandlers;
	unsigned long long _graphLoadCount;
	NSObject*<OS_dispatch_group> _graphReady;
	PFDispatchQueue* _graphLoadQueue;
	PHAManager* _photoAnalysisManager;
	NSXPCConnection* _xpcConnection;
	PHAExecutive* _executive;
	NSObject*<OS_dispatch_semaphore> _invalidationSemaphore;
	id _serviceUnavailableHandler;
	NSLock* _sharedOperationLock;

}

@property (retain) NSXPCConnection * xpcConnection;                                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) PHAManager * photoAnalysisManager;                                   //@synthesize photoAnalysisManager=_photoAnalysisManager - In the implementation block
@property (__weak) PHAExecutive * executive;                                            //@synthesize executive=_executive - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> invalidationSemaphore;              //@synthesize invalidationSemaphore=_invalidationSemaphore - In the implementation block
@property (retain) id serviceUnavailableHandler;                                        //@synthesize serviceUnavailableHandler=_serviceUnavailableHandler - In the implementation block
@property (readonly) NSString * clientBundleID; 
@property (nonatomic,retain) NSLock * sharedOperationLock;                              //@synthesize sharedOperationLock=_sharedOperationLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)clientBundleID;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(BOOL)wantsLiveGraphUpdates;
-(id)serviceUnavailableHandler;
-(id)initWithXPCConnection:(id)arg1 executive:(id)arg2 ;
-(void)shutdown;
-(void)setInvalidationSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)init;
-(void)setSharedOperationLock:(NSLock *)arg1 ;
-(BOOL)wantsGraphUpdateNotifications;
-(NSLock *)sharedOperationLock;
-(void)graphBecameReady:(id)arg1 forPHAGraphManager:(id)arg2 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(id)cancelableOperationsById;
-(id)managerForInvocation:(id)arg1 contextInformation:(id)arg2 ;
-(NSString *)description;
-(PHAManager *)photoAnalysisManager;
-(void)setExecutive:(PHAExecutive *)arg1 ;
-(void)setPhotoAnalysisManager:(PHAManager *)arg1 ;
-(PHAExecutive *)executive;
-(void)setServiceUnavailableHandler:(id)arg1 ;
-(void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)handleOperation:(id)arg1 ;
-(void)graphUpdateIsConsistent;
-(void)graphUpdateMadeProgress:(double)arg1 ;
-(id)libraryURLFromContextInformation:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)invalidationSemaphore;
-(id)forwardingTargetForInvocation:(id)arg1 contextInformation:(id)arg2 ;
-(void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)unloadGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)isPhotos;
-(BOOL)isplphotosctl;
-(void)graphUpdateDidStop;
-(void)submitBlockToExecutiveStateQueue:(/*^block*/id)arg1 ;
-(void)loadGraphWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)contextInformationFromInvocation:(id)arg1 ;
@end

