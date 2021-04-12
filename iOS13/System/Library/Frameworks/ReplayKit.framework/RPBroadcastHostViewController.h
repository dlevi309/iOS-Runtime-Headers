/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <UIKitCore/_UIRemoteViewController.h>

@class RPBroadcastViewController, RPBroadcastExtensionHostContext, NSXPCListenerEndpoint;

@interface RPBroadcastHostViewController : _UIRemoteViewController {

	RPBroadcastViewController* _broadcastViewController;
	RPBroadcastExtensionHostContext* _hostContext;
	NSXPCListenerEndpoint* _listenerEndpoint;

}

@property (assign,nonatomic,__weak) RPBroadcastViewController * broadcastViewController;              //@synthesize broadcastViewController=_broadcastViewController - In the implementation block
@property (nonatomic,retain) RPBroadcastExtensionHostContext * hostContext;                           //@synthesize hostContext=_hostContext - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;                                //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setHostContext:(RPBroadcastExtensionHostContext *)arg1 ;
-(RPBroadcastExtensionHostContext *)hostContext;
-(RPBroadcastViewController *)broadcastViewController;
-(void)setBroadcastViewController:(RPBroadcastViewController *)arg1 ;
-(void)updateBroadcastHandlerListenerEndpoint;
-(oneway void)completeSetupWithBroadcastURL:(id)arg1 ;
@end

