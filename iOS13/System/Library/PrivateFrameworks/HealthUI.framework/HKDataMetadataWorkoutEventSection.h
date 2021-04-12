/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDateComponentsFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateComponentsFormatter *)arg1 ;
-(id)sectionTitle;
-(id)initWithSample:(id)arg1 ;
-(unsigned long long)numberOfRowsInSection;
-(HKWorkoutDurationNumberFormatter *)durationFormatter;
-(void)setDurationFormatter:(HKWorkoutDurationNumberFormatter *)arg1 ;
-(HKWorkout *)workout;
-(void)setWorkout:(HKWorkout *)arg1 ;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
@end

