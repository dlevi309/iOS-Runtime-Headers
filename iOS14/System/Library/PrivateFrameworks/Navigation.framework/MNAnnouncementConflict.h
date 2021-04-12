/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class MNAnnouncementPlanEvent;

@interface MNAnnouncementConflict : NSObject {

	BOOL _announcementsAreSimilar;
	MNAnnouncementPlanEvent* _firstEvent;
	MNAnnouncementPlanEvent* _secondEvent;
	double _timeGap;
	double _desiredTimeGap;

}

@property (nonatomic,retain) MNAnnouncementPlanEvent * firstEvent;               //@synthesize firstEvent=_firstEvent - In the implementation block
@property (nonatomic,retain) MNAnnouncementPlanEvent * secondEvent;              //@synthesize secondEvent=_secondEvent - In the implementation block
@property (assign,nonatomic) double timeGap;                                     //@synthesize timeGap=_timeGap - In the implementation block
@property (assign,nonatomic) double desiredTimeGap;                              //@synthesize desiredTimeGap=_desiredTimeGap - In the implementation block
@property (assign,nonatomic) BOOL announcementsAreSimilar;                       //@synthesize announcementsAreSimilar=_announcementsAreSimilar - In the implementation block
-(id)description;
-(double)timeGap;
-(BOOL)announcementsAreSimilar;
-(double)desiredTimeGap;
-(MNAnnouncementPlanEvent *)firstEvent;
-(MNAnnouncementPlanEvent *)secondEvent;
-(void)setFirstEvent:(MNAnnouncementPlanEvent *)arg1 ;
-(void)setSecondEvent:(MNAnnouncementPlanEvent *)arg1 ;
-(void)setTimeGap:(double)arg1 ;
-(void)setDesiredTimeGap:(double)arg1 ;
-(void)setAnnouncementsAreSimilar:(BOOL)arg1 ;
@end

