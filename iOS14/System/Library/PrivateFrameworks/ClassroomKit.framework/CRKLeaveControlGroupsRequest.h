/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSSet;

@interface CRKLeaveControlGroupsRequest : CATTaskRequest {

	NSSet* _groupIdentifiers;

}

@property (nonatomic,retain) NSSet * groupIdentifiers;              //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)groupIdentifiers;
-(void)setGroupIdentifiers:(NSSet *)arg1 ;
@end

