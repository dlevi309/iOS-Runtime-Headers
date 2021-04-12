/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

