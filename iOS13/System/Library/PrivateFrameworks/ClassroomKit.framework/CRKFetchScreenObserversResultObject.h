/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchScreenObserversResultObject : CATTaskResultObject {

	NSDictionary* _observingInstructorIdentifiersByCourseCourseIdentifiers;

}

@property (nonatomic,copy) NSDictionary * observingInstructorIdentifiersByCourseCourseIdentifiers;              //@synthesize observingInstructorIdentifiersByCourseCourseIdentifiers=_observingInstructorIdentifiersByCourseCourseIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)observingInstructorIdentifiersByCourseCourseIdentifiers;
-(void)setObservingInstructorIdentifiersByCourseCourseIdentifiers:(NSDictionary *)arg1 ;
@end

