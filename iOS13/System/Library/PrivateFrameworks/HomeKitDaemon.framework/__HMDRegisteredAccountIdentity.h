/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

