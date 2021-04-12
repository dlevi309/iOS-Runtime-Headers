/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSUUID, NSString;

@interface HMDActionSetEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned _numAccessories;
	unsigned long long _triggerSource;
	NSUUID* _actionSetUUID;
	NSString* _bundleId;
	NSUUID* _transactionId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long triggerSource;              //@synthesize triggerSource=_triggerSource - In the implementation block
@property (nonatomic,readonly) NSUUID * actionSetUUID;                        //@synthesize actionSetUUID=_actionSetUUID - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                           //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSUUID * transactionId;                        //@synthesize transactionId=_transactionId - In the implementation block
@property (nonatomic,readonly) unsigned numAccessories;                       //@synthesize numAccessories=_numAccessories - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)actionSetTriggered:(id)arg1 source:(unsigned long long)arg2 numAccessories:(unsigned)arg3 bundleId:(id)arg4 transactionId:(id)arg5 ;
-(NSUUID *)actionSetUUID;
-(NSString *)bundleId;
-(NSUUID *)transactionId;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithActionSet:(id)arg1 source:(unsigned long long)arg2 numAccessories:(unsigned)arg3 bundleId:(id)arg4 transactionId:(id)arg5 ;
-(unsigned long long)triggerSource;
-(unsigned)numAccessories;
@end

