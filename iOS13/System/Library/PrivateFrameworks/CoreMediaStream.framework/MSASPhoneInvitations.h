/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(MSASAlbum *)album;
-(MSASStateMachine *)stateMachine;
-(void)setStateMachine:(MSASStateMachine *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)setAlbum:(MSASAlbum *)arg1 ;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
-(void)addPendingPhoneInvitations:(id)arg1 toOwnedAlbum:(id)arg2 inStateMachin:(id)arg3 ;
-(void)removeSharingRelationships:(id)arg1 forAlbum:(id)arg2 ;
-(NSMutableDictionary *)sendMessageIdentifierToPhone;
-(void)setSendMessageIdentifierToPhone:(NSMutableDictionary *)arg1 ;
@end

