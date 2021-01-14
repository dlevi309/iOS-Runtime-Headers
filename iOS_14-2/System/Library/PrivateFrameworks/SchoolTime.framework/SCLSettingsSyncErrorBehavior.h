/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/


@interface SCLSettingsSyncErrorBehavior : NSObject {

	unsigned long long _recoveryType;
	long long _retryInterval;

}

@property (nonatomic,readonly) unsigned long long recoveryType;              //@synthesize recoveryType=_recoveryType - In the implementation block
@property (nonatomic,readonly) long long retryInterval;                      //@synthesize retryInterval=_retryInterval - In the implementation block
-(long long)retryInterval;
-(id)initWithRecoveryType:(unsigned long long)arg1 retryInterval:(long long)arg2 ;
-(unsigned long long)recoveryType;
@end

