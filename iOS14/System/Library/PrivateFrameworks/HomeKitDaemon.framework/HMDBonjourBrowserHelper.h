/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class NSString, HMFUnfairLock, HMFTimer, NSNetServiceBrowser, NSMutableSet;

@interface HMDBonjourBrowserHelper : HMFObject <NSNetServiceBrowserDelegate, HMFTimerDelegate> {

	BOOL _started;
	double _browsingInterval;
	double _browsingPeriodicity;
	NSString* _serviceType;
	HMFUnfairLock* _lock;
	HMFTimer* _browsingTimer;
	HMFTimer* _periodicityTimer;
	NSNetServiceBrowser* _browser;
	NSMutableSet* _discoveredServices;

}

@property (assign,nonatomic) double browsingInterval;                                   //@synthesize browsingInterval=_browsingInterval - In the implementation block
@property (assign,nonatomic) double browsingPeriodicity;                                //@synthesize browsingPeriodicity=_browsingPeriodicity - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                      //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) HMFUnfairLock * lock;                                      //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) HMFTimer * browsingTimer;                                  //@synthesize browsingTimer=_browsingTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * periodicityTimer;                               //@synthesize periodicityTimer=_periodicityTimer - In the implementation block
@property (nonatomic,retain) NSNetServiceBrowser * browser;                             //@synthesize browser=_browser - In the implementation block
@property (nonatomic,retain) NSMutableSet * discoveredServices;                         //@synthesize discoveredServices=_discoveredServices - In the implementation block
@property (nonatomic,readonly) unsigned long long discoveredServicesCount; 
@property (getter=isStarted,nonatomic,readonly) BOOL started;                           //@synthesize started=_started - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)timerDidFire:(id)arg1 ;
-(NSNetServiceBrowser *)browser;
-(BOOL)isStarted;
-(void)start;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(HMFUnfairLock *)lock;
-(void)stop;
-(void)setServiceType:(NSString *)arg1 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)setLock:(HMFUnfairLock *)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)setBrowser:(NSNetServiceBrowser *)arg1 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(NSString *)serviceType;
-(void)setStarted:(BOOL)arg1 ;
-(NSMutableSet *)discoveredServices;
-(void)setDiscoveredServices:(NSMutableSet *)arg1 ;
-(id)initWithServicesOfType:(id)arg1 browsingTimeInterval:(double)arg2 browsingPeriodicity:(double)arg3 ;
-(unsigned long long)discoveredServicesCount;
-(HMFTimer *)periodicityTimer;
-(double)browsingPeriodicity;
-(void)setPeriodicityTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)browsingTimer;
-(double)browsingInterval;
-(void)setBrowsingTimer:(HMFTimer *)arg1 ;
-(void)setBrowsingInterval:(double)arg1 ;
-(void)setBrowsingPeriodicity:(double)arg1 ;
@end

