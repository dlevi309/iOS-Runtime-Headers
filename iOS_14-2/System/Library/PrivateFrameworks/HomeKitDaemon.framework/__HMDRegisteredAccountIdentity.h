/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/__HMDRegisteredIdentity.h>

@class HMDAccount;

@interface __HMDRegisteredAccountIdentity : __HMDRegisteredIdentity {

	HMDAccount* _account;

}

@property (readonly) HMDAccount * account;              //@synthesize account=_account - In the implementation block
-(id)initWithIdentity:(id)arg1 ;
-(HMDAccount *)account;
-(id)initWithIdentity:(id)arg1 account:(id)arg2 ;
@end

