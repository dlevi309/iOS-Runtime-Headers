/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, HMDLogEventDispatcher;

@interface HMDMessageHandlerMetricsDispatcher : HMFObject {

	NSUUID* _identifier;
	HMDLogEventDispatcher* _logEventDispatcher;

}

@property (copy,readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMDLogEventDispatcher * logEventDispatcher;              //@synthesize logEventDispatcher=_logEventDispatcher - In the implementation block
+(id)logCategory;
-(id)privateDescription;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(NSUUID *)identifier;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(id)initWithIdentifier:(id)arg1 logEventDispatcher:(id)arg2 ;
-(void)submitFailureEventOfType:(unsigned long long)arg1 message:(id)arg2 ;
@end

