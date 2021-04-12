/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <CloudMediaServicesInterfaceKit/CloudMediaServicesInterfaceProtocol.h>

@protocol CloudMediaServicesInterfaceProtocol;
@class NSXPCListener, NSString;

@interface CloudMediaServicesInterfaceXPCListener : NSObject <NSXPCListenerDelegate, CloudMediaServicesInterfaceProtocol> {

	NSXPCListener* _xpcListener;
	id<CloudMediaServicesInterfaceProtocol> _playbackCommandDelegate;

}

@property (assign,nonatomic,__weak) id<CloudMediaServicesInterfaceProtocol> playbackCommandDelegate;              //@synthesize playbackCommandDelegate=_playbackCommandDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setServerEnvironment:(id)arg1 ;
-(void)playSample:(id)arg1 ;
-(void)sendPlaybackQueueToRemoteDestination:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendPlaybackQueueWithUserActivityDictionary:(id)arg1 forIntentID:(id)arg2 toDestination:(id)arg3 withIntentData:(id)arg4 prepareQueue:(BOOL)arg5 ;
-(void)pauseSample;
-(void)setOverrideURL:(id)arg1 ;
-(void)getCloudExtensionConfigurationFor:(id)arg1 homeUserID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)submitAnalyticsForType:(id)arg1 andIdentifier:(id)arg2 eventType:(id)arg3 atTime:(id)arg4 withMetadata:(id)arg5 ;
-(void)stopAnalyticsWithIdentifier:(id)arg1 ;
-(id<CloudMediaServicesInterfaceProtocol>)playbackCommandDelegate;
-(void)setPlaybackCommandDelegate:(id<CloudMediaServicesInterfaceProtocol>)arg1 ;
@end

