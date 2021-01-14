/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class _PASLRUCache;

@interface SGConversationTracker : NSObject {

	_PASLRUCache* _conversations;

}
+(id)instance;
+(id)getMergedPromptForMessage:(id)arg1 conversationTurns:(id)arg2 maxPromptLength:(unsigned long long)arg3 maxPromptWindowSeconds:(double)arg4 promptJoiningString:(id)arg5 ;
+(id)sgConversationTurnsForStrings:(id)arg1 ;
-(void)clear;
-(id)init;
-(id)addMessage:(id)arg1 ;
-(id)conversationForSenderID:(id)arg1 ;
@end

