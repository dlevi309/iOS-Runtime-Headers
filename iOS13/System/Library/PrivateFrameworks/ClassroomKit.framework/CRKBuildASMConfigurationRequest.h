/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSDictionary, DMFControlGroupIdentifier;

@interface CRKBuildASMConfigurationRequest : CATTaskRequest {

	NSDictionary* _existingASMConfiguration;
	DMFControlGroupIdentifier* _courseIdentifier;

}

@property (nonatomic,copy) NSDictionary * existingASMConfiguration;                     //@synthesize existingASMConfiguration=_existingASMConfiguration - In the implementation block
@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSDictionary *)existingASMConfiguration;
-(void)setExistingASMConfiguration:(NSDictionary *)arg1 ;
@end

