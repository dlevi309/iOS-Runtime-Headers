/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

