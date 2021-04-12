/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@interface HMDRemoteDeviceReachabilityChangeLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	BOOL _reachable;
	BOOL _targetSupportsIDSPresence;
	unsigned long long _reason;

}

@property (readonly) unsigned long long reason;                   //@synthesize reason=_reason - In the implementation block
@property (readonly) BOOL reachable;                              //@synthesize reachable=_reachable - In the implementation block
@property (readonly) BOOL targetSupportsIDSPresence;              //@synthesize targetSupportsIDSPresence=_targetSupportsIDSPresence - In the implementation block
+(id)uuid;
-(id)eventName;
-(unsigned long long)reason;
-(BOOL)reachable;
-(id)serializedEvent;
-(id)initWithReason:(unsigned long long)arg1 reachable:(BOOL)arg2 targetSupportsIDSPresence:(BOOL)arg3 ;
-(BOOL)targetSupportsIDSPresence;
@end

