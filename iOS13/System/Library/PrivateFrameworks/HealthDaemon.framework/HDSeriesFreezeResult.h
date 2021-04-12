/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

