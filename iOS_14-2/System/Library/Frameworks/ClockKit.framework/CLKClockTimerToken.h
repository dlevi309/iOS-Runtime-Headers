/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


@class NSNumber, CLKClockTimer;

@interface CLKClockTimerToken : NSObject {

	NSNumber* _id;
	BOOL _wantsCommit;
	BOOL _wantsHighAccuracy;
	BOOL _isActive;
	long long _updateFrequency;
	/*^block*/id _handler;
	/*^block*/id _log;
	CLKClockTimer* _owner;

}

@property (assign,nonatomic) long long updateFrequency;                 //@synthesize updateFrequency=_updateFrequency - In the implementation block
@property (assign,nonatomic) BOOL wantsCommit;                          //@synthesize wantsCommit=_wantsCommit - In the implementation block
@property (assign,nonatomic) BOOL wantsHighAccuracy;                    //@synthesize wantsHighAccuracy=_wantsHighAccuracy - In the implementation block
@property (nonatomic,copy) id handler;                                  //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) id log;                                      //@synthesize log=_log - In the implementation block
@property (assign,nonatomic,__weak) CLKClockTimer * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) BOOL isActive;                             //@synthesize isActive=_isActive - In the implementation block
-(CLKClockTimer *)owner;
-(id)log;
-(void)setHandler:(id)arg1 ;
-(BOOL)isActive;
-(void)setLog:(id)arg1 ;
-(void)setOwner:(CLKClockTimer *)arg1 ;
-(unsigned long long)hash;
-(void)setIsActive:(BOOL)arg1 ;
-(id)handler;
-(id)initWithID:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setUpdateFrequency:(long long)arg1 ;
-(long long)updateFrequency;
-(BOOL)wantsCommit;
-(void)setWantsCommit:(BOOL)arg1 ;
-(BOOL)wantsHighAccuracy;
-(void)setWantsHighAccuracy:(BOOL)arg1 ;
@end

