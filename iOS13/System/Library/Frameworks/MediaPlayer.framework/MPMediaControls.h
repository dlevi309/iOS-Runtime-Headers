/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPMediaControlsProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSXPCConnection, MPMediaControlsConfiguration, NSString;

@interface MPMediaControls : NSObject <MPMediaControlsProtocol, NSXPCListenerDelegate> {

	BOOL _shouldObserveRoutingContextUIDChanges;
	unsigned long long _dismissalReason;
	/*^block*/id _dismissHandler;
	NSXPCListener* _listener;
	NSXPCConnection* _connection;
	MPMediaControlsConfiguration* _configuration;
	/*^block*/id _dismissHandlerWithReason;

}

@property (nonatomic,retain) NSXPCListener * listener;                                    //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) MPMediaControlsConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) id dismissHandlerWithReason;                                   //@synthesize dismissHandlerWithReason=_dismissHandlerWithReason - In the implementation block
@property (nonatomic,copy) id dismissHandler;                                             //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_reset;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(MPMediaControlsConfiguration *)configuration;
-(void)dismiss;
-(void)present;
-(void)setDismissHandler:(id)arg1 ;
-(void)openConnection;
-(id)dismissHandler;
-(void)startPrewarming;
-(void)stopPrewarming;
-(void)setDismissalReason:(unsigned long long)arg1 ;
-(id)initWithRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 shouldObserveRoutingContextUIDChanges:(BOOL)arg2 ;
-(void)_updateAudioSessionRoutingContext;
-(void)_audioSessionRoutingContextDidChangeNotification;
-(long long)_mediaControlsStyleForRouteSharingPolicy:(unsigned long long)arg1 ;
-(unsigned long long)_MPRouteSharingPolicyToAVRouteSharingPolicy:(unsigned long long)arg1 ;
-(id)_dismissalReasonString:(unsigned long long)arg1 ;
-(BOOL)_shouldUpdateStyleForCurrentConfigurationStyle:(long long)arg1 ;
-(id)dismissHandlerWithReason;
-(void)setDismissHandlerWithReason:(id)arg1 ;
@end

