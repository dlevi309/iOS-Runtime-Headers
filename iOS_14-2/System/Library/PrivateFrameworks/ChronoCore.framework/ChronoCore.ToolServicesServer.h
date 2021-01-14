/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoCore.framework/ChronoCore
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/CHSChronoToolServiceServerInterface.h>

@interface ChronoCore.ToolServicesServer : NSObject <BSServiceConnectionListenerDelegate, CHSChronoToolServiceServerInterface> {

	 timelineService;
	 taskService;
	 extensionService;
	 descriptorService;
	 stateCaptureService;
	 keybagMonitor;
	 subscriptions;
	 connectionListener;
	 clientConnections;
	 queue;

}
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)cacheDescriptorsForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableWakeBudgetWithCompletion:(/*^block*/id)arg1 ;
-(void)disableWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)widgetsWithTimelines:(/*^block*/id)arg1 ;
-(void)resetWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetCaches:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetWakeBudgetWithCompletion:(/*^block*/id)arg1 ;
-(void)listStateCaptureIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)wakesRemainingForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchStateWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchStateForItemWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)timelineForWidgetKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
@end

