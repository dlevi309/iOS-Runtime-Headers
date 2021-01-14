/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSUUID;

@interface HMDUserActionPredictionSubscriber : NSObject {

	NSUUID* _uuid;
	unsigned long long _predictionLimit;

}

@property (copy,readonly) NSUUID * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long predictionLimit;              //@synthesize predictionLimit=_predictionLimit - In the implementation block
-(NSUUID *)uuid;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)predictionLimit;
-(id)initWithUUID:(id)arg1 predictionLimit:(unsigned long long)arg2 ;
@end

