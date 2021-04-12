/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)urlRequest;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 ;
-(BOOL)isUserInitiated;
-(id)_familyGrandSlamSigner;
-(id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)initWithGrandSlamSigner:(id)arg1 ;
@end

