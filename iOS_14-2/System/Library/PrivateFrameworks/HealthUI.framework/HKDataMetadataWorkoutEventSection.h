/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKDataMetadataSection.h>

@class HKWorkout, NSDateComponentsFormatter, HKWorkoutDurationNumberFormatter;

@interface HKDataMetadataWorkoutEventSection : HKDataMetadataSection {

	HKWorkout* _workout;
	NSDateComponentsFormatter* _dateFormatter;
	HKWorkoutDurationNumberFormatter* _durationFormatter;

}

@property (nonatomic,retain) HKWorkout * workout;                                               //@synthesize workout=_workout - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * dateFormatter;                         //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) HKWorkoutDurationNumberFormatter * durationFormatter;              //@synthesize durationFormatter=_durationFormatter - In the implementation block
-(id)sectionTitle;
-(id)initWithSample:(id)arg1 ;
-(NSDateComponentsFormatter *)dateFormatter;
-(HKWorkout *)workout;
-(void)setDateFormatter:(NSDateComponentsFormatter *)arg1 ;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)setWorkout:(HKWorkout *)arg1 ;
-(HKWorkoutDurationNumberFormatter *)durationFormatter;
-(void)setDurationFormatter:(HKWorkoutDurationNumberFormatter *)arg1 ;
@end

