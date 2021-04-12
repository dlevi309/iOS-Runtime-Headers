/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IMAVChat *)avChat;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)_inviteDelivered;
-(BOOL)isLocalParticipant;
-(id)initWithDictionary:(id)arg1 chat:(id)arg2 ;
@end

