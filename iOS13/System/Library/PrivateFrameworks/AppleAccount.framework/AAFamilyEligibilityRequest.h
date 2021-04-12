/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAFamilyRequest.h>

@class SSAccount;

@interface AAFamilyEligibilityRequest : AAFamilyRequest {

	SSAccount* _iTunesAccount;

}

@property (nonatomic,retain) SSAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
+(Class)responseClass;
-(id)urlRequest;
-(id)urlString;
-(SSAccount *)iTunesAccount;
-(void)setITunesAccount:(SSAccount *)arg1 ;
@end

