/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTVisitLocationPoints, RTVisit;

@interface RTVisitCluster : NSObject {

	RTVisitLocationPoints* _points;
	RTVisit* _visit;

}

@property (nonatomic,readonly) RTVisitLocationPoints * points;              //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) RTVisit * visit;                             //@synthesize visit=_visit - In the implementation block
-(id)init;
-(id)description;
-(RTVisitLocationPoints *)points;
-(RTVisit *)visit;
-(id)initWithPoints:(id)arg1 visit:(id)arg2 ;
-(id)initWithPoints:(id)arg1 ;
-(BOOL)isExitDateBeforeDate:(id)arg1 ;
-(BOOL)isDateInside:(id)arg1 ;
-(BOOL)isPartialAndExitDateIsEqualToDate:(id)arg1 ;
-(BOOL)isCompleteAndExitDateIsEqualToDate:(id)arg1 ;
@end

