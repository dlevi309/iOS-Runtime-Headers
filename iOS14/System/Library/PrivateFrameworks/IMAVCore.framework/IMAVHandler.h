/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
*/


@class NSMutableArray;

@interface IMAVHandler : NSObject {

	NSMutableArray* _pendingChats;
	NSMutableArray* _pendingLookups;

}
+(void)initialize;
+(void)ensureHandlerSetup;
-(void)_handleIncomingWithAccount:(id)arg1 fromHandle:(id)arg2 conference:(id)arg3 properites:(id)arg4 ;
-(void)account:(id)arg1 conference:(id)arg2 peerIDChangedFromID:(id)arg3 toID:(id)arg4 ;
-(void)account:(id)arg1 relay:(id)arg2 handleCancel:(id)arg3 fromPerson:(id)arg4 ;
-(void)account:(id)arg1 conference:(id)arg2 receivedAVMessage:(unsigned)arg3 from:(id)arg4 sessionID:(unsigned)arg5 userInfo:(id)arg6 ;
-(void)account:(id)arg1 avAction:(unsigned)arg2 withArguments:(id)arg3 toAVChat:(id)arg4 isVideo:(BOOL)arg5 ;
-(void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3 ;
-(void)account:(id)arg1 conference:(id)arg2 peerID:(id)arg3 propertiesUpdated:(id)arg4 ;
-(void)account:(id)arg1 conference:(id)arg2 receivedCancelInvitationFrom:(id)arg3 properties:(id)arg4 ;
-(void)pendingVCRequestComplete;
-(void)account:(id)arg1 conference:(id)arg2 invitationSentSuccessfully:(BOOL)arg3 ;
-(void)account:(id)arg1 conference:(id)arg2 receivedInvitationFrom:(id)arg3 properties:(id)arg4 ;
-(void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3 ;
-(void)_enqueueIMAVChatForNetworkActivation:(id)arg1 ;
-(void)account:(id)arg1 conference:(id)arg2 changedToNewConferenceID:(id)arg3 ;
-(void)account:(id)arg1 relay:(id)arg2 handleUpdate:(id)arg3 fromPerson:(id)arg4 ;
-(void)account:(id)arg1 conference:(id)arg2 receivedResponseToInvitationFrom:(id)arg3 properties:(id)arg4 ;
-(void)pendingACRequestComplete;
-(void)account:(id)arg1 relay:(id)arg2 handleInitate:(id)arg3 fromPerson:(id)arg4 ;
-(void)_notifyOfIncomingInvitationFor:(id)arg1 notifyInvitationListeners:(BOOL)arg2 ;
-(void)_handleIncomingAVChatForNotification:(id)arg1 ;
-(void)setupComplete;
-(void)vcCapabilitiesChanged:(unsigned long long)arg1 ;
-(void)account:(id)arg1 postedError:(id)arg2 ;
@end

