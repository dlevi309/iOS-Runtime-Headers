/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/SHXPCServiceProxy.h>

@protocol SHXPCFrameworkProxy, SHXPCServiceProxy;
@class NSXPCConnection;

@interface SHShazamXPCServiceProxyConnection : NSObject <SHXPCServiceProxy> {

	id<SHXPCFrameworkProxy> _matcherDelegate;
	NSXPCConnection* _connection;
	id<SHXPCServiceProxy> _proxy;
	/*^block*/id _connectionErrorHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<SHXPCServiceProxy> proxy;                                 //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,copy) id connectionErrorHandler;                                     //@synthesize connectionErrorHandler=_connectionErrorHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                        //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                        //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic,__weak) id<SHXPCFrameworkProxy> matcherDelegate;              //@synthesize matcherDelegate=_matcherDelegate - In the implementation block
-(void)setProxy:(id<SHXPCServiceProxy>)arg1 ;
-(id<SHXPCServiceProxy>)proxy;
-(void)setInterruptionHandler:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnectionErrorHandler:(id)arg1 ;
-(id)connectionErrorHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)invalidationHandler;
-(id)interruptionHandler;
-(void)dealloc;
-(void)fetchShazamModuleEnabledStateWithReply:(/*^block*/id)arg1 ;
-(void)enableShazamModuleWithReply:(/*^block*/id)arg1 ;
-(void)startRecognitionForRequest:(id)arg1 ;
-(oneway void)stopRecognition;
-(id<SHXPCFrameworkProxy>)matcherDelegate;
-(void)attachDefaultConnectionHandlers;
-(void)setMatcherDelegate:(id<SHXPCFrameworkProxy>)arg1 ;
@end

