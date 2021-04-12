/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonChatItem.h>

@class NSArray, IMMessage, UIItemProvider;

@interface CKMessagePartChatItem : CKBalloonChatItem {

	NSArray* _visibleAssociatedMessageChatItems;

}

@property (nonatomic,copy,readonly) NSArray * messageAcknowledgments; 
@property (nonatomic,readonly) IMMessage * message; 
@property (nonatomic,readonly) char color; 
@property (nonatomic,copy,readonly) NSArray * pasteboardItems; 
@property (nonatomic,readonly) NSArray * visibleAssociatedMessageChatItems;              //@synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems - In the implementation block
@property (nonatomic,readonly) BOOL canSendMessageAcknowledgment; 
@property (nonatomic,readonly) NSRange messagePartRange; 
@property (nonatomic,readonly) BOOL hasMessageAcknowledgment; 
@property (nonatomic,readonly) BOOL hasStickers; 
@property (nonatomic,readonly) BOOL isCorrupt; 
@property (nonatomic,readonly) BOOL isBlackholed; 
@property (nonatomic,readonly) UIItemProvider * dragItemProvider; 
-(id)description;
-(id)time;
-(char)color;
-(IMMessage *)message;
-(id)sender;
-(BOOL)failed;
-(BOOL)canCopy;
-(BOOL)isFromMe;
-(BOOL)isCorrupt;
-(id)composition;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(void)configureBalloonView:(id)arg1 ;
-(NSArray *)pasteboardItems;
-(BOOL)canSendAsTextMessage;
-(NSArray *)visibleAssociatedMessageChatItems;
-(BOOL)shouldShowVotingView;
-(NSRange)messagePartRange;
-(BOOL)canForward;
-(UIItemProvider *)dragItemProvider;
-(BOOL)canSendMessageAcknowledgment;
-(BOOL)canAttachStickers;
-(BOOL)stickersSnapToPoint;
-(BOOL)hasMessageAcknowledgment;
-(id)votingCounts;
-(long long)selectedType;
-(BOOL)isBlackholed;
-(id)aggregateAcknowledgmentChatItem;
-(NSArray *)messageAcknowledgments;
-(BOOL)_isSURFRelatedMessage;
-(BOOL)hasStickers;
@end

