/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
*/


@class NSDictionary, IMAVChatProxy, NSString, IMAVChat;

@interface IMAVChatParticipantProxy : NSObject {

	NSDictionary* _info;
	IMAVChatProxy* _chat;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL _inviteDelivered; 
@property (nonatomic,readonly) IMAVChat * avChat; 
-(NSString *)name;
-(void)forwardInvocation:(id)arg1 ;
-(IMAVChat *)avChat;
-(BOOL)_inviteDelivered;
-(BOOL)isLocalParticipant;
-(id)initWithDictionary:(id)arg1 chat:(id)arg2 ;
@end

