/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol SGDSuggestManagerMessagesProtocol;
@class NSMutableDictionary;

@interface SGMessagesDaemonConnection : NSObject {

	NSMutableDictionary* _contextSent;
	id<SGDSuggestManagerMessagesProtocol> _remoteSuggestionManager;

}
-(void)dealloc;
-(void)connectionInterrupted;
-(id)initWithDaemonConnection:(id)arg1 ;
-(void)setManagerForTesting:(id)arg1 ;
-(BOOL)hasContextBeenSentForConversation:(id)arg1 ;
-(void)didSendContextForConversation:(id)arg1 ;
-(id)remoteSuggestionManager;
@end

