/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteAccountHandleMessageDestination.h>

@class HMDAccount;

@interface HMDRemoteAccountMessageDestination : HMDRemoteAccountHandleMessageDestination {

	HMDAccount* _account;

}

@property (nonatomic,readonly) HMDAccount * account;              //@synthesize account=_account - In the implementation block
+(id)shortDescription;
-(HMDAccount *)account;
-(id)shortDescription;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)remoteDestinationString;
-(id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(BOOL)arg3 deviceCapabilities:(id)arg4 ;
-(id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(BOOL)arg3 ;
-(id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(BOOL)arg3 deviceCapabilities:(id)arg4 ;
@end

