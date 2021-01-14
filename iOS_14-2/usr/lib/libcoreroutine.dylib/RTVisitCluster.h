/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTVisitLocationPoints, RTVisit;

@interface RTVisitCluster : NSObject {

	RTVisitLocationPoints* _points;
	RTVisit* _visit;

}

@property (nonatomic,readonly) RTVisitLocationPoints * points;              //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) RTVisit * visit;                             //@synthesize visit=_visit - In the implementation block
-(RTVisit *)visit;
-(id)initWithPoints:(id)arg1 ;
-(id)init;
-(BOOL)isExitDateBeforeDate:(id)arg1 ;
-(BOOL)isPartialAndExitDateIsEqualToDate:(id)arg1 ;
-(BOOL)isDateInside:(id)arg1 ;
-(id)description;
-(BOOL)isCompleteAndExitDateIsEqualToDate:(id)arg1 ;
-(id)initWithPoints:(id)arg1 visit:(id)arg2 ;
-(RTVisitLocationPoints *)points;
@end

