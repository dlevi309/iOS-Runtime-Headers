/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <FamilyCircleUI/FAFamilyRequest.h>

@class NSNumber, NSString;

@interface FAFamilyMemberDetailsUIRequest : FAFamilyRequest {

	NSNumber* _memberDSID;
	NSString* _memberEmail;

}

@property (nonatomic,copy) NSNumber * memberDSID;               //@synthesize memberDSID=_memberDSID - In the implementation block
@property (nonatomic,copy) NSString * memberEmail;              //@synthesize memberEmail=_memberEmail - In the implementation block
-(id)_queryString;
-(id)_endpoint;
-(BOOL)isUserInitiated;
-(NSNumber *)memberDSID;
-(void)setMemberDSID:(NSNumber *)arg1 ;
-(NSString *)memberEmail;
-(void)setMemberEmail:(NSString *)arg1 ;
@end

