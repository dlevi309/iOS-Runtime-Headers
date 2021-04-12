/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSDate, NSUUID;

@interface ATXDuetEvent : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSUUID* _locationIdentifier;

}

@property (nonatomic,readonly) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSUUID * locationIdentifier;              //@synthesize locationIdentifier=_locationIdentifier - In the implementation block
+(long long)_secondsInDayFromDate:(id)arg1 calendar:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(id)identifier;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSUUID *)locationIdentifier;
-(id)initWithDKEvent:(id)arg1 ;
-(id)initWithCurrentContextStoreValues;
-(void)setLocationIdentifier:(NSUUID *)arg1 ;
-(long long)startDateSecondsAfterMidnight;
-(long long)endDateSecondsAfterMidnight;
-(BOOL)isStartDateOnWeekday;
-(BOOL)isEndDateOnWeekday;
-(id)locationIdentifierUUIDString;
-(void)tagWithLocationOfInterestIdentifier:(id)arg1 ;
@end

