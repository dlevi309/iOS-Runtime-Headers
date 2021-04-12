/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class HMDAccessory;

@interface HMDWiFiReconfigurationLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	BOOL _usingFailSafeUpdate;
	HMDAccessory* _accessory;
	long long _credentialType;
	HMDAccessory* _routerAccessory;

}

@property (nonatomic,retain) HMDAccessory * accessory;                                           //@synthesize accessory=_accessory - In the implementation block
@property (assign,getter=isUsingFailSafeUpdate,nonatomic) BOOL usingFailSafeUpdate;              //@synthesize usingFailSafeUpdate=_usingFailSafeUpdate - In the implementation block
@property (assign,nonatomic) long long credentialType;                                           //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,retain) HMDAccessory * routerAccessory;                                     //@synthesize routerAccessory=_routerAccessory - In the implementation block
+(id)uuid;
-(id)init;
-(id)eventName;
-(HMDAccessory *)accessory;
-(void)setCredentialType:(long long)arg1 ;
-(void)setAccessory:(HMDAccessory *)arg1 ;
-(long long)credentialType;
-(id)serializedEvent;
-(void)setUsingFailSafeUpdate:(BOOL)arg1 ;
-(BOOL)isUsingFailSafeUpdate;
-(HMDAccessory *)routerAccessory;
-(void)setRouterAccessory:(HMDAccessory *)arg1 ;
@end

