/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol _HKContextChangeDelegate
@property (assign,nonatomic) BOOL durationContextSelected; 
@property (assign,nonatomic) BOOL scheduleContextSelected; 
@property (assign,nonatomic) BOOL baseDisplayIsSchedule; 
@property (assign,nonatomic) BOOL shouldHighlightBaseDisplayContext; 
@required
-(BOOL)durationContextSelected;
-(BOOL)scheduleContextSelected;
-(void)setDurationContextSelected:(BOOL)arg1;
-(void)setScheduleContextSelected:(BOOL)arg1;
-(BOOL)baseDisplayIsSchedule;
-(void)setBaseDisplayIsSchedule:(BOOL)arg1;
-(BOOL)shouldHighlightBaseDisplayContext;
-(void)setShouldHighlightBaseDisplayContext:(BOOL)arg1;

@end

