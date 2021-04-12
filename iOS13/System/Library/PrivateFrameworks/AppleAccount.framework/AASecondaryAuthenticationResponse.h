/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)secondFactorToken;
-(NSData *)buddyML;
@end

