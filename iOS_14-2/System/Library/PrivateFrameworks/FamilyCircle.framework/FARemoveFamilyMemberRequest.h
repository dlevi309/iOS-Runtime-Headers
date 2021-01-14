/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber;

@interface FARemoveFamilyMemberRequest : FAFamilyCircleRequest {

	NSNumber* _memberDSID;

}

@property (copy,readonly) NSNumber * memberDSID;              //@synthesize memberDSID=_memberDSID - In the implementation block
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSNumber *)memberDSID;
-(id)initWithFamilyMemberDSID:(id)arg1 ;
@end

