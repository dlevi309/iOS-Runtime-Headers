/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

