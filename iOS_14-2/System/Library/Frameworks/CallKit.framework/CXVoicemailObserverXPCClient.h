/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/CXVoicemailObserverDataSource.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSMutableDictionary, NSHashTable, NSXPCConnection, NSString;

@interface CXVoicemailObserverXPCClient : NSObject <CXVoicemailObserverDataSource> {

	int _notifyToken;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _mutableVoicemailUUIDToVoicemailMap;
	NSHashTable* _delegates;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSMutableDictionary * mutableVoicemailUUIDToVoicemailMap;              //@synthesize mutableVoicemailUUIDToVoicemailMap=_mutableVoicemailUUIDToVoicemailMap - In the implementation block
@property (nonatomic,readonly) NSHashTable * delegates;                                               //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) int notifyToken;                                                       //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * voicemailUUIDToVoicemailMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedXPCClientSemaphore;
+(void)releaseSharedXPCClient;
+(id)sharedXPCClient;
-(NSHashTable *)delegates;
-(void)_invalidate;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id)init;
-(int)notifyToken;
-(void)requestTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSXPCConnection *)connection;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_init;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 isSynchronous:(BOOL)arg2 ;
-(void)dealloc;
-(void)_requestVoicemails;
-(NSMutableDictionary *)mutableVoicemailUUIDToVoicemailMap;
-(NSDictionary *)voicemailUUIDToVoicemailMap;
-(void)_addOrUpdateVoicemails:(id)arg1 ;
-(void)_removeVoicemails:(id)arg1 ;
-(oneway void)addOrUpdateVoicemails:(id)arg1 ;
-(oneway void)removeVoicemails:(id)arg1 ;
@end

