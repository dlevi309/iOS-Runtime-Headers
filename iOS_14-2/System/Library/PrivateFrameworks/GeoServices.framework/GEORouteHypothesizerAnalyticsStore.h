/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface GEORouteHypothesizerAnalyticsStore : NSObject <NSSecureCoding> {

	double _observedEarlyDeltaFromRequiredTimeToLeave;
	double _observedLateDeltaFromRequiredTimeToLeave;
	unsigned long long _hypothesizerRerouteCount;
	unsigned long long _etaUpdatesAfterEventStart;
	BOOL _etaUpdatesWereReported;
	unsigned long long _hypothesisCount;
	BOOL _stopped;
	unsigned long long _uiNotificationType;
	NSDate* _lastGenerationDate;

}

@property (assign,nonatomic) unsigned long long etaUpdatesAfterEventStart;              //@synthesize etaUpdatesAfterEventStart=_etaUpdatesAfterEventStart - In the implementation block
@property (assign,nonatomic) BOOL etaUpdatesWereReported;                               //@synthesize etaUpdatesWereReported=_etaUpdatesWereReported - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)didArriveWithExpectedArrivalTime:(id)arg1 ;
-(void)setEtaUpdatesWereReported:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)etaUpdatesAfterEventStart;
-(void)didGenerateHypothesis;
-(void)didStopMoving;
-(BOOL)etaUpdatesWereReported;
-(id)initWithCoder:(id)arg1 ;
-(void)didReroute;
-(void)setEtaUpdatesAfterEventStart:(unsigned long long)arg1 ;
-(void)didStartMovingWithExpectedDepartureTime:(id)arg1 ;
-(void)didShowUI:(unsigned long long)arg1 ;
-(void)didStopHypothesizing;
-(void)dealloc;
@end

