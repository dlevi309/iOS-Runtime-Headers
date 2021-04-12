/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class _PASLRUCache;

@interface SGQRConversationTracker : NSObject {

	_PASLRUCache* _conversations;

}
+(id)instance;
-(id)init;
-(void)clear;
-(id)conversationForContext:(id)arg1 ;
-(id)addMessage:(id)arg1 forContext:(id)arg2 time:(id)arg3 ;
@end

