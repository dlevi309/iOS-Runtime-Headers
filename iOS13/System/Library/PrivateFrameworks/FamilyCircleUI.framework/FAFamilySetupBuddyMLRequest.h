/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <AppleAccount/AAFamilyRequest.h>

@class SSAccount, NSString;

@interface FAFamilySetupBuddyMLRequest : AAFamilyRequest {

	SSAccount* _iTunesAccount;
	NSString* _inviteCode;

}

@property (setter=setiTunesAccount:,nonatomic,retain) SSAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (nonatomic,copy) NSString * inviteCode;                                             //@synthesize inviteCode=_inviteCode - In the implementation block
-(BOOL)isUserInitiated;
-(id)urlRequest;
-(id)urlString;
-(SSAccount *)iTunesAccount;
-(void)setiTunesAccount:(id)arg1 ;
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
@end

