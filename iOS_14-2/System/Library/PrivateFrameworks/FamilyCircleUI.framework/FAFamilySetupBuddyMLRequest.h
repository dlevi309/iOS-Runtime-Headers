/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <AppleAccount/AAFamilyRequest.h>

@class ACAccount, NSString;

@interface FAFamilySetupBuddyMLRequest : AAFamilyRequest {

	ACAccount* _iTunesAccount;
	NSString* _inviteCode;

}

@property (setter=setiTunesAccount:,nonatomic,retain) ACAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (nonatomic,copy) NSString * inviteCode;                                             //@synthesize inviteCode=_inviteCode - In the implementation block
-(id)urlString;
-(void)setiTunesAccount:(id)arg1 ;
-(ACAccount *)iTunesAccount;
-(id)urlRequest;
-(BOOL)isUserInitiated;
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
@end

