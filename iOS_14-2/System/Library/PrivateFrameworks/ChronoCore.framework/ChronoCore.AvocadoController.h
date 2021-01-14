/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoCore.framework/ChronoCore
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/WidgetKit.AvocadoControllerConnection_Host.h>
#import <libobjc.A.dylib/WidgetKit.WidgetCenterConnection_Host.h>

@interface ChronoCore.AvocadoController : NSObject <NSXPCListenerDelegate, WidgetKit.AvocadoControllerConnection_Host, WidgetKit.WidgetCenterConnection_Host> {

	 avocadoListener;
	 widgetListener;
	 timelineService;

}
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_loadCurrentConfigurations:(/*^block*/id)arg1 ;
-(void)_reloadTimelinesOfKind:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_reloadAllTimelines:(/*^block*/id)arg1 ;
-(void)_reloadTimelinesOfKind:(id)arg1 inBundle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_reloadWidgetsFor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_reloadWidgetsInExtensionBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
@end

