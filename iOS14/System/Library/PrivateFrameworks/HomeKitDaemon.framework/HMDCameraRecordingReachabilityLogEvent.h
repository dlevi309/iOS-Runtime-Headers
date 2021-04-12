/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class HMDAccessoryVersion, NSString;

@interface HMDCameraRecordingReachabilityLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	BOOL _reachable;
	BOOL _didCreateEventModel;
	unsigned long long _reachabilityChangeDebounceCount;
	double _offlineDuration;
	HMDAccessoryVersion* _firmwareVersion;
	NSString* _manufacturer;
	NSString* _model;

}

@property (readonly) BOOL reachable;                                                  //@synthesize reachable=_reachable - In the implementation block
@property (readonly) BOOL didCreateEventModel;                                        //@synthesize didCreateEventModel=_didCreateEventModel - In the implementation block
@property (readonly) unsigned long long reachabilityChangeDebounceCount;              //@synthesize reachabilityChangeDebounceCount=_reachabilityChangeDebounceCount - In the implementation block
@property (readonly) double offlineDuration;                                          //@synthesize offlineDuration=_offlineDuration - In the implementation block
@property (readonly) HMDAccessoryVersion * firmwareVersion;                           //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (readonly) NSString * manufacturer;                                         //@synthesize manufacturer=_manufacturer - In the implementation block
@property (readonly) NSString * model;                                                //@synthesize model=_model - In the implementation block
+(id)uuid;
-(HMDAccessoryVersion *)firmwareVersion;
-(NSString *)model;
-(NSString *)manufacturer;
-(id)eventName;
-(BOOL)reachable;
-(id)serializedEvent;
-(id)initWithReachability:(BOOL)arg1 didCreateEventModel:(BOOL)arg2 reachabilityChangeDebounceCount:(unsigned long long)arg3 offlineDuration:(double)arg4 hapAccessory:(id)arg5 ;
-(BOOL)didCreateEventModel;
-(unsigned long long)reachabilityChangeDebounceCount;
-(double)offlineDuration;
@end

