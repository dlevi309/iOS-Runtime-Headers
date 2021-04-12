/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@class NSMutableArray, NSNetServiceBrowser, NSThread, NSString;

@interface ATWakeupCall : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSMutableArray* _hostLibraryIdentifiers;
	NSMutableArray* _resolvingHosts;
	NSMutableArray* _resolvedLibraryIdentifiers;
	NSMutableArray* _resolvedLibraryServices;
	/*^block*/id _completion;
	NSNetServiceBrowser* _browser;
	NSThread* _wakeThread;
	BOOL _searching;
	int _resolving;
	unsigned long long _hostsToResolve;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)sendWakeupCall:(id)arg1 ;
+(void)sendWakeupCallToAllSyncHosts;
+(id)wakeableHostsWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)wake;
@end

