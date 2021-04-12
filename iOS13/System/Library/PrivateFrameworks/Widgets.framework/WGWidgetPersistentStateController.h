/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <libobjc.A.dylib/_NCWidgetController_Host_IPC.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, WGWidgetDiscoveryController, NSMutableDictionary, NSObject, NSString;

@interface WGWidgetPersistentStateController : NSObject <_NCWidgetController_Host_IPC, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	WGWidgetDiscoveryController* _discoveryController;
	NSMutableDictionary* _widgetIdentifiersToCachedState;
	BOOL _canCacheState;
	MKBEventRef _keybagEvent;
	NSObject*<OS_dispatch_queue> _keybagQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasContentForWidgetWithIdentifier:(id)arg1 containingBundleIdentifier:(id)arg2 ;
+(id)_persistentStateForWidgetWithIdentifier:(id)arg1 containingBundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)__setHasContent:(BOOL)arg1 forWidgetWithBundleIdentifier:(id)arg2 ;
-(void)__requestRefreshAfterDate:(id)arg1 forWidgetWithBundleIdentifier:(id)arg2 ;
-(id)initWithDiscoveryController:(id)arg1 ;
-(BOOL)doesWidgetWithIdentifierHaveContent:(id)arg1 ;
-(long long)largestAvailableDisplayModeForWidgetWithIdentifier:(id)arg1 ;
-(BOOL)setLargestAvailableDisplayMode:(long long)arg1 forWidgetWithIdentifier:(id)arg2 ;
-(id)_updateCachedStateForWidgetWithIdentifier:(id)arg1 containingBundleID:(id)arg2 ;
-(void)_synchronizePersistentStateForWidgetWithIdentifier:(id)arg1 ;
-(id)_valueForKey:(id)arg1 forWidgetWithIdentifier:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 forWidgetWithIdentifier:(id)arg3 containingBundleID:(id)arg4 ;
-(BOOL)_setHasContent:(BOOL)arg1 forWidgetWithIdentifier:(id)arg2 ;
@end

