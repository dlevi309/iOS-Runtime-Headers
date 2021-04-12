/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMDPowerManager : HMFObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _networkInterfaceActive;
	BOOL _networkAccessRequired;
	unsigned _powerAssertion;
	SCDynamicStoreRef _scStore;
	void* _scContext;
	BOOL _started;

}

@property (assign,getter=isNetworkAccessRequired,nonatomic) BOOL networkAccessRequired;              //@synthesize networkAccessRequired=_networkAccessRequired - In the implementation block
-(id)init;
-(void)start;
-(void)stop;
-(void)_update;
-(void)dealloc;
-(int)_ensureNetworkInterfaceMonitorStarted;
-(void)_ensureNetworkInterfaceMonitorStopped;
-(void)setNetworkAccessRequired:(BOOL)arg1 ;
-(BOOL)isNetworkAccessRequired;
@end

