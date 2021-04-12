/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessageChatItem.h>
#import <IMCore/IMVisibleAssociatedMessageHost.h>

@class NSArray, NSAttributedString, NSString, IMMessageItem;

@interface IMMessagePartChatItem : IMMessageChatItem <IMVisibleAssociatedMessageHost> {

	NSAttributedString* _text;
	NSAttributedString* _fallbackCorruptText;
	long long _index;
	NSRange _messagePartRange;
	NSArray* _visibleAssociatedMessageChatItems;
	NSArray* _messageEditChatItems;
	BOOL _isBusiness;
	BOOL _chatInScrutinyMode;
	BOOL _whitelistedRichLinkSender;
	unsigned long long _replyCount;

}

@property (assign,nonatomic) NSRange messagePartRange;                                                                               //@synthesize messagePartRange=_messagePartRange - In the implementation block
@property (assign,nonatomic) BOOL chatInScrutinyMode;                                                                                //@synthesize chatInScrutinyMode=_chatInScrutinyMode - In the implementation block
@property (assign,getter=isWhitelistedRichLinkSender,nonatomic) BOOL whitelistedRichLinkSender;                                      //@synthesize whitelistedRichLinkSender=_whitelistedRichLinkSender - In the implementation block
@property (assign,nonatomic) unsigned long long replyCount;                                                                          //@synthesize replyCount=_replyCount - In the implementation block
@property (nonatomic,readonly) long long index;                                                                                      //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * text;                                                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * fallbackCorruptText;                                                        //@synthesize fallbackCorruptText=_fallbackCorruptText - In the implementation block
@property (nonatomic,readonly) NSArray * messageEditChatItems;                                                                       //@synthesize messageEditChatItems=_messageEditChatItems - In the implementation block
@property (assign,nonatomic) BOOL isBusiness;                                                                                        //@synthesize isBusiness=_isBusiness - In the implementation block
@property (nonatomic,readonly) BOOL isCorrupt; 
@property (nonatomic,readonly) BOOL requiresSiriAttribution; 
@property (nonatomic,copy,readonly) NSString * threadIdentifier; 
@property (nonatomic,readonly) IMMessageItem * threadOriginator; 
@property (setter=_setVisibleAssociatedMessageChatItems:,nonatomic,retain) NSArray * visibleAssociatedMessageChatItems;              //@synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_newMessagePartsForMessageItem:(id)arg1 ;
+(id)_newMessagePartsForMessageItem:(id)arg1 shouldDisplayLink:(BOOL)arg2 isBusiness:(BOOL)arg3 parentChatIsSpam:(BOOL)arg4 hasKnownParticipants:(BOOL)arg5 ;
+(id)_defaultRichLinkWhiteList;
+(id)_additionalSupportedRichLinkSchemesForWhitelistedSender:(id)arg1 ;
+(BOOL)_isWhitelistedRichLinkSender:(id)arg1 isBusiness:(BOOL)arg2 ;
+(id)_richLinkRangesForMessageText:(id)arg1 sender:(id)arg2 isWhitelistedRichLinkSender:(BOOL)arg3 ;
+(BOOL)_isWhiteListedURL:(id)arg1 ;
+(BOOL)_supportsRichLinkURL:(id)arg1 forSender:(id)arg2 isWhitelistedRichLinkSender:(BOOL)arg3 ;
+(id)_guidForMessage:(id)arg1 url:(id)arg2 ;
+(BOOL)_shouldAggregateForTransferType:(id)arg1 ;
+(BOOL)isSiriEnabled;
+(id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2 indexesOfItemsDeleted:(id*)arg3 indexToRangeMapping:(id*)arg4 ;
-(NSString *)threadIdentifier;
-(long long)index;
-(id)transcriptText;
-(BOOL)chatInScrutinyMode;
-(BOOL)isCorrupt;
-(BOOL)canDelete;
-(BOOL)isBusiness;
-(NSRange)messagePartRange;
-(NSAttributedString *)fallbackCorruptText;
-(NSString *)description;
-(void)setIsBusiness:(BOOL)arg1 ;
-(BOOL)isWhitelistedRichLinkSender;
-(unsigned long long)replyCount;
-(NSAttributedString *)text;
-(NSArray *)visibleAssociatedMessageChatItems;
-(IMMessageItem *)threadOriginator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canSendMessageAcknowledgment;
-(BOOL)requiresSiriAttribution;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 visibleAssociatedMessageChatItems:(id)arg5 ;
-(void)setWhitelistedRichLinkSender:(BOOL)arg1 ;
-(id)_initWithItem:(id)arg1 index:(long long)arg2 messagePartRange:(NSRange)arg3 ;
-(void)_setVisibleAssociatedMessageChatItems:(id)arg1 ;
-(void)_setMessageEditChatItems:(id)arg1 ;
-(id)replyContextPreviewChatItemForReply:(id)arg1 ;
-(void)setMessagePartRange:(NSRange)arg1 ;
-(NSArray *)messageEditChatItems;
-(void)setChatInScrutinyMode:(BOOL)arg1 ;
-(void)setReplyCount:(unsigned long long)arg1 ;
@end

