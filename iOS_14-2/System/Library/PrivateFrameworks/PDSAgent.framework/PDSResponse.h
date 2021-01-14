/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/


@class NSDictionary;

@interface PDSResponse : NSObject {

	long long _status;
	NSDictionary* _statusByUser;
	long long _ttl;

}

@property (nonatomic,readonly) long long status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSDictionary * statusByUser;              //@synthesize statusByUser=_statusByUser - In the implementation block
@property (nonatomic,readonly) long long ttl;                            //@synthesize ttl=_ttl - In the implementation block
-(id)description;
-(long long)ttl;
-(long long)status;
-(NSDictionary *)statusByUser;
-(id)initWithStatus:(long long)arg1 statusByUser:(id)arg2 ttl:(long long)arg3 ;
@end

