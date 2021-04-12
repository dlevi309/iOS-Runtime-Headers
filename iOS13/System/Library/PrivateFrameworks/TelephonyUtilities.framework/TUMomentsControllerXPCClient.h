/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUMomentsControllerXPCClient.h>

@protocol TUMomentsControllerXPCClient <NSObject>
@required
-(oneway void)didUpdateCapabilities:(id)arg1 forVideoStreamToken:(long long)arg2;
-(oneway void)willCaptureRemoteRequestFromRequesterID:(id)arg1;
-(oneway void)didReceiveLocallyRequestedMomentDescriptor:(id)arg1;

@end

#import <libobjc.A.dylib/TUMomentsControllerDataSource.h>

@protocol TUMomentsControllerDataSourceDelegate, OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface TUMomentsControllerXPCClient : NSObject <TUMomentsControllerXPCClient, TUMomentsControllerDataSource> {

	int _token;
	id<TUMomentsControllerDataSourceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                        //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) int token;                                                            //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TUMomentsControllerDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)asynchronousServer;
+(void)setAsynchronousServer:(id)arg1 ;
+(id)synchronousServer;
+(void)setSynchronousServer:(id)arg1 ;
+(id)momentsControllerServerXPCInterface;
+(id)momentsControllerClientXPCInterface;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)token;
-(id<TUMomentsControllerDataSourceDelegate>)delegate;
-(void)setDelegate:(id<TUMomentsControllerDataSourceDelegate>)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 requesteeID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)endRequestWithTransactionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerStreamToken:(long long)arg1 requesterID:(id)arg2 remoteIDSDestinations:(id)arg3 remoteMomentsAvailable:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)unregisterStreamToken:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(id)serverWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_registerConnection;
-(oneway void)didUpdateCapabilities:(id)arg1 forVideoStreamToken:(long long)arg2 ;
-(oneway void)willCaptureRemoteRequestFromRequesterID:(id)arg1 ;
-(oneway void)didReceiveLocallyRequestedMomentDescriptor:(id)arg1 ;
@end

