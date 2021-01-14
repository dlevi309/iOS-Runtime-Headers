/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDAccessory, NSString;

@interface HMDBLEBroadcastEventReceived : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _hasExpectedGSN;
	HMDAccessory* _accessory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) BOOL hasExpectedGSN;                   //@synthesize hasExpectedGSN=_hasExpectedGSN - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)broadcastEventFromAccessory:(id)arg1 withExpectedGSN:(BOOL)arg2 ;
-(HMDAccessory *)accessory;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initBroadcastEventFromAccessory:(id)arg1 withExpectedGSN:(BOOL)arg2 ;
-(BOOL)hasExpectedGSN;
@end

