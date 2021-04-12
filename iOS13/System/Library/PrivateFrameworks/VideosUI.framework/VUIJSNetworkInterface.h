/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSNetworkInterface.h>

@protocol VUIJSNetworkInterface <JSExport>
@required
-(void)cancelRequest:(id)arg1;
-(id)makeRequest:(id)arg1 :(id)arg2;
-(id)makeUpNextRequest:(id)arg1 :(id)arg2;
-(void)fetchConfiguration:(BOOL)arg1 :(id)arg2;
-(void)invalidateConfiguration;

@end


@class NSXPCConnection;

@interface VUIJSNetworkInterface : IKJSObject <VUIJSNetworkInterface> {

	int _playbackReportToken;
	NSXPCConnection* _connection;
	BOOL _suppressServerConfigNotifications;

}

@property (assign) BOOL suppressServerConfigNotifications;              //@synthesize suppressServerConfigNotifications=_suppressServerConfigNotifications - In the implementation block
-(void)dealloc;
-(id)_connection;
-(void)cancelRequest:(id)arg1 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithAppContext:(id)arg1 ;
-(void)_handleAppLibChange:(id)arg1 ;
-(void)_handleServerConfigChange:(id)arg1 ;
-(void)_handlePlaybackReport:(id)arg1 ;
-(long long)_requestOptionsFromJSOptions:(id)arg1 ;
-(void)_enqueueNetworkOp:(id)arg1 withJSCallback:(id)arg2 ;
-(void)setSuppressServerConfigNotifications:(BOOL)arg1 ;
-(id)makeRequest:(id)arg1 :(id)arg2 ;
-(id)makeUpNextRequest:(id)arg1 :(id)arg2 ;
-(void)fetchConfiguration:(BOOL)arg1 :(id)arg2 ;
-(void)invalidateConfiguration;
-(BOOL)suppressServerConfigNotifications;
@end

