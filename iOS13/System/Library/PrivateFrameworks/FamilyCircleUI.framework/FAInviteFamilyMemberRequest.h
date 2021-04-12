/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <FamilyCircleUI/FAFamilyRequest.h>

@class NSString;

@interface FAInviteFamilyMemberRequest : FAFamilyRequest {

	NSString* _inviteeEmail;
	NSString* _inviteeCompositeName;
	NSString* _inviteeShortName;

}

@property (nonatomic,copy) NSString * inviteeEmail;                      //@synthesize inviteeEmail=_inviteeEmail - In the implementation block
@property (nonatomic,copy) NSString * inviteeCompositeName;              //@synthesize inviteeCompositeName=_inviteeCompositeName - In the implementation block
@property (nonatomic,copy) NSString * inviteeShortName;                  //@synthesize inviteeShortName=_inviteeShortName - In the implementation block
-(id)_queryString;
-(id)_endpoint;
-(BOOL)isUserInitiated;
-(NSString *)inviteeEmail;
-(void)setInviteeEmail:(NSString *)arg1 ;
-(NSString *)inviteeCompositeName;
-(void)setInviteeCompositeName:(NSString *)arg1 ;
-(NSString *)inviteeShortName;
-(void)setInviteeShortName:(NSString *)arg1 ;
@end

