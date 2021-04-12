/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HKHealthService *)service;
-(unsigned long long)sessionIdentifier;
-(void)setSessionIdentifier:(unsigned long long)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)setSessionHandler:(id)arg1 ;
-(id)sessionHandler;
-(NSLock *)propertyLock;
-(void)setPropertyLock:(NSLock *)arg1 ;
-(id)characteristicsHandler;
-(void)setCharacteristicsHandler:(id)arg1 ;
@end

