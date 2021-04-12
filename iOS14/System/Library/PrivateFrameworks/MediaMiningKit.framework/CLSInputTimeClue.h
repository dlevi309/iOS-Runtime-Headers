/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSInputClue.h>

@class NSArray, NSSet, NSDate;

@interface CLSInputTimeClue : CLSInputClue {

	NSArray* _dateComponentsArray;
	NSArray* _events;
	NSSet* _localDates;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	NSSet* _universalDates;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;

}

@property (nonatomic,copy) NSArray * events;              //@synthesize events=_events - In the implementation block
+(id)clueWithDates:(id)arg1 ;
-(unsigned long long)numberOfDays;
-(id)localDates;
-(id)universalEndDate;
-(BOOL)isEqualToClue:(id)arg1 ;
-(id)localStartDate;
-(id)universalDates;
-(id)localEndDate;
-(id)universalStartDate;
-(void)setEvents:(NSArray *)arg1 ;
-(double)timeInterval;
-(id)description;
-(void)_computeDateProperties;
-(NSArray *)events;
-(void)_prepareWithProgressBlock:(/*^block*/id)arg1 ;
@end

