/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class ACAccount, NSArray;

@interface AMSAutomaticDownloadKindsResult : NSObject {

	ACAccount* _account;
	NSArray* _enabledMediaKinds;

}

@property (nonatomic,readonly) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSArray * enabledMediaKinds;              //@synthesize enabledMediaKinds=_enabledMediaKinds - In the implementation block
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 andEnabledMediaKinds:(id)arg2 ;
-(NSArray *)enabledMediaKinds;
@end

