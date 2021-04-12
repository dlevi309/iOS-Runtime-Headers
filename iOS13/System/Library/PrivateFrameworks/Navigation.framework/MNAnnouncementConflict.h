/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)announcementsAreSimilar;
-(double)timeGap;
-(double)desiredTimeGap;
-(MNAnnouncementPlanEvent *)firstEvent;
-(MNAnnouncementPlanEvent *)secondEvent;
-(void)setFirstEvent:(MNAnnouncementPlanEvent *)arg1 ;
-(void)setSecondEvent:(MNAnnouncementPlanEvent *)arg1 ;
-(void)setTimeGap:(double)arg1 ;
-(void)setDesiredTimeGap:(double)arg1 ;
-(void)setAnnouncementsAreSimilar:(BOOL)arg1 ;
@end

