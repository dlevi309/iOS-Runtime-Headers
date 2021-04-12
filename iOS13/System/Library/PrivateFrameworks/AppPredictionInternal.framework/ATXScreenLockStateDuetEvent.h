/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/ATXDuetEvent.h>

@interface ATXScreenLockStateDuetEvent : ATXDuetEvent {

	long long _screenLockState;

}

@property (nonatomic,readonly) long long screenLockState;              //@synthesize screenLockState=_screenLockState - In the implementation block
-(id)description;
-(id)identifier;
-(id)initWithScreenLockState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithDKEvent:(id)arg1 ;
-(id)initWithCurrentContextStoreValues;
-(long long)screenLockState;
@end

