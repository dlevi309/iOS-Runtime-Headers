/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

