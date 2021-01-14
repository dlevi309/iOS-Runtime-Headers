/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@protocol IMChatItemRules <NSObject>
@required
-(id)_items;
-(id)_chatItems;
-(void)_setItems:(id)arg1;
-(id)_initWithChat:(id)arg1;
-(void)_setNextStaleTime:(id)arg1;
-(id)_nextStaleTime;
-(id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
-(BOOL)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;
-(void)_didProcessChatItems:(id)arg1;
-(BOOL)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
-(BOOL)_shouldReloadChatItemWithAssociatedChatItems:(id)arg1 oldAssociatedChatItems:(id)arg2;
-(id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2 indexesOfItemsDeleted:(id*)arg3 indexToRangeMapOfItemsDeleted:(id*)arg4;

@end

