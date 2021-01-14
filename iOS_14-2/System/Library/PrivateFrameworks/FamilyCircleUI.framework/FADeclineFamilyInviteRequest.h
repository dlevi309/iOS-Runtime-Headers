/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface FADeclineFamilyInviteRequest : AAFamilyRequest {

	NSString* _inviteCode;

}

@property (nonatomic,copy) NSString * inviteCode;              //@synthesize inviteCode=_inviteCode - In the implementation block
-(id)urlString;
-(id)urlRequest;
-(BOOL)isUserInitiated;
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
@end

