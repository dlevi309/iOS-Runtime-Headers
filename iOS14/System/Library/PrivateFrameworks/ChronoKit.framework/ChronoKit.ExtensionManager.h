/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoKit.framework/ChronoKit
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@interface ChronoKit.ExtensionManager : NSObject <LSApplicationWorkspaceObserverProtocol> {

	 _extensionsPublisher;
	 _addedPublisher;
	 _updatedPublisher;
	 _removedPublisher;
	 extensionsByIdentifier;
	 removedPluginUUIDsByIdentifier;
	 queue;
	 lookupLock;
	 lock;
	 nsExtensionDiscovererSubscription;
	 nsExtensionDiscoverer;
	 applicationWorkspace;
	 extensionFactory;

}
-(id)init;
-(void)pluginsDidUninstall:(id)arg1 ;
-(void)dealloc;
@end

