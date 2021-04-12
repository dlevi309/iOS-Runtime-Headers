/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKHealthServiceDiscovery : NSObject {

	long long _serviceType;
	unsigned long long _discoveryIdentifier;
	/*^block*/id _discoveryHandler;

}

@property (assign,nonatomic) unsigned long long discoveryIdentifier;              //@synthesize discoveryIdentifier=_discoveryIdentifier - In the implementation block
@property (nonatomic,copy) id discoveryHandler;                                   //@synthesize discoveryHandler=_discoveryHandler - In the implementation block
@property (nonatomic,readonly) long long serviceType;                             //@synthesize serviceType=_serviceType - In the implementation block
-(id)initWithType:(long long)arg1 ;
-(long long)serviceType;
-(id)initForAllTypes;
-(unsigned long long)discoveryIdentifier;
-(void)setDiscoveryIdentifier:(unsigned long long)arg1 ;
-(id)discoveryHandler;
-(void)setDiscoveryHandler:(id)arg1 ;
@end

