/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(IMDaemonController*<IMRemoteDaemonProtocol>)daemon;
-(void)setDaemon:(IMDaemonController*<IMRemoteDaemonProtocol>)arg1 ;
-(void)daemonControllerWillConnect;
-(void)daemonControllerDidDisconnect;
-(void)daemonConnectionLost;
-(void)daemonControllerDidConnect;
-(id)initWithDaemon:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(void)setUpConnectionToDaemaon;
-(void)_incomingCodeUpdateFromDaemon:(id)arg1 ;
-(id)initWithBlockForUpdates:(/*^block*/id)arg1 ;
-(void)consumeCodeWithGuid:(id)arg1 ;
-(BOOL)requestedOneTimeCodeStatusForConnection;
-(void)setRequestedOneTimeCodeStatusForConnection:(BOOL)arg1 ;
@end

