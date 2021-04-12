/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clear;
-(IMReachability *)_hostReachability;
-(void)_setup;
-(unsigned long long)_hostFlags;
-(void)set_ipFlags:(unsigned long long)arg1 ;
-(void)_setupReachability;
-(IMReachability *)_ipReachability;
-(void)set_ipReachability:(IMReachability *)arg1 ;
-(void)goDisconnected;
-(void)set_isConnected:(BOOL)arg1 ;
-(void)_networkManagedUpdated:(id)arg1 ;
-(BOOL)isImmediatelyReachable;
-(void)reachabilityDidChange:(id)arg1 ;
-(void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(void)set_hostReachability:(IMReachability *)arg1 ;
-(void)set_isSleeping:(BOOL)arg1 ;
-(void)systemWillSleep;
-(void)_doCallbackLater;
-(BOOL)_isConnected;
-(unsigned long long)_ipFlags;
-(void)systemDidWake;
-(void)set_hostFlags:(unsigned long long)arg1 ;
-(void)_clearReachability:(id*)arg1 flags:(unsigned long long*)arg2 ;
-(void)_doCallbackNow;
-(BOOL)_isSleeping;
-(void)dealloc;
@end

