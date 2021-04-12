/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
*/

#import <SyncedDefaults/SyncedDefaults-Structs.h>
#import <SyncedDefaults/SYDRemotePreferencesSource.h>
#import <libobjc.A.dylib/SYDClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSXPCConnection, NSObject, NSURL;

@interface SYDClientToDaemonConnection : SYDRemotePreferencesSource <SYDClientProtocol> {

	BOOL _forceNilChangeDictionaryResponse;
	NSString* _storeIdentifier;
	long long _storeType;
	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSURL* _changeTokenURL;

}

@property (nonatomic,copy) NSString * storeIdentifier;                                //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (assign,nonatomic) long long storeType;                                     //@synthesize storeType=_storeType - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) id<SYDDaemonProtocol> synchronousDaemon; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSURL * changeTokenURL;                                  //@synthesize changeTokenURL=_changeTokenURL - In the implementation block
@property (assign,nonatomic) BOOL forceNilChangeDictionaryResponse;                   //@synthesize forceNilChangeDictionaryResponse=_forceNilChangeDictionaryResponse - In the implementation block
+(id)changeTokenURLForStoreIdentifier:(id)arg1 ;
+(void)processAccountChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned char)synchronize;
-(void)registerForSynchronizedDefaults;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(unsigned char)synchronizeForced:(unsigned char)arg1 ;
-(CFDictionaryRef)copyDictionary;
-(void)synchronizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)dictionaryRepresentation;
-(void)discardExternalChangesForChangeCount:(long long)arg1 ;
-(void*)getValueForKey:(CFStringRef)arg1 ;
-(unsigned char)hasExternalChanges;
-(id)copyExternalChangesWithChangeCount:(long long*)arg1 ;
-(void)scheduleRemoteSynchronization;
-(void)updateConfiguration;
-(void)unregisterForSynchronizedDefaults;
-(void)ping;
-(long long)maximumKeyCount;
-(long long)maximumKeyLength;
-(long long)maximumDataLengthPerKey;
-(long long)maximumTotalDataLength;
-(NSXPCConnection *)xpcConnection;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)storeIdentifier;
-(long long)storeType;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(void)setStoreType:(long long)arg1 ;
-(id)changeToken;
-(id)initWithStoreIdentifier:(id)arg1 type:(long long)arg2 ;
-(id<SYDDaemonProtocol>)synchronousDaemon;
-(void)logIfNecessaryForError:(id)arg1 ;
-(NSURL *)changeTokenURL;
-(BOOL)forceNilChangeDictionaryResponse;
-(void)processChangeDictionary:(id)arg1 ;
-(void)setChangeToken:(id)arg1 ;
-(id)asyncDaemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)storeDidChangeWithIdentifier:(id)arg1 type:(long long)arg2 changeDictionary:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)deleteDataFromDisk;
-(void)setChangeTokenURL:(NSURL *)arg1 ;
-(void)setForceNilChangeDictionaryResponse:(BOOL)arg1 ;
@end

