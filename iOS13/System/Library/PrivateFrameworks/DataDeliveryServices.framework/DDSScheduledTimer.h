/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@class DDSScheduledTimerImpl;

@interface DDSScheduledTimer : NSObject {

	DDSScheduledTimerImpl* _impl;

}
+(id)nextFireDateForDate:(id)arg1 ;
+(id)scheduledTimerWithExpirationHandler:(/*^block*/id)arg1 ;
+(void)setOverrideInterval:(double)arg1 ;
-(void)dealloc;
-(id)initWithExpirationHandler:(/*^block*/id)arg1 ;
@end

