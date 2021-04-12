/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSArray;

@interface PXTimelineSchedulerOptions : NSObject {

	double _timelineEntryDuration;
	double _bestContentEntryDuration;
	NSArray* _bestContentStartTimeHours;

}

@property (assign,nonatomic) double timelineEntryDuration;                     //@synthesize timelineEntryDuration=_timelineEntryDuration - In the implementation block
@property (assign,nonatomic) double bestContentEntryDuration;                  //@synthesize bestContentEntryDuration=_bestContentEntryDuration - In the implementation block
@property (nonatomic,retain) NSArray * bestContentStartTimeHours;              //@synthesize bestContentStartTimeHours=_bestContentStartTimeHours - In the implementation block
-(id)init;
-(double)timelineEntryDuration;
-(NSArray *)bestContentStartTimeHours;
-(double)bestContentEntryDuration;
-(void)setTimelineEntryDuration:(double)arg1 ;
-(void)setBestContentEntryDuration:(double)arg1 ;
-(void)setBestContentStartTimeHours:(NSArray *)arg1 ;
@end

