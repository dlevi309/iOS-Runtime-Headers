/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteMessageDestination.h>

@class HMDAccountHandle, NSDictionary;

@interface HMDRemoteAccountHandleMessageDestination : HMDRemoteMessageDestination {

	BOOL _multicast;
	HMDAccountHandle* _handle;
	NSDictionary* _deviceCapabilities;

}

@property (copy,readonly) HMDAccountHandle * handle;                      //@synthesize handle=_handle - In the implementation block
@property (getter=isMulticast,readonly) BOOL multicast;                   //@synthesize multicast=_multicast - In the implementation block
@property (copy,readonly) NSDictionary * deviceCapabilities;              //@synthesize deviceCapabilities=_deviceCapabilities - In the implementation block
+(id)shortDescription;
-(HMDAccountHandle *)handle;
-(id)initWithTarget:(id)arg1 ;
-(id)shortDescription;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSDictionary *)deviceCapabilities;
-(BOOL)isEqual:(id)arg1 ;
-(id)remoteDestinationString;
-(id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(BOOL)arg3 ;
-(id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(BOOL)arg3 deviceCapabilities:(id)arg4 ;
-(BOOL)isMulticast;
@end

