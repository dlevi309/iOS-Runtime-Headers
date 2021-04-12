/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)destination;
-(NSData *)pushToken;
-(id)privateDescription;
-(id)initWithDestination:(id)arg1 ;
-(BOOL)isGlobal;
-(HMDAccountHandle *)accountHandle;
-(id)initWithPushToken:(id)arg1 accountHandle:(id)arg2 ;
@end

