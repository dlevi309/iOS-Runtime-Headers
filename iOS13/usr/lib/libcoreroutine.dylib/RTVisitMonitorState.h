/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTVisit;

@interface RTVisitMonitorState : NSObject {

	RTVisit* _lastVisitIncident;
	RTVisit* _lastLowConfidenceVisitIncident;

}

@property (nonatomic,retain) RTVisit * lastVisitIncident;                           //@synthesize lastVisitIncident=_lastVisitIncident - In the implementation block
@property (nonatomic,retain) RTVisit * lastLowConfidenceVisitIncident;              //@synthesize lastLowConfidenceVisitIncident=_lastLowConfidenceVisitIncident - In the implementation block
-(id)init;
-(void)dump;
-(id)initWithLastVisit:(id)arg1 lastLowConfidenceVisit:(id)arg2 ;
-(RTVisit *)lastVisitIncident;
-(RTVisit *)lastLowConfidenceVisitIncident;
-(void)setLastVisitIncident:(RTVisit *)arg1 ;
-(void)setLastLowConfidenceVisitIncident:(RTVisit *)arg1 ;
@end

