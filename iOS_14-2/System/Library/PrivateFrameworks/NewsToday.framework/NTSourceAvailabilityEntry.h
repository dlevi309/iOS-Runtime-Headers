/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/


@protocol NTSourceAvailabilityEntry <NSObject>
@property (nonatomic,readonly) Class todayResultsFetchDescriptorClass; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,copy) id availabilityChangedNotificationBlock; 
@required
-(BOOL)isAvailable;
-(Class)todayResultsFetchDescriptorClass;
-(id)availabilityChangedNotificationBlock;
-(void)setAvailabilityChangedNotificationBlock:(/*^block*/id)arg1;

@end

