/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, GEONavigationServer, NSString;

@interface GEONavdServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _pushNavigationStateListener;
	NSXPCListener* _getNavigationStateListener;
	NSXPCListener* _monitorDestinationListener;
	GEONavigationServer* _navigationServer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

