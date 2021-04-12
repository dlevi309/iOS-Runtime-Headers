/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDConversationRemoteStorageDelegate.h>
#import <libobjc.A.dylib/EDConversationRemoteStorage.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDConversationRemoteStorageDelegate, OS_dispatch_queue, EDConversationRemoteStorage;
@class NSObject, EDConversationRemoteCloudKitStorage, EDTransactionService, NSString;

@interface EDConversationMultipleRemoteStorage : NSObject <EDConversationRemoteStorageDelegate, EDConversationRemoteStorage, EFLoggable> {

	id<EDConversationRemoteStorageDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _privateQueue;
	id<EDConversationRemoteStorage> _kvsStorage;
	EDConversationRemoteCloudKitStorage* _cloudKitStorage;
	EDTransactionService* _dataReplicationTransaction;

}

@property (assign,nonatomic,__weak) id<EDConversationRemoteStorageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> privateQueue;                            //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) id<EDConversationRemoteStorage> kvsStorage;                           //@synthesize kvsStorage=_kvsStorage - In the implementation block
@property (nonatomic,retain) EDConversationRemoteCloudKitStorage * cloudKitStorage;                //@synthesize cloudKitStorage=_cloudKitStorage - In the implementation block
@property (nonatomic,retain) EDTransactionService * dataReplicationTransaction;                    //@synthesize dataReplicationTransaction=_dataReplicationTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(BOOL)synchronize;
-(id<EDConversationRemoteStorageDelegate>)delegate;
-(void)setDelegate:(id<EDConversationRemoteStorageDelegate>)arg1 ;
-(id)dictionaryRepresentation;
-(id)dictionaryForKey:(id)arg1 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)refresh;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)isInitialized;
-(NSObject*<OS_dispatch_queue>)privateQueue;
-(void)setPrivateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setKvsStorage:(id<EDConversationRemoteStorage>)arg1 ;
-(void)setCloudKitStorage:(EDConversationRemoteCloudKitStorage *)arg1 ;
-(void)setDataReplicationTransaction:(EDTransactionService *)arg1 ;
-(EDConversationRemoteCloudKitStorage *)cloudKitStorage;
-(id<EDConversationRemoteStorage>)kvsStorage;
-(void)removeDictionaryForKey:(id)arg1 ;
-(EDTransactionService *)dataReplicationTransaction;
-(void)_saveChanges:(id)arg1 fromStorage:(id)arg2 toStorage:(id)arg3 synchronize:(BOOL)arg4 ;
-(void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3 ;
-(void)_replicateAllContentFromStore:(id)arg1 toStore:(id)arg2 synchronize:(BOOL)arg3 ;
-(void)_handleStorageReady:(id)arg1 ;
-(void)conversationRemoteStorageDidInitialize:(id)arg1 ;
-(void)conversationRemoteStorageWillResetData:(id)arg1 ;
-(void)conversationRemoteStorageDidResetData:(id)arg1 ;
-(id)storageName;
@end

