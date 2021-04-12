/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSUUID;

@interface HDSeriesFreezeResult : NSObject {

	long long _status;
	NSUUID* _frozenIdentifier;

}

@property (nonatomic,readonly) long long status;                            //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * frozenIdentifier;              //@synthesize frozenIdentifier=_frozenIdentifier - In the implementation block
-(long long)status;
-(NSUUID *)frozenIdentifier;
-(id)initWithStatus:(long long)arg1 frozenIdentifier:(id)arg2 ;
@end

