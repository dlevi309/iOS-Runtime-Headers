/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


@interface VUIJSNetworkInterface : IKJSObject <VUIJSNetworkInterface> {

	int _playbackReportToken;
	BOOL _suppressServerConfigNotifications;

}

@property (assign) BOOL suppressServerConfigNotifications;              //@synthesize suppressServerConfigNotifications=_suppressServerConfigNotifications - In the implementation block
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelRequest:(id)arg1 ;
-(void)dealloc;
-(id)initWithAppContext:(id)arg1 ;
-(void)_handleAppLibChange:(id)arg1 ;
-(void)_handleServerConfigChange:(id)arg1 ;
-(long long)_requestOptionsFromJSOptions:(id)arg1 ;
-(void)_enqueueNetworkOp:(id)arg1 withJSCallback:(id)arg2 ;
-(void)setSuppressServerConfigNotifications:(BOOL)arg1 ;
-(id)makeRequest:(id)arg1 :(id)arg2 ;
-(id)makeUpNextRequest:(id)arg1 :(id)arg2 ;
-(void)fetchConfiguration:(BOOL)arg1 :(id)arg2 ;
-(void)invalidateConfiguration;
-(BOOL)suppressServerConfigNotifications;
@end

