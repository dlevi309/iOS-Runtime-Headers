/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <UIKitCore/_UIRemoteViewController.h>

@class RPBroadcastExtensionHostContext, NSXPCListenerEndpoint;

@interface RPBroadcastHostViewController : _UIRemoteViewController {

	RPBroadcastExtensionHostContext* _hostContext;
	NSXPCListenerEndpoint* _listenerEndpoint;

}

@property (nonatomic,retain) RPBroadcastExtensionHostContext * hostContext;              //@synthesize hostContext=_hostContext - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;                   //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
-(RPBroadcastExtensionHostContext *)hostContext;
-(void)setHostContext:(RPBroadcastExtensionHostContext *)arg1 ;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(oneway void)completeSetupWithBroadcastURL:(id)arg1 ;
-(void)updateBroadcastHandlerListenerEndpoint;
@end

