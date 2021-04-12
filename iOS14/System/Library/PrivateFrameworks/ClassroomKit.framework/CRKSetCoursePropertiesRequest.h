/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSString, NSArray;

@interface CRKSetCoursePropertiesRequest : CATTaskRequest {

	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _courseName;
	NSString* _courseDescription;
	NSArray* _anchorCertificates;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * courseName;                                       //@synthesize courseName=_courseName - In the implementation block
@property (nonatomic,copy) NSString * courseDescription;                                //@synthesize courseDescription=_courseDescription - In the implementation block
@property (nonatomic,copy) NSArray * anchorCertificates;                                //@synthesize anchorCertificates=_anchorCertificates - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAnchorCertificates:(NSArray *)arg1 ;
-(NSArray *)anchorCertificates;
-(id)initWithCoder:(id)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSString *)courseName;
-(void)setCourseName:(NSString *)arg1 ;
-(NSString *)courseDescription;
-(void)setCourseDescription:(NSString *)arg1 ;
@end

