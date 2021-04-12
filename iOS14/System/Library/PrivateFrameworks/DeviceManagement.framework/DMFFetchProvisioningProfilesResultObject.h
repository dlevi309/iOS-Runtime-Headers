/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchProvisioningProfilesResultObject : CATTaskResultObject {

	NSArray* _profiles;

}

@property (nonatomic,copy,readonly) NSArray * profiles;              //@synthesize profiles=_profiles - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)profiles;
-(id)initWithProfiles:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

