/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(double)timeInterval;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
-(id)localStartDate;
-(id)localEndDate;
-(id)universalDates;
-(id)universalStartDate;
-(id)universalEndDate;
-(BOOL)isEqualToClue:(id)arg1 ;
-(id)localDates;
-(unsigned long long)numberOfDays;
-(void)_prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(void)_computeDateProperties;
@end

