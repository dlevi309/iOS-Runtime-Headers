/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<MSDAutosaveProtocol>)remoteService;
-(void)setRemoteService:(id<MSDAutosaveProtocol>)arg1 ;
-(NSString *)autosaveIdentifier;
-(id)initWithIdentifier:(id)arg1 remoteSession:(id)arg2 remoteService:(id)arg3 ;
-(void)didReconnectRemoteSession:(id)arg1 remoteService:(id)arg2 ;
-(void)remoteSessionDisconnectedWithError:(id)arg1 ;
-(void)setRemoteSession:(id<MSDAutosaveSessionProtocol>)arg1 ;
-(id<MSDAutosaveSessionProtocol>)remoteSession;
@end

