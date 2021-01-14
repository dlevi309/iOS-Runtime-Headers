/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchCoursePermissionsResultObject : CATTaskResultObject {

	NSDictionary* _permissionsByFeature;

}

@property (nonatomic,copy) NSDictionary * permissionsByFeature;              //@synthesize permissionsByFeature=_permissionsByFeature - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)permissionsByFeature;
-(void)setPermissionsByFeature:(NSDictionary *)arg1 ;
@end

