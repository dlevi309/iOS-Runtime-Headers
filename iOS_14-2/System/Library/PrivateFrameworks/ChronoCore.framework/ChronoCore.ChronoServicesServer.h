/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoCore.framework/ChronoCore
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/CHSChronoWidgetServiceServerInterface.h>

@interface ChronoCore.ChronoServicesServer : NSObject <BSServiceConnectionListenerDelegate, CHSChronoWidgetServiceServerInterface> {

	 timelineService;
	 taskService;
	 descriptorService;
	 extensionService;
	 configurationService;
	 keybagMonitor;
	 connectionListener;
	 clientConnections;
	 subscriptions;
	 tasks;
	 queue;
	 initialExtensionDiscoveryCompleteSubscription;

}
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)expireLocationGracePeriods;
-(id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg1 info:(id)arg2 ;
-(void)setConfiguredWidgetContainerDescriptors:(id)arg1 ;
-(void)applicationWithBundleIdentifierEnteredForeground:(id)arg1 ;
-(id)widgetEnvironmentDataForBundleIdentifier:(id)arg1 ;
-(void)reloadTimelineForAvocadoWithIdentifier:(id)arg1 inBundleWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)flushPowerlog;
-(void)setMetricsSpecification:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

