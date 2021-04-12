/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDAccessory, NSString;

@interface HMDBLEBroadcastEventKeyGeneration : HMDLogEvent <HMDAWDLogEvent> {

	int _reason;
	HMDAccessory* _accessory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) int reason;                            //@synthesize reason=_reason - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)broadcastKeyGenerationEventForAccessory:(id)arg1 reason:(int)arg2 ;
-(HMDAccessory *)accessory;
-(int)reason;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initBroadcastKeyGenerationEventForAccessory:(id)arg1 reason:(int)arg2 ;
@end

