/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@protocol IMRemoteDaemonProtocol;
@class IMDaemonController;

@interface IMOneTimeCodeAccelerator : NSObject {

	BOOL _requestedOneTimeCodeStatusForConnection;
	IMDaemonController*<IMRemoteDaemonProtocol> _daemon;
	/*^block*/id _updateBlock;

}

@property (nonatomic,retain) IMDaemonController*<IMRemoteDaemonProtocol> daemon;              //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,copy) id updateBlock;                                                    //@synthesize updateBlock=_updateBlock - In the implementation block
@property (assign,nonatomic) BOOL requestedOneTimeCodeStatusForConnection;                    //@synthesize requestedOneTimeCodeStatusForConnection=_requestedOneTimeCodeStatusForConnection - In the implementation block
-(void)setDaemon:(IMDaemonController*<IMRemoteDaemonProtocol>)arg1 ;
-(void)setRequestedOneTimeCodeStatusForConnection:(BOOL)arg1 ;
-(IMDaemonController*<IMRemoteDaemonProtocol>)daemon;
-(id)initWithBlockForUpdates:(/*^block*/id)arg1 ;
-(void)daemonControllerDidConnect;
-(void)_incomingCodeUpdateFromDaemon:(id)arg1 ;
-(id)initWithDaemon:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(BOOL)requestedOneTimeCodeStatusForConnection;
-(void)setUpConnectionToDaemaon;
-(void)daemonConnectionLost;
-(void)consumeCodeWithGuid:(id)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
-(void)daemonControllerWillConnect;
-(void)daemonControllerDidDisconnect;
-(void)dealloc;
@end

