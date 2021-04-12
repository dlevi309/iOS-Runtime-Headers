/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_os_log;
@class BLControl, NSXPCListener, NSMutableDictionary, NSObject, NSString;

@interface BrightnessSystemInternal : NSObject <NSXPCListenerDelegate> {

	BLControl* bl;
	/*^block*/id _callback;
	float _cachedSlider;
	NSXPCListener* _listener;
	NSMutableDictionary* _clients;
	NSMutableDictionary* _clientsProps;
	NSMutableDictionary* _ownedProps;
	NSMutableDictionary* _combinableProps;
	NSObject*<OS_os_log> _logHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(BOOL)isAlsSupported;
-(id)copyPropertyForKey:(id)arg1 client:(id)arg2 ;
-(id)init;
-(void)setNotificationProperties:(id)arg1 forClient:(id)arg2 ;
-(BOOL)setCombinableProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3 ;
-(id)adjustDictionaryToBeValidPropertyList:(id)arg1 ;
-(id)newAggregatedPropertyForCombinablePropertiesForKey:(id)arg1 ;
-(void)notifyClientsForProperty:(id)arg1 key:(id)arg2 ;
-(void)undoCombinablePropertiesForClient:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)clientDisconnectedWithExpObj:(id)arg1 ;
-(BOOL)isACombinableProperty:(id)arg1 ;
-(void)undoOwnedPropertiesForClient:(id)arg1 ;
-(void)destroyServer;
-(void)clientConnectedWithExpObj:(id)arg1 ;
-(void)setOwnedProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3 ;
-(void)dealloc;
@end

