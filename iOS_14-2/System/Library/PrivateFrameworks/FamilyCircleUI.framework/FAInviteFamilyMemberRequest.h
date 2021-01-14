/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isUserInitiated;
-(id)_queryString;
-(id)_endpoint;
-(NSString *)inviteeEmail;
-(void)setInviteeEmail:(NSString *)arg1 ;
-(NSString *)inviteeCompositeName;
-(void)setInviteeCompositeName:(NSString *)arg1 ;
-(NSString *)inviteeShortName;
-(void)setInviteeShortName:(NSString *)arg1 ;
@end

