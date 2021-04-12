/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/


@class NSLock, NSXPCInterface, NSXPCConnection;

@interface MSXPCService : NSObject {

	NSLock* _lock;
	NSXPCInterface* _remoteObjectInterface;
	NSXPCConnection* _connection;
	BOOL _shouldLaunchMobileMail;

}

@property (assign,nonatomic) BOOL shouldLaunchMobileMail;              //@synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail - In the implementation block
+(id)remoteProxyForXPCInterface:(id)arg1 shouldLaunchMobileMail:(BOOL)arg2 connectionErrorHandler:(/*^block*/id)arg3 ;
+(id)remoteProxyForXPCInterface:(id)arg1 connectionErrorHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)connection;
-(void)setShouldLaunchMobileMail:(BOOL)arg1 ;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(BOOL)shouldLaunchMobileMail;
@end

