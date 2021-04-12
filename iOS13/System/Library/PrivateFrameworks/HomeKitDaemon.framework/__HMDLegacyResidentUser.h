/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDUser.h>

@class HMDResidentUser;

@interface __HMDLegacyResidentUser : HMDUser {

	HMDResidentUser* _residentUser;

}

@property (nonatomic,readonly) HMDResidentUser * residentUser;              //@synthesize residentUser=_residentUser - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRemoteGateway;
-(id)initWithResidentUser:(id)arg1 ;
-(HMDResidentUser *)residentUser;
@end

