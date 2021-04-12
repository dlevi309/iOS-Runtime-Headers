/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray, NSSet;

@interface CRKFetchCourseInvitationsResultObject : CATTaskResultObject {

	NSArray* _courseInvitations;
	NSSet* _acceptedInvitationIdentifiers;

}

@property (nonatomic,retain) NSArray * courseInvitations;                      //@synthesize courseInvitations=_courseInvitations - In the implementation block
@property (nonatomic,copy) NSSet * acceptedInvitationIdentifiers;              //@synthesize acceptedInvitationIdentifiers=_acceptedInvitationIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)courseInvitations;
-(void)setCourseInvitations:(NSArray *)arg1 ;
-(NSSet *)acceptedInvitationIdentifiers;
-(void)setAcceptedInvitationIdentifiers:(NSSet *)arg1 ;
@end

