/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/


@protocol MSConversationDelegate;
@class NSUUID, NSString, NSData, MSMessage, NSArray, _MSMessageAppContext;

@interface MSConversation : NSObject {

	NSUUID* _identifier;
	NSString* _conversationIdentifier;
	NSData* _engramID;
	MSMessage* _selectedMessage;
	NSUUID* _localParticipantIdentifier;
	NSArray* _remoteParticipantIdentifiers;
	_MSMessageAppContext* _context;
	NSArray* _draftAssetArchives;
	NSString* _senderAddress;
	NSString* _iMessageLoginID;
	NSArray* _recipientAddresses;
	id<MSConversationDelegate> _delegate;

}

@property (nonatomic,retain) MSMessage * selectedMessage;                             //@synthesize selectedMessage=_selectedMessage - In the implementation block
@property (nonatomic,retain) NSArray * remoteParticipantIdentifiers;                  //@synthesize remoteParticipantIdentifiers=_remoteParticipantIdentifiers - In the implementation block
@property (nonatomic,retain) _MSMessageAppContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSArray * draftAssetArchives;                     //@synthesize draftAssetArchives=_draftAssetArchives - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * conversationIdentifier;                     //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * engramID;                                     //@synthesize engramID=_engramID - In the implementation block
@property (nonatomic,readonly) NSString * senderAddress;                              //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,readonly) NSString * iMessageLoginID;                            //@synthesize iMessageLoginID=_iMessageLoginID - In the implementation block
@property (nonatomic,readonly) NSArray * recipientAddresses;                          //@synthesize recipientAddresses=_recipientAddresses - In the implementation block
@property (assign,nonatomic,__weak) id<MSConversationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * localParticipantIdentifier;                   //@synthesize localParticipantIdentifier=_localParticipantIdentifier - In the implementation block
+(id)activeConversation;
-(id<MSConversationDelegate>)delegate;
-(void)setDelegate:(id<MSConversationDelegate>)arg1 ;
-(NSUUID *)identifier;
-(_MSMessageAppContext *)context;
-(void)setContext:(_MSMessageAppContext *)arg1 ;
-(NSArray *)recipientAddresses;
-(NSString *)conversationIdentifier;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)recipientIdentifiers;
-(id)senderIdentifier;
-(NSString *)senderAddress;
-(void)insertSticker:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSData *)engramID;
-(MSMessage *)selectedMessage;
-(NSString *)iMessageLoginID;
-(NSArray *)draftAssetArchives;
-(void)_removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateWithState:(id)arg1 ;
-(id)_initWithState:(id)arg1 context:(id)arg2 ;
-(void)insertMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)insertMediaAtURL:(id)arg1 attributionURL:(id)arg2 attributionIcon:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateMessagePayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unstageAllItems;
-(void)insertMediaAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)insertImage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)insertStickerWithImage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)insertStickerWithMediaAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)inputMessagePayload;
-(void)setRemoteParticipantIdentifiers:(NSArray *)arg1 ;
-(void)setSelectedMessage:(MSMessage *)arg1 ;
-(void)_insertMessage:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_insertMessage:(id)arg1 localizedChangeDescription:(id)arg2 skipShelf:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_insertText:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_insertAttachment:(id)arg1 withAlternateFilename:(id)arg2 skipShelf:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_insertRichLink:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_insertSticker:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_insertAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSUUID *)localParticipantIdentifier;
-(NSArray *)remoteParticipantIdentifiers;
-(void)insertMessage:(id)arg1 localizedChangeDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)insertText:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)insertAttachment:(id)arg1 withAlternateFilename:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)insertRichLink:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendMessage:(id)arg1 localizedChangeDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendText:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendAttachment:(id)arg1 withAlternateFilename:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendRichLink:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendSticker:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_insertAttachment:(id)arg1 adamID:(id)arg2 appName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_insertAssetArchive:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_sendAssetArchive:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stageMessage:(id)arg1 localizedChangeDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

