/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarsDaemon.h>
#import <libobjc.A.dylib/AVTAvatarsDaemonServer.h>

@protocol AVTAvatarsDaemonServer
@property (assign,nonatomic,__weak) id<AVTAvatarsDaemonServerDelegate> delegate; 
@required
-(void)startListening;
-(id<AVTAvatarsDaemonServerDelegate>)delegate;
-(void)setDelegate:(id)arg1;

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
-(void)checkIn;
-(void)startListening;
-(id<AVTAvatarsDaemonServerDelegate>)delegate;
-(id)initWithLogger:(id)arg1 ;
-(void)setDelegate:(id<AVTAvatarsDaemonServerDelegate>)arg1 ;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithListener:(id)arg1 logger:(id)arg2 ;
-(id<AVTUILogger>)logger;
@end

