/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <libobjc.A.dylib/TURouteControllerDelegate.h>
#import <libobjc.A.dylib/TUConversationMediaControllerDelegate.h>
#import <libobjc.A.dylib/TUConversationManagerDelegate.h>

@interface ConversationKit.CallCenter : NSObject <TURouteControllerDelegate, TUConversationMediaControllerDelegate, TUConversationManagerDelegate> {

	 tuCallCenter;
	 delegate;

}
-(void)routesChangedForRouteController:(id)arg1 ;
-(void)mediaController:(id)arg1 participantMediaPrioritiesChangedForConversation:(id)arg2 ;
-(void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2 ;
-(void)conversationManager:(id)arg1 localVideoToggledForConversation:(id)arg2 ;
-(void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2 ;
-(void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2 ;
-(id)init;
@end

