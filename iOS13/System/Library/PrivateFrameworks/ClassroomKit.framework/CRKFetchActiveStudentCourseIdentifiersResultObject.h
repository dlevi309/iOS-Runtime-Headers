/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchActiveStudentCourseIdentifiersResultObject : CATTaskResultObject {

	NSArray* _activeCourseIdentifiers;
	NSArray* _activeInstructorIdentifiers;

}

@property (nonatomic,copy) NSArray * activeCourseIdentifiers;                  //@synthesize activeCourseIdentifiers=_activeCourseIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * activeInstructorIdentifiers;              //@synthesize activeInstructorIdentifiers=_activeInstructorIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)activeCourseIdentifiers;
-(void)setActiveCourseIdentifiers:(NSArray *)arg1 ;
-(NSArray *)activeInstructorIdentifiers;
-(void)setActiveInstructorIdentifiers:(NSArray *)arg1 ;
@end

