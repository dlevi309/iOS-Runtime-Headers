/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDConversationRemoteStorageDelegate.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDUbiquitousConversationManagerDelegate, EDConversationRemoteStorage, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet, NSString;

@interface EDUbiquitousConversationManager : NSObject <EDConversationRemoteStorageDelegate, EFLoggable> {

	BOOL _initialized;
	id<EDUbiquitousConversationManagerDelegate> _delegate;
	id<EDConversationRemoteStorage> _cloudStorage;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _conversationIDsBySyncKey;
	NSMutableSet* _unmatchedKeys;

}

@property (assign,nonatomic,__weak) id<EDUbiquitousConversationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<EDConversationRemoteStorage> cloudStorage;                             //@synthesize cloudStorage=_cloudStorage - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * conversationIDsBySyncKey;                           //@synthesize conversationIDsBySyncKey=_conversationIDsBySyncKey - In the implementation block
@property (nonatomic,retain) NSMutableSet * unmatchedKeys;                                             //@synthesize unmatchedKeys=_unmatchedKeys - In the implementation block
@property (assign,nonatomic) BOOL initialized;                                                         //@synthesize initialized=_initialized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)_syncKeyForConversationID:(long long)arg1 ;
-(NSMutableSet *)unmatchedKeys;
-(id<EDUbiquitousConversationManagerDelegate>)delegate;
-(void)pruneDatabasePurgingOldestEntries:(BOOL)arg1 ;
-(void)setFlags:(unsigned long long)arg1 forConversations:(id)arg2 ;
-(BOOL)hasSubscribedConversations;
-(void)performDailyExportForChangedConversations:(id)arg1 ;
-(BOOL)initialized;
-(void)setCloudStorage:(id<EDConversationRemoteStorage>)arg1 ;
-(BOOL)_synchronize;
-(void)setDelegate:(id<EDUbiquitousConversationManagerDelegate>)arg1 ;
-(NSMutableDictionary *)conversationIDsBySyncKey;
-(id<EDConversationRemoteStorage>)cloudStorage;
-(id)initWithDelegate:(id)arg1 ;
-(void)setUnmatchedKeys:(NSMutableSet *)arg1 ;
-(void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_mergeServerChanges:(id)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(void)performInitialSync;
-(id)syncKeyForUpdatedConversation:(long long)arg1 flags:(unsigned long long)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_setCloudStorageValue:(id)arg1 forKey:(id)arg2 ;
-(void)setConversationIDsBySyncKey:(NSMutableDictionary *)arg1 ;
@end

