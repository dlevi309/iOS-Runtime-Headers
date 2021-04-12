/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/ATXDuetEvent.h>

@interface ATXCarPlayDuetEvent : ATXDuetEvent {

	long long _carPlayState;

}

@property (nonatomic,readonly) long long carPlayState;              //@synthesize carPlayState=_carPlayState - In the implementation block
-(id)description;
-(id)identifier;
-(id)initWithDKEvent:(id)arg1 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithCarPlayConnectedState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(long long)carPlayState;
@end

