/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
*/

#import <PubSub/PSSubscription.h>

@class NSUUID;

@interface PSRemoteSubscription : PSSubscription {

	NSUUID* _remoteDeviceIdentifier;

}

@property (copy,readonly) NSUUID * remoteDeviceIdentifier;              //@synthesize remoteDeviceIdentifier=_remoteDeviceIdentifier - In the implementation block
-(NSUUID *)remoteDeviceIdentifier;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTopic:(id)arg1 filters:(id)arg2 conditionals:(id)arg3 remoteDeviceIdentifier:(id)arg4 ;
@end

