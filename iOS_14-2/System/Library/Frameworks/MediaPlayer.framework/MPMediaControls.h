/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPMediaControlsProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSString, NSXPCListener, NSXPCConnection, MPMediaControlsConfiguration;

@interface MPMediaControls : NSObject <MPMediaControlsProtocol, NSXPCListenerDelegate> {

	BOOL _shouldObserveRoutingContextUIDChanges;
	unsigned long long _dismissalReason;
	/*^block*/id _dismissHandler;
	NSString* _routeUID;
	NSXPCListener* _listener;
	NSXPCConnection* _connection;
	MPMediaControlsConfiguration* _configuration;
	/*^block*/id _dismissHandlerWithReason;
	CGRect _sourceRect;

}

@property (nonatomic,retain) NSXPCListener * listener;                                    //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) MPMediaControlsConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) id dismissHandlerWithReason;                                   //@synthesize dismissHandlerWithReason=_dismissHandlerWithReason - In the implementation block
@property (nonatomic,copy) id dismissHandler;                                             //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                           //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,retain) NSString * routeUID;                                         //@synthesize routeUID=_routeUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openConnection;
-(NSString *)routeUID;
-(id)init;
-(void)present;
-(id)initWithRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2 ;
-(id)_dismissalReasonString:(unsigned long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 shouldObserveRoutingContextUIDChanges:(BOOL)arg2 ;
-(void)_updateAudioSessionRoutingContext;
-(void)_audioSessionRoutingContextDidChangeNotification;
-(long long)_mediaControlsStyleForRouteSharingPolicy:(unsigned long long)arg1 ;
-(unsigned long long)_MPRouteSharingPolicyToAVRouteSharingPolicy:(unsigned long long)arg1 ;
-(BOOL)_shouldUpdateStyleForCurrentConfigurationStyle:(long long)arg1 ;
-(id)dismissHandlerWithReason;
-(void)setDismissHandlerWithReason:(id)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(void)setRouteUID:(NSString *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(id)dismissHandler;
-(NSXPCListener *)listener;
-(MPMediaControlsConfiguration *)configuration;
-(NSXPCConnection *)connection;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(CGRect)sourceRect;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)_reset;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)stopPrewarming;
-(void)startPrewarming;
-(void)setDismissalReason:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)dismiss;
@end

