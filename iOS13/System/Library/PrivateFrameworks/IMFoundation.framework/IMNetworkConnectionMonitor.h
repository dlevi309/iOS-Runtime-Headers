/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <IMFoundation/IMConnectionMonitor.h>
#import <IMFoundation/IMSystemMonitorListener.h>
#import <IMFoundation/IMReachabilityDelegate.h>

@class IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate> {

	BOOL _isConnected;
	BOOL _isSleeping;
	IMReachability* _hostReachability;
	IMReachability* _ipReachability;
	unsigned long long _hostFlags;
	unsigned long long _ipFlags;

}

@property (nonatomic,retain) IMReachability * _hostReachability;              //@synthesize hostReachability=_hostReachability - In the implementation block
@property (nonatomic,retain) IMReachability * _ipReachability;                //@synthesize ipReachability=_ipReachability - In the implementation block
@property (assign,nonatomic) unsigned long long _hostFlags;                   //@synthesize hostFlags=_hostFlags - In the implementation block
@property (assign,nonatomic) unsigned long long _ipFlags;                     //@synthesize ipFlags=_ipFlags - In the implementation block
@property (assign,nonatomic) BOOL _isConnected;                               //@synthesize isConnected=_isConnected - In the implementation block
@property (assign,nonatomic) BOOL _isSleeping;                                //@synthesize isSleeping=_isSleeping - In the implementation block
-(void)dealloc;
-(void)clear;
-(BOOL)_isConnected;
-(void)_setup;
-(BOOL)isImmediatelyReachable;
-(void)systemWillSleep;
-(void)systemDidWake;
-(void)reachabilityDidChange:(id)arg1 ;
-(void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(void)goDisconnected;
-(void)_clearReachability:(id*)arg1 flags:(unsigned long long*)arg2 ;
-(void)_doCallbackNow;
-(void)_doCallbackLater;
-(void)_networkManagedUpdated:(id)arg1 ;
-(void)_setupReachability;
-(IMReachability *)_hostReachability;
-(void)set_hostReachability:(IMReachability *)arg1 ;
-(IMReachability *)_ipReachability;
-(void)set_ipReachability:(IMReachability *)arg1 ;
-(unsigned long long)_hostFlags;
-(void)set_hostFlags:(unsigned long long)arg1 ;
-(unsigned long long)_ipFlags;
-(void)set_ipFlags:(unsigned long long)arg1 ;
-(void)set_isConnected:(BOOL)arg1 ;
-(BOOL)_isSleeping;
-(void)set_isSleeping:(BOOL)arg1 ;
@end

