/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <libobjc.A.dylib/TUConversationManagerDelegate.h>
#import <libobjc.A.dylib/TUConversationMediaControllerDelegate.h>
#import <libobjc.A.dylib/TURouteControllerDelegate.h>

@interface ConversationKit.CallCenter : NSObject <TUConversationManagerDelegate, TUConversationMediaControllerDelegate, TURouteControllerDelegate> {

	 tuCallCenter;
	 delegate;

}
-(void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2 ;
-(void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2 ;
-(void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2 ;
-(void)routesChangedForRouteController:(id)arg1 ;
-(void)mediaController:(id)arg1 participantMediaPrioritiesChangedForConversation:(id)arg2 ;
-(void)conversationManager:(id)arg1 localVideoToggledForConversation:(id)arg2 ;
-(void)conversationManager:(id)arg1 addedActiveConversation:(id)arg2 ;
-(id)init;
@end

