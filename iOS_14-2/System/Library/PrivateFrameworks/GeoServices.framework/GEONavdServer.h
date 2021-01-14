/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)dealloc;
@end

