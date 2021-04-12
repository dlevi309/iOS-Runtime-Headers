/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMChatItemRules.h>

@class IMChat, NSArray, NSMutableArray, NSDate, NSString;

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules> {

	IMChat* _chat;
	NSArray* _items;
	NSMutableArray* _chatItems;
	NSDate* _nextStaleTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)testShouldShowReportSpamForChat:(id)arg1 items:(id)arg2 ;
+(BOOL)testShouldShowSMSSpamForChat:(id)arg1 items:(id)arg2 ;
+(BOOL)testShouldAppendNumberChanged:(id)arg1 previousItem:(id)arg2 showAllChanges:(BOOL)arg3 ;
-(id)_items;
-(id)inlineReplyController;
-(BOOL)shouldShowRaiseMessageStatus;
-(id)_chatItems;
-(void)_setItems:(id)arg1 ;
-(id)_initWithChat:(id)arg1 ;
-(void)_setNextStaleTime:(id)arg1 ;
-(id)_nextStaleTime;
-(id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2 ;
-(BOOL)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3 ;
-(void)_didProcessChatItems:(id)arg1 ;
-(BOOL)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2 ;
-(BOOL)_shouldReloadChatItemWithAssociatedChatItems:(id)arg1 oldAssociatedChatItems:(id)arg2 ;
-(id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2 indexesOfItemsDeleted:(id*)arg3 indexToRangeMapOfItemsDeleted:(id*)arg4 ;
-(BOOL)_supportsContiguousChatItems;
-(BOOL)_hasEarlierMessagesToLoad;
-(BOOL)_hasRecentMessagesToLoad;
-(id)_filteredChatItemsForNewChatItems:(id)arg1 ;
-(BOOL)_shouldAppendDateForItem:(id)arg1 previousItem:(id)arg2 ;
-(BOOL)_shouldAppendServiceForItem:(id)arg1 previousItem:(id)arg2 chatStyle:(unsigned char)arg3 ;
-(BOOL)_shouldShowReportSpamForChat:(id)arg1 withItems:(id)arg2 ;
-(BOOL)_shouldAppendReplyContextForItem:(id)arg1 previousItem:(id)arg2 chatStyle:(unsigned char)arg3 ;
-(BOOL)_shouldAppendReplyCountIfNeeded;
-(id)testChatItems;
-(id)_chatItemsWithReplyCountsForNewChatItems:(id)arg1 parentItem:(id)arg2 threadOriginatorItem:(id)arg3 ;
-(id)chatItemForIMChatItem:(id)arg1 ;
-(id)_replyCountChatItemForChatItem:(id)arg1 parentItem:(id)arg2 threadIdentifier:(id)arg3 replyMessageGUID:(id)arg4 replyIsFromMe:(BOOL)arg5 threadOriginatorMessageItem:(id)arg6 ;
-(BOOL)shouldShowExpressiveMessageTextAsText:(id)arg1 ;
-(BOOL)_shouldShowEffectPlayButtonForMessage:(id)arg1 ;
-(id)_replyCountChatItemForChatItem:(id)arg1 parentItem:(id)arg2 threadOriginatorMessageItem:(id)arg3 ;
-(void)_processChatItemsForBreadcrumbs:(id)arg1 ;
-(void)_processChatItemsForReplayButton:(id)arg1 ;
-(void)_processChatItemsForAttribution:(id)arg1 ;
-(BOOL)_shouldDisplayAttributionInfo:(id)arg1 ;
-(id)_effectControlForChatItem:(id)arg1 ;
-(id)_attributionChatItemForChatItem:(id)arg1 ;
@end

