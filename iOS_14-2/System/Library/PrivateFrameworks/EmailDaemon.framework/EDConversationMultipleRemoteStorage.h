/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)storageName;
-(void)removeDictionaryForKey:(id)arg1 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isInitialized;
-(id)dictionaryRepresentation;
-(void)refresh;
-(void)setDataReplicationTransaction:(EDTransactionService *)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)setCloudKitStorage:(EDConversationRemoteCloudKitStorage *)arg1 ;
-(id<EDConversationRemoteStorageDelegate>)delegate;
-(void)setKvsStorage:(id<EDConversationRemoteStorage>)arg1 ;
-(NSObject*<OS_dispatch_queue>)privateQueue;
-(void)conversationRemoteStorageDidInitialize:(id)arg1 ;
-(void)conversationRemoteStorageDidResetData:(id)arg1 ;
-(EDTransactionService *)dataReplicationTransaction;
-(id<EDConversationRemoteStorage>)kvsStorage;
-(void)_handleStorageReady:(id)arg1 ;
-(void)setDelegate:(id<EDConversationRemoteStorageDelegate>)arg1 ;
-(BOOL)synchronize;
-(id)initWithDelegate:(id)arg1 ;
-(void)conversationRemoteStorageWillResetData:(id)arg1 ;
-(void)_saveChanges:(id)arg1 fromStorage:(id)arg2 toStorage:(id)arg3 synchronize:(BOOL)arg4 ;
-(EDConversationRemoteCloudKitStorage *)cloudKitStorage;
-(void)setPrivateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_replicateAllContentFromStore:(id)arg1 toStore:(id)arg2 synchronize:(BOOL)arg3 ;
-(void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3 ;
@end

