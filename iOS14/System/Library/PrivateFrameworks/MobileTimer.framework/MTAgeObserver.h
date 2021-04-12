/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSNumber, HKHealthStore;

@interface MTAgeObserver : NSObject {

	int _characteristicUpdateToken;
	NSNumber* _age;
	HKHealthStore* _healthStore;

}

@property (nonatomic,retain) NSNumber * age;                             //@synthesize age=_age - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                //@synthesize healthStore=_healthStore - In the implementation block
@property (assign,nonatomic) int characteristicUpdateToken;              //@synthesize characteristicUpdateToken=_characteristicUpdateToken - In the implementation block
+(id)sharedAgeObserver;
+(id)age;
-(HKHealthStore *)healthStore;
-(id)_computeAge;
-(id)init;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)_registerForSignificantTimeChangeNotification;
-(void)setAge:(NSNumber *)arg1 ;
-(NSNumber *)age;
-(void)checkForAgeChange;
-(int)characteristicUpdateToken;
-(void)setCharacteristicUpdateToken:(int)arg1 ;
-(void)dealloc;
@end

