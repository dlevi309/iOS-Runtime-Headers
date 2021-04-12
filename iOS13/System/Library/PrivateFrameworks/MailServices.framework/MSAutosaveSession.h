/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/


@protocol MSDAutosaveSessionProtocol, MSDAutosaveProtocol;
@class NSString;

@interface MSAutosaveSession : NSObject {

	NSString* _autosaveIdentifier;
	id<MSDAutosaveSessionProtocol> _remoteSession;
	id<MSDAutosaveProtocol> _remoteService;

}

@property (nonatomic,retain) id<MSDAutosaveSessionProtocol> remoteSession;              //@synthesize remoteSession=_remoteSession - In the implementation block
@property (nonatomic,retain) id<MSDAutosaveProtocol> remoteService;                     //@synthesize remoteService=_remoteService - In the implementation block
@property (nonatomic,copy,readonly) NSString * autosaveIdentifier;                      //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
+(id)log;
-(NSString *)autosaveIdentifier;
-(id<MSDAutosaveProtocol>)remoteService;
-(void)setRemoteService:(id<MSDAutosaveProtocol>)arg1 ;
-(id)initWithIdentifier:(id)arg1 remoteSession:(id)arg2 remoteService:(id)arg3 ;
-(void)didReconnectRemoteSession:(id)arg1 remoteService:(id)arg2 ;
-(void)remoteSessionDisconnectedWithError:(id)arg1 ;
-(void)setRemoteSession:(id<MSDAutosaveSessionProtocol>)arg1 ;
-(id<MSDAutosaveSessionProtocol>)remoteSession;
@end

