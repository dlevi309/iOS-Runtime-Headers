/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class MSASStateMachine, MSASAlbum, IDSService, NSMutableDictionary, NSString;

@interface MSASPhoneInvitations : NSObject <IDSServiceDelegate> {

	MSASStateMachine* _stateMachine;
	MSASAlbum* _album;
	IDSService* _idsService;
	NSMutableDictionary* _sendMessageIdentifierToPhone;

}

@property (nonatomic,retain) MSASStateMachine * stateMachine;                                 //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) MSASAlbum * album;                                               //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) IDSService * idsService;                                         //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sendMessageIdentifierToPhone;              //@synthesize sendMessageIdentifierToPhone=_sendMessageIdentifierToPhone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)init;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
-(void)setStateMachine:(MSASStateMachine *)arg1 ;
-(MSASStateMachine *)stateMachine;
-(void)setAlbum:(MSASAlbum *)arg1 ;
-(MSASAlbum *)album;
-(void)addPendingPhoneInvitations:(id)arg1 toOwnedAlbum:(id)arg2 inStateMachin:(id)arg3 ;
-(void)removeSharingRelationships:(id)arg1 forAlbum:(id)arg2 ;
-(NSMutableDictionary *)sendMessageIdentifierToPhone;
-(void)setSendMessageIdentifierToPhone:(NSMutableDictionary *)arg1 ;
@end

