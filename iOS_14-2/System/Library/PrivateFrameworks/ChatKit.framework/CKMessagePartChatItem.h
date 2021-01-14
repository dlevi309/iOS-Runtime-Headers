/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonChatItem.h>

@class NSArray, IMMessage, NSString, IMMessageItem, NSItemProvider;

@interface CKMessagePartChatItem : CKBalloonChatItem {

	NSArray* _visibleAssociatedMessageChatItems;

}

@property (nonatomic,copy,readonly) NSArray * messageAcknowledgments; 
@property (nonatomic,readonly) IMMessage * message; 
@property (nonatomic,readonly) long long index; 
@property (nonatomic,readonly) char color; 
@property (nonatomic,readonly) NSArray * visibleAssociatedMessageChatItems;              //@synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems - In the implementation block
@property (nonatomic,readonly) BOOL canSendMessageAcknowledgment; 
@property (nonatomic,readonly) NSRange messagePartRange; 
@property (nonatomic,readonly) BOOL hasMessageAcknowledgment; 
@property (nonatomic,readonly) BOOL hasStickers; 
@property (nonatomic,readonly) BOOL isCorrupt; 
@property (nonatomic,readonly) BOOL isBlackholed; 
@property (nonatomic,readonly) BOOL isReply; 
@property (nonatomic,readonly) BOOL isReplyContextPreview; 
@property (nonatomic,readonly) NSString * threadIdentifier; 
@property (nonatomic,readonly) IMMessageItem * threadOriginator; 
@property (nonatomic,readonly) NSItemProvider * dragItemProvider; 
@property (nonatomic,readonly) NSArray * pasteboardItemProviders; 
-(NSString *)threadIdentifier;
-(long long)index;
-(id)time;
-(id)sender;
-(IMMessage *)message;
-(id)supplementaryItemsWithLayoutEnvironment:(id)arg1 ;
-(id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(NSRange)arg2 ;
-(char)color;
-(long long)selectedType;
-(id)votingCounts;
-(BOOL)isCorrupt;
-(BOOL)canAttachStickers;
-(BOOL)stickersSnapToPoint;
-(BOOL)isBlackholed;
-(NSRange)messagePartRange;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(BOOL)canForward;
-(void)configureBalloonView:(id)arg1 ;
-(id)description;
-(id)compositionWithContext:(id)arg1 ;
-(BOOL)failed;
-(BOOL)isReplyContextPreview;
-(BOOL)canInlineReply;
-(NSArray *)visibleAssociatedMessageChatItems;
-(NSArray *)pasteboardItemProviders;
-(BOOL)canSendAsTextMessage;
-(BOOL)shouldShowVotingView;
-(BOOL)isFromMe;
-(id)fileURLForAttachment;
-(NSItemProvider *)dragItemProvider;
-(BOOL)canCopy;
-(id)aggregateAcknowledgmentChatItem;
-(BOOL)hasMessageAcknowledgment;
-(NSArray *)messageAcknowledgments;
-(BOOL)hasStickers;
-(BOOL)_isSURFRelatedMessage;
-(unsigned long long)chatItemReplyLineContiguousTypeForChatStyle:(unsigned char)arg1 ;
-(IMMessageItem *)threadOriginator;
-(BOOL)isReply;
-(BOOL)canSendMessageAcknowledgment;
@end

