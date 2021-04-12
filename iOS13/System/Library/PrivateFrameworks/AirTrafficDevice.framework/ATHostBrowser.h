/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSNetServiceBrowser, NSMutableSet, NSObject, NSString;

@interface ATHostBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSNetServiceBrowser* _netServiceBrowser;
	BOOL _searchInProgress;
	NSMutableSet* _hostsBeingResolved;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completionBlock;
	NSObject*<OS_dispatch_source> _timer;
	double _browserStartTime;
	double _timeoutTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)_handleTimeout;
-(void)_finishSearchIfComplete;
-(void)browseForHostsWithTimeout:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end

