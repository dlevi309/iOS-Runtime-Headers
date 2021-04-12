/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class CRKCourseInvitation;

@interface CRKJoinControlGroupRequest : CATTaskRequest {

	CRKCourseInvitation* _invitation;

}

@property (nonatomic,retain) CRKCourseInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CRKCourseInvitation *)invitation;
-(void)setInvitation:(CRKCourseInvitation *)arg1 ;
@end

