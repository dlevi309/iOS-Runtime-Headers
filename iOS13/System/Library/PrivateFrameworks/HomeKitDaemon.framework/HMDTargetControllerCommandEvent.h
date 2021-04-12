/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDHAPAccessory, NSString;

@interface HMDTargetControllerCommandEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned long long _commandType;
	HMDHAPAccessory* _accessory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long commandType;                  //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,__weak,readonly) HMDHAPAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
+(id)uuid;
+(id)commandEventWithCommandType:(unsigned long long)arg1 accessory:(id)arg2 ;
-(HMDHAPAccessory *)accessory;
-(unsigned long long)commandType;
-(id)initWithCommandType:(unsigned long long)arg1 accessory:(id)arg2 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

