/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSArray, NSDate;

@interface ATXPeriodicLogger : NSObject {

	NSArray* _sources;
	NSDate* _lastSent;
	double _uploadInterval;
	BOOL _enrolled;
	NSDate* _lastEnrolled;
	double _enrollmentRate;
	double _enrollmentPeriod;

}
+(id)readLastEnrolledFromDefaults;
+(id)readLastSentFromDefaults;
+(BOOL)readEnrollmentFromDefaults;
+(double)getEnrollmentRate;
+(id)readDateFromDefaultsForKey:(id)arg1 ;
-(id)init;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(void)submit:(id)arg1 ;
-(id)initWithSources:(id)arg1 uploadInterval:(double)arg2 enrollmentPeriod:(double)arg3 enrollmentRate:(double)arg4 ;
-(void)sendMetricsIfNeeded;
-(id)sendMetricsIfNeededAtThisTime:(id)arg1 ;
-(id)sendMetricsAtThisTime:(id)arg1 ;
-(id)compileAndSendMetrics:(id)arg1 ;
-(BOOL)isItTimeYet:(id)arg1 ;
-(id)getLastSent;
-(void)setLastSentToTime:(id)arg1 ;
-(BOOL)getEnrollment;
-(void)setEnrollment:(BOOL)arg1 ;
-(BOOL)determineEnrollment;
-(void)overrideEnrollmentRate:(double)arg1 ;
-(BOOL)hasEnrollmentExpired:(id)arg1 ;
-(id)getLastEnrolled;
-(void)setLastEnrolledToTime:(id)arg1 ;
-(void)setEnabledOnSourcesTo:(BOOL)arg1 ;
-(id)compileLog;
-(id)convertDictionaryToDataUnits:(id)arg1 ;
-(id)getUserId;
-(id)generateUserId;
-(void)clearUserId;
@end

