/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <libobjc.A.dylib/_CDUserContext.h>
#import <libobjc.A.dylib/_CDContextInternal.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableArray, _CDInMemoryContext, NSString;

@interface _CDInMemoryUserContext : NSObject <_CDUserContext, _CDContextInternal> {

	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _contexts;
	NSMutableArray* _pendingAllDeviceRegistrations;
	_CDInMemoryContext* _userContext;
	NSString* _localDeviceID;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                      //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contexts;                              //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingAllDeviceRegistrations;              //@synthesize pendingAllDeviceRegistrations=_pendingAllDeviceRegistrations - In the implementation block
@property (nonatomic,retain) _CDInMemoryContext * userContext;                            //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,retain) NSString * localDeviceID;                                    //@synthesize localDeviceID=_localDeviceID - In the implementation block
+(id)userContext;
-(BOOL)evaluatePredicate:(id)arg1 ;
-(id)allDevices;
-(id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2 ;
-(BOOL)hasKnowledgeOfContextualKeyPath:(id)arg1 ;
-(BOOL)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 ;
-(id)lastModifiedDateForContextualKeyPath:(id)arg1 ;
-(id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2 ;
-(id)objectForContextualKeyPath:(id)arg1 ;
-(void)deregisterCallback:(id)arg1 ;
-(id)localContext;
-(void)registerCallback:(id)arg1 ;
-(_CDInMemoryContext *)userContext;
-(NSString *)localDeviceID;
-(BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(void)activateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2 ;
-(id)valuesForKeyPaths:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)unsafe_remoteUserContextProxySourceDeviceUUIDs;
-(id)unsafe_remoteDeviceIDsForRemoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(void)setContextValue:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(id)init;
-(id)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 valueDidChange:(BOOL*)arg4 ;
-(id)unsafe_multiDeviceRegistrationsByDeviceID;
-(BOOL)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)unsafe_multiDeviceRegistrations;
-(id)unsafe_remoteDeviceIDs;
-(id)unsafe_remoteDevices;
-(void)setPendingAllDeviceRegistrations:(NSMutableArray *)arg1 ;
-(void)deactivateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2 ;
-(id)propertiesForContextualKeyPath:(id)arg1 ;
-(id)deviceWithDeviceID:(id)arg1 fromDevices:(id)arg2 ;
-(id)contextForDeviceWithDeviceID:(id)arg1 ;
-(BOOL)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 ;
-(id)description;
-(id)unsafe_remoteDevicesForRemoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(id)setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2 ;
-(id)namedDeviceIDsFromPredicate:(id)arg1 ;
-(id)remoteDeviceIDs;
-(id)unsafe_contextForDeviceWithDeviceID:(id)arg1 ;
-(id)unsafe_remoteDevicesByDeviceIDForRemoteUserContextProxySourceDeviceUUID:(id)arg1 ;
-(void)setUserContext:(_CDInMemoryContext *)arg1 ;
-(BOOL)hasMultiDeviceRegistrations;
-(void)setContexts:(NSMutableDictionary *)arg1 ;
-(void)setLocalDeviceID:(NSString *)arg1 ;
-(BOOL)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 ;
-(NSMutableArray *)pendingAllDeviceRegistrations;
-(BOOL)unsafe_hasMultiDeviceRegistrations;
-(NSMutableDictionary *)contexts;
-(id)allDeviceIDs;
-(id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2 removedObjects:(id*)arg3 ;
-(id)contextForKeyPath:(id)arg1 ;
@end

