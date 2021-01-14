/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class SGConversationTracker;

@interface SGTextMessageConversationTracker : NSObject {

	SGConversationTracker* _conversationTracker;

}
+(id)instance;
+(id)getMergedPrompt:(id)arg1 withParams:(id)arg2 ;
-(void)clear;
-(id)init;
-(id)conversationForIdentifier:(id)arg1 ;
-(id)addTextMessageItem:(id)arg1 ;
@end

