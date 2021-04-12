/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMChatItemRules.h>

@class IMChat, NSArray, NSMutableArray, IMChatItem, NSString;

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules> {

	IMChat* _chat;
	NSArray* _items;
	NSMutableArray* _chatItems;
	IMChatItem* _nextStaleChatItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)testShouldShowReportSpamForChat:(id)arg1 items:(id)arg2 ;
+(BOOL)testShouldShowSMSSpamForChat:(id)arg1 items:(id)arg2 ;
+(BOOL)testShouldAppendNumberChanged:(id)arg1 previousItem:(id)arg2 showAllChanges:(BOOL)arg3 ;
-(id)_items;
-(void)_setItems:(id)arg1 ;
-(BOOL)shouldShowRaiseMessageStatus;
-(id)_chatItems;
-(id)_initWithChat:(id)arg1 ;
-(void)_didProcessChatItems:(id)arg1 ;
-(BOOL)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2 ;
-(id)_nextStaleChatItem;
-(void)_setNextStaleChatItem:(id)arg1 ;
-(id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2 ;
-(id)testChatItems;
-(id)chatItemForIMChatItem:(id)arg1 ;
-(BOOL)shouldShowExpressiveMessageTextAsText:(id)arg1 ;
-(BOOL)_shouldShowEffectPlayButtonForMessage:(id)arg1 ;
-(void)_processChatItemsForBreadcrumbs:(id)arg1 ;
-(BOOL)_shouldReloadChatItemWithAssociatedChatItems:(id)arg1 oldAssociatedChatItems:(id)arg2 ;
-(void)_processChatItemsForReplayButton:(id)arg1 ;
-(void)_processChatItemsForAttribution:(id)arg1 ;
-(BOOL)_shouldDisplayAttributionInfo:(id)arg1 ;
-(id)_effectControlForChatItem:(id)arg1 ;
-(id)_attributionChatItemForChatItem:(id)arg1 ;
-(id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2 ;
-(BOOL)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3 ;
@end

