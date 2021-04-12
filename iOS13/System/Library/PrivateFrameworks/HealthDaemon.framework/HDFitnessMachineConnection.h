/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

