/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@interface JetEngine.MetricsInspectorScanner : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	 serviceBrowser;
	 stateLock;
	 foundServices;

}
-(id)init;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(void)dealloc;
@end

