/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarsDaemon.h>
#import <libobjc.A.dylib/AVTAvatarsDaemonServer.h>

@protocol AVTAvatarsDaemonServer
@property (assign,nonatomic,__weak) id<AVTAvatarsDaemonServerDelegate> delegate; 
@required
-(id<AVTAvatarsDaemonServerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)startListening;

@end


@protocol AVTAvatarsDaemonServerDelegate, AVTUILogger;
@class NSXPCListener, NSString;

@interface AVTAvatarsDaemonServer : NSObject <NSXPCListenerDelegate, AVTAvatarsDaemon, AVTAvatarsDaemonServer> {

	id<AVTAvatarsDaemonServerDelegate> delegate;
	NSXPCListener* _listener;
	id<AVTUILogger> _logger;

}

@property (nonatomic,readonly) NSXPCListener * listener;                                      //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                        //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTAvatarsDaemonServerDelegate> delegate; 
-(id<AVTAvatarsDaemonServerDelegate>)delegate;
-(void)setDelegate:(id<AVTAvatarsDaemonServerDelegate>)arg1 ;
-(void)checkIn;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id<AVTUILogger>)logger;
-(void)startListening;
-(id)initWithLogger:(id)arg1 ;
-(id)initWithListener:(id)arg1 logger:(id)arg2 ;
@end

