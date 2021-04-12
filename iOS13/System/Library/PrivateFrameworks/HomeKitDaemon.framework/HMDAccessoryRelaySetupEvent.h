/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDAccessory, NSString;

@interface HMDAccessoryRelaySetupEvent : HMDLogEvent <HMDAWDLogEvent> {

	HMDAccessory* _hmdAccessory;
	unsigned long long _actionType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HMDAccessory * hmdAccessory;              //@synthesize hmdAccessory=_hmdAccessory - In the implementation block
@property (nonatomic,readonly) unsigned long long actionType;                   //@synthesize actionType=_actionType - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)stringForActionType:(unsigned long long)arg1 ;
+(id)relaySetupEventWithActionType:(unsigned long long)arg1 hmdAccessory:(id)arg2 ;
-(unsigned long long)actionType;
-(id)initWithActionType:(unsigned long long)arg1 hmdAccessory:(id)arg2 ;
-(HMDAccessory *)hmdAccessory;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

