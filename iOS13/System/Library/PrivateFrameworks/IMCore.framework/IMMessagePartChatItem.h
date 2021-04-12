/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessageChatItem.h>
#import <IMCore/IMVisibleAssociatedMessageHost.h>

@class NSArray, NSAttributedString, NSString;

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

}

@property (assign,nonatomic) long long index;                                                                                        //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) NSRange messagePartRange;                                                                               //@synthesize messagePartRange=_messagePartRange - In the implementation block
@property (assign,nonatomic) BOOL chatInScrutinyMode;                                                                                //@synthesize chatInScrutinyMode=_chatInScrutinyMode - In the implementation block
@property (assign,getter=isWhitelistedRichLinkSender,nonatomic) BOOL whitelistedRichLinkSender;                                      //@synthesize whitelistedRichLinkSender=_whitelistedRichLinkSender - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * text;                                                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * fallbackCorruptText;                                                        //@synthesize fallbackCorruptText=_fallbackCorruptText - In the implementation block
@property (nonatomic,readonly) NSArray * messageEditChatItems;                                                                       //@synthesize messageEditChatItems=_messageEditChatItems - In the implementation block
@property (assign,nonatomic) BOOL isBusiness;                                                                                        //@synthesize isBusiness=_isBusiness - In the implementation block
@property (nonatomic,readonly) BOOL isCorrupt; 
@property (nonatomic,readonly) BOOL requiresSiriAttribution; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setVisibleAssociatedMessageChatItems:,nonatomic,retain) NSArray * visibleAssociatedMessageChatItems;              //@synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems - In the implementation block
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
+(id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)index;
-(NSAttributedString *)text;
-(void)setIndex:(long long)arg1 ;
-(BOOL)isCorrupt;
-(BOOL)canDelete;
-(BOOL)isBusiness;
-(NSArray *)visibleAssociatedMessageChatItems;
-(id)transcriptText;
-(NSRange)messagePartRange;
-(BOOL)canSendMessageAcknowledgment;
-(NSAttributedString *)fallbackCorruptText;
-(BOOL)chatInScrutinyMode;
-(BOOL)isWhitelistedRichLinkSender;
-(void)setIsBusiness:(BOOL)arg1 ;
-(BOOL)requiresSiriAttribution;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 visibleAssociatedMessageChatItems:(id)arg5 ;
-(void)setWhitelistedRichLinkSender:(BOOL)arg1 ;
-(id)_initWithItem:(id)arg1 messagePartRange:(NSRange)arg2 ;
-(void)_setVisibleAssociatedMessageChatItems:(id)arg1 ;
-(void)_setMessageEditChatItems:(id)arg1 ;
-(void)setMessagePartRange:(NSRange)arg1 ;
-(NSArray *)messageEditChatItems;
-(void)setChatInScrutinyMode:(BOOL)arg1 ;
@end

