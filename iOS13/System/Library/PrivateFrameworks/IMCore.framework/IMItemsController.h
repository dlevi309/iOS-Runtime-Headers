/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


#import <IMCore/IMCore-Structs.h>
@class NSArray;

@interface IMItemsController : NSObject {

	CFArrayRef _items;
	unsigned long long _capacity;

}

@property (nonatomic,copy,readonly) NSArray * _items; 
@property (assign,nonatomic) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) BOOL isMoreToLoad; 
+(id)_charactersToIgnoreWhenParsingTextContent;
-(id)init;
-(void)dealloc;
-(unsigned long long)capacity;
-(void)setCapacity:(unsigned long long)arg1 ;
-(NSArray *)_items;
-(void)_removeItem:(id)arg1 ;
-(void)_removeAllItems;
-(void)_itemsDidChange:(id)arg1 ;
-(id)_initWithItems:(id)arg1 ;
-(BOOL)_trimIfNeeded;
-(void)assignSortIDsToItems:(id)arg1 shouldRecalculateSortIDForAllMessages:(BOOL)arg2 ;
-(BOOL)_shouldPinUnsentMessagesToBottom;
-(void)assignSortIDsToItems:(id)arg1 ;
-(void)_replaceStaleTypingMessage;
-(void)_replaceItems:(id)arg1 ;
-(id)_lastIncomingFinishedMessageWithTextContent;
-(BOOL)isMoreToLoad;
-(void)_handleItem:(id)arg1 ;
-(void)_resortItems;
-(void)_setSortID:(id)arg1 ;
-(unsigned long long)_indexOfItem:(id)arg1 ;
-(id)_member:(id)arg1 ;
-(id)_itemForGUID:(id)arg1 ;
-(id)_typingMessage;
-(id)_firstMessage;
-(id)_lastMessage;
-(id)_lastSentMessage;
-(id)_lastFinishedMessage;
-(id)_lastIncomingMessage;
-(id)_lastIncomingFinishedMessage;
-(id)_lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1 ;
@end

