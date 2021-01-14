/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDHAPAccessory, NSString;

@interface HMDTargetControllerErrorEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned long long _errorType;
	HMDHAPAccessory* _accessory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long errorType;                    //@synthesize errorType=_errorType - In the implementation block
@property (nonatomic,__weak,readonly) HMDHAPAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
+(id)uuid;
+(id)errorEventWithErrorType:(unsigned long long)arg1 accessory:(id)arg2 ;
-(HMDHAPAccessory *)accessory;
-(unsigned long long)errorType;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithErrorType:(unsigned long long)arg1 accessory:(id)arg2 ;
@end

