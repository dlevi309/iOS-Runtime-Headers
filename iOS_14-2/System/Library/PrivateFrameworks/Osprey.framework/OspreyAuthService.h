/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@class OspreyGRPCChannel, NSUUID;

@interface OspreyAuthService : NSObject {

	OspreyGRPCChannel* _channel;
	NSUUID* _authUUID;
	unsigned long long _authStrategyVersion;

}
-(id)initWithChannel:(id)arg1 authStrategyVersion:(unsigned long long)arg2 ;
-(void)certificateDataWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)createClientSessionWithData:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end

