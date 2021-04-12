/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDConversationRemoteStorage.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDConversationRemoteStorageDelegate, OS_dispatch_queue;
@class NSUbiquitousKeyValueStore, NSObject, NSString;

@interface EDConversationRemoteKVSStorage : NSObject <EDConversationRemoteStorage, EFLoggable> {

	BOOL _initialized;
	id<EDConversationRemoteStorageDelegate> _delegate;
	NSUbiquitousKeyValueStore* _kvStore;
	NSObject*<OS_dispatch_queue> _privateQueue;

}

@property (assign,nonatomic,__weak) id<EDConversationRemoteStorageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSUbiquitousKeyValueStore * kvStore;                                  //@synthesize kvStore=_kvStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> privateQueue;                            //@synthesize privateQueue=_privateQueue - In the implementation block
@property (assign,getter=isInitialized,nonatomic) BOOL initialized;                                //@synthesize initialized=_initialized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(BOOL)synchronize;
-(id<EDConversationRemoteStorageDelegate>)delegate;
-(void)setDelegate:(id<EDConversationRemoteStorageDelegate>)arg1 ;
-(BOOL)initialized;
-(id)dictionaryRepresentation;
-(id)dictionaryForKey:(id)arg1 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)refresh;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)isInitialized;
-(void)setInitialized:(BOOL)arg1 ;
-(void)_storeChangedExternally:(id)arg1 ;
-(NSUbiquitousKeyValueStore *)kvStore;
-(NSObject*<OS_dispatch_queue>)privateQueue;
-(void)setPrivateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeDictionaryForKey:(id)arg1 ;
-(id)storageName;
-(id)subsetOfMessageIDsToSyncFromMessageIDString:(id)arg1 ;
-(void)setKvStore:(NSUbiquitousKeyValueStore *)arg1 ;
@end

