/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSString, NSNumber;

@interface CRKSetCoursePermissionRequest : CATTaskRequest {

	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _feature;
	NSNumber* _permission;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,retain) NSString * feature;                                        //@synthesize feature=_feature - In the implementation block
@property (nonatomic,retain) NSNumber * permission;                                     //@synthesize permission=_permission - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)feature;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)permission;
-(void)setFeature:(NSString *)arg1 ;
-(void)setPermission:(NSNumber *)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
@end

