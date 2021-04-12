/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class HKHealthService, NSLock;

@interface HKHealthServiceSession : NSObject {

	HKHealthService* _service;
	NSLock* _propertyLock;
	unsigned long long _sessionIdentifier;
	/*^block*/id _sessionHandler;
	/*^block*/id _characteristicsHandler;

}

@property (nonatomic,retain) NSLock * propertyLock;                             //@synthesize propertyLock=_propertyLock - In the implementation block
@property (assign,nonatomic) unsigned long long sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) id sessionHandler;                                   //@synthesize sessionHandler=_sessionHandler - In the implementation block
@property (nonatomic,copy) id characteristicsHandler;                           //@synthesize characteristicsHandler=_characteristicsHandler - In the implementation block
@property (nonatomic,readonly) HKHealthService * service;                       //@synthesize service=_service - In the implementation block
-(id)initWithService:(id)arg1 ;
-(void)setSessionIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)sessionIdentifier;
-(NSLock *)propertyLock;
-(void)setPropertyLock:(NSLock *)arg1 ;
-(id)sessionHandler;
-(void)setSessionHandler:(id)arg1 ;
-(id)characteristicsHandler;
-(void)setCharacteristicsHandler:(id)arg1 ;
-(HKHealthService *)service;
@end

