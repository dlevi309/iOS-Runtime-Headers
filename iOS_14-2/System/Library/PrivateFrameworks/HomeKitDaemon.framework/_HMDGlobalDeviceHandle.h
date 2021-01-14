/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/_HMDDeviceHandle.h>

@class HMDAccountHandle, NSData;

@interface _HMDGlobalDeviceHandle : _HMDDeviceHandle {

	HMDAccountHandle* _accountHandle;
	NSData* _pushToken;

}

@property (copy,readonly) HMDAccountHandle * accountHandle;              //@synthesize accountHandle=_accountHandle - In the implementation block
@property (copy,readonly) NSData * pushToken;                            //@synthesize pushToken=_pushToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isValidDestination:(id)arg1 ;
-(id)privateDescription;
-(NSData *)pushToken;
-(id)initWithDestination:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)destination;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isGlobal;
-(HMDAccountHandle *)accountHandle;
-(id)initWithPushToken:(id)arg1 accountHandle:(id)arg2 ;
@end

