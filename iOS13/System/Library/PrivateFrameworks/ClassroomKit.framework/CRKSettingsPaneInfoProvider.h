/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSArray, NSSet, NSDictionary;


@protocol CRKSettingsPaneInfoProvider <NSObject>
@property (nonatomic,copy,readonly) NSArray * courses; 
@property (nonatomic,copy,readonly) NSArray * courseInvitations; 
@property (nonatomic,copy,readonly) NSSet * acceptedInvitationIdentifiers; 
@property (nonatomic,readonly) NSDictionary * observingInstructorIdentifiersByCourseIdentifiers; 
@required
-(NSArray *)courses;
-(NSArray *)courseInvitations;
-(NSSet *)acceptedInvitationIdentifiers;
-(NSDictionary *)observingInstructorIdentifiersByCourseIdentifiers;

@end

