/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTVisit;

@interface RTVisitMonitorState : NSObject {

	RTVisit* _lastVisitIncident;
	RTVisit* _lastLowConfidenceVisitIncident;

}

@property (nonatomic,retain) RTVisit * lastVisitIncident;                           //@synthesize lastVisitIncident=_lastVisitIncident - In the implementation block
@property (nonatomic,retain) RTVisit * lastLowConfidenceVisitIncident;              //@synthesize lastLowConfidenceVisitIncident=_lastLowConfidenceVisitIncident - In the implementation block
-(void)dump;
-(id)init;
-(id)initWithLastVisit:(id)arg1 lastLowConfidenceVisit:(id)arg2 ;
-(RTVisit *)lastVisitIncident;
-(RTVisit *)lastLowConfidenceVisitIncident;
-(void)setLastVisitIncident:(RTVisit *)arg1 ;
-(void)setLastLowConfidenceVisitIncident:(RTVisit *)arg1 ;
@end

