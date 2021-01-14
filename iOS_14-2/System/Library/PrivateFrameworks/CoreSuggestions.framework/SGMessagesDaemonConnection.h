/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol SGDSuggestManagerMessagesProtocol;
@class NSMutableDictionary;

@interface SGMessagesDaemonConnection : NSObject {

	NSMutableDictionary* _contextSent;
	id<SGDSuggestManagerMessagesProtocol> _remoteSuggestionManager;

}
-(void)setManagerForTesting:(id)arg1 ;
-(void)connectionInterrupted;
-(id)initWithDaemonConnection:(id)arg1 ;
-(BOOL)hasContextBeenSentForConversation:(id)arg1 ;
-(void)didSendContextForConversation:(id)arg1 ;
-(id)remoteSuggestionManager;
-(void)dealloc;
@end

