/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTStateDepictionOnePredEl, NSUUID;

@interface RTStateDepcitionOneStatePred : NSObject {

	RTStateDepictionOnePredEl* _weekly;
	RTStateDepictionOnePredEl* _daily;
	NSUUID* _stateUUID;

}

@property (nonatomic,retain) RTStateDepictionOnePredEl * weekly;              //@synthesize weekly=_weekly - In the implementation block
@property (nonatomic,retain) RTStateDepictionOnePredEl * daily;               //@synthesize daily=_daily - In the implementation block
@property (nonatomic,retain) NSUUID * stateUUID;                              //@synthesize stateUUID=_stateUUID - In the implementation block
-(id)init;
-(void)setWeekly:(RTStateDepictionOnePredEl *)arg1 ;
-(void)setDaily:(RTStateDepictionOnePredEl *)arg1 ;
-(RTStateDepictionOnePredEl *)weekly;
-(RTStateDepictionOnePredEl *)daily;
-(NSUUID *)stateUUID;
-(void)setStateUUID:(NSUUID *)arg1 ;
@end

