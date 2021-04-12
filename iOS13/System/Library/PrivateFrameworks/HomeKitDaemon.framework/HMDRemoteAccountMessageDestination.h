/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteAccountHandleMessageDestination.h>

@class HMDAccount;

@interface HMDRemoteAccountMessageDestination : HMDRemoteAccountHandleMessageDestination {

	HMDAccount* _account;

}

@property (nonatomic,readonly) HMDAccount * account;              //@synthesize account=_account - In the implementation block
+(id)shortDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(HMDAccount *)account;
-(id)shortDescription;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)remoteDestinationString;
-(id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(BOOL)arg3 deviceCapabilities:(id)arg4 ;
-(id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(BOOL)arg3 ;
-(id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(BOOL)arg3 deviceCapabilities:(id)arg4 ;
@end

