/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol IMDMessagePTaskStore;
@class NSString;

@interface IMDChatStore : NSObject {

	NSString* _lastModificationStamp;
	id<IMDMessagePTaskStore> _messagePTaskStore;

}

@property (retain) NSString * modificationStamp;                            //@synthesize lastModificationStamp=_lastModificationStamp - In the implementation block
@property (retain) id<IMDMessagePTaskStore> messagePTaskStore;              //@synthesize messagePTaskStore=_messagePTaskStore - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_chatRegistry;
-(void)setModificationStamp:(NSString *)arg1 ;
-(id)chatsGUIDsForMessageWithGUID:(id)arg1 ;
-(id)chatsGUIDsForMessageWithIdentifier:(long long)arg1 ;
-(NSString *)modificationStamp;
-(void)_updateModificationDate;
-(id)storeChat:(id)arg1 ;
-(unsigned long long)unreadCountForChat:(id)arg1 ;
-(void)deleteChat:(id)arg1 ;
-(void)addMessageWithGUID:(id)arg1 toChat:(id)arg2 ;
-(void)removeMessageWithGUID:(id)arg1 fromChat:(id)arg2 ;
-(void)addMessageWithGUID:(id)arg1 toChat:(id)arg2 deferSpotlightIndexing:(BOOL)arg3 ;
-(id)loadAllChats;
-(id)newestChatWithOriginalGroupID:(id)arg1 onService:(id)arg2 ;
-(BOOL)updateHandle:(id)arg1 forMessage:(id)arg2 WithPC:(id)arg3 onService:(id)arg4 ;
-(void)_broadcastUpdateForMergedChatWithPersonCentricIDIfNeeded:(id)arg1 updatedHandleID:(id)arg2 ;
-(void)archiveChat:(id)arg1 ;
-(void)unarchiveChat:(id)arg1 ;
-(void)blackholeChat:(id)arg1 ;
-(void)unblackholeChat:(id)arg1 ;
-(id)chatsWithHandle:(id)arg1 onService:(id)arg2 ;
-(id)chatsWithRoomname:(id)arg1 onService:(id)arg2 ;
-(void)remapMessageError:(unsigned)arg1 toError:(unsigned)arg2 forChat:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setChatIsFiltered:(BOOL)arg1 withChatGuid:(id)arg2 ;
-(BOOL)updatePersonCentricIDForHandlesInChatWithMessage:(id)arg1 fromIdentifier:(id)arg2 personCentricID:(id)arg3 chat:(id)arg4 ;
-(id)_allHandlesOnAllChats;
-(void)_broadcastToForceReloadChats;
-(id<IMDMessagePTaskStore>)messagePTaskStore;
-(void)setMessagePTaskStore:(id<IMDMessagePTaskStore>)arg1 ;
@end

