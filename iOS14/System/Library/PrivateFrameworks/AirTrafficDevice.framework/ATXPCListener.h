/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, NSMapTable, NSString;

@interface ATXPCListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _xpcListener;
	NSMutableArray* _connections;
	NSMapTable* _proxyMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)run;
-(id)init;
-(id)connections;
-(id)proxyForConnection:(id)arg1 ;
-(void)stop;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)dealloc;
@end

