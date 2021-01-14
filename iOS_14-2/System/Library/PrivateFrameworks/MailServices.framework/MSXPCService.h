/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(id)remoteObjectProxy;
-(id)init;
-(id)newConnectionForInterface:(id)arg1 ;
-(void)setShouldLaunchMobileMail:(BOOL)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)connection;
-(BOOL)shouldLaunchMobileMail;
-(void)dealloc;
@end

