/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class _PASLRUCache;

@interface SGContactAggregator : NSObject {

	_PASLRUCache* _cachedContacts;

}
+(id)mergeContact:(id)arg1 withContact:(id)arg2 ;
+(id)messageIdentifiersGeneratingContact:(id)arg1 ;
-(void)clear;
-(id)init;
-(void)removeContact:(id)arg1 ;
-(void)clearContactsWithConversationIdentifier:(id)arg1 ;
-(id)augmentSuggestedContactWithContact:(id)arg1 conversationId:(id)arg2 handle:(id)arg3 ;
@end

