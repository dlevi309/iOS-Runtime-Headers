/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HKFitnessMachineConnectionClientInterface;
@class NSUUID;

@interface HDFitnessMachineConnection : NSObject {

	NSUUID* _uuid;
	id<HKFitnessMachineConnectionClientInterface> _client;

}

@property (nonatomic,readonly) NSUUID * uuid;                                                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) id<HKFitnessMachineConnectionClientInterface> client;              //@synthesize client=_client - In the implementation block
-(NSUUID *)uuid;
-(id<HKFitnessMachineConnectionClientInterface>)client;
-(id)initWithUUID:(id)arg1 client:(id)arg2 ;
@end

