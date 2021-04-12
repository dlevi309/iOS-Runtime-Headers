/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAFamilyRequest.h>

@class ACAccount;

@interface AAFamilyEligibilityRequest : AAFamilyRequest {

	ACAccount* _iTunesAccount;

}

@property (nonatomic,retain) ACAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
+(Class)responseClass;
-(id)urlString;
-(ACAccount *)iTunesAccount;
-(id)urlRequest;
-(void)setITunesAccount:(ACAccount *)arg1 ;
@end

