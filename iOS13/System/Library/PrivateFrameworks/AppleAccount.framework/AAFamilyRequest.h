/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, AAGrandSlamSigner;

@interface AAFamilyRequest : AARequest {

	ACAccount* _appleAccount;
	AAGrandSlamSigner* _grandSlamSigner;
	AAGrandSlamSigner* _familyGrandSlamSigner;

}

@property (nonatomic,readonly) BOOL isUserInitiated; 
-(BOOL)isUserInitiated;
-(id)urlRequest;
-(id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)_familyGrandSlamSigner;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 ;
-(id)initWithGrandSlamSigner:(id)arg1 ;
@end

