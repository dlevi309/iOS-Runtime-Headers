/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSString, NSData;

@interface AASecondaryAuthenticationResponse : AAResponse {

	NSString* _secondFactorToken;
	NSData* _buddyML;

}

@property (nonatomic,readonly) NSString * secondFactorToken;              //@synthesize secondFactorToken=_secondFactorToken - In the implementation block
@property (nonatomic,readonly) NSData * buddyML;                          //@synthesize buddyML=_buddyML - In the implementation block
-(NSData *)buddyML;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)secondFactorToken;
@end

