/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class HKValueRange;

@interface WDSleepRoomViewControllerState : NSObject {

	unsigned long long _contextType;
	long long _timeScope;
	HKValueRange* _visibleRange;

}

@property (nonatomic,readonly) unsigned long long contextType;              //@synthesize contextType=_contextType - In the implementation block
@property (nonatomic,readonly) long long timeScope;                         //@synthesize timeScope=_timeScope - In the implementation block
@property (nonatomic,readonly) HKValueRange * visibleRange;                 //@synthesize visibleRange=_visibleRange - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)contextType;
-(HKValueRange *)visibleRange;
-(long long)timeScope;
-(id)initWithContextType:(unsigned long long)arg1 timeScope:(long long)arg2 visibleRange:(id)arg3 ;
@end

