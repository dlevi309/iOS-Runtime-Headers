/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSString, NSArray;

@interface PGPublicEventCriteria : NSObject {

	BOOL _allowsExpandingTimeAttendance;
	NSString* _eventCategory;
	double _minimumTimeAttendance;
	double _maximumDistance;
	long long _minimumAttendance;
	NSArray* _disambiguationCriteria;
	NSArray* _highConfidenceCriteria;
	NSArray* _prohibitedCriteria;

}

@property (nonatomic,retain) NSString * eventCategory;                        //@synthesize eventCategory=_eventCategory - In the implementation block
@property (assign,nonatomic) double minimumTimeAttendance;                    //@synthesize minimumTimeAttendance=_minimumTimeAttendance - In the implementation block
@property (assign,nonatomic) double maximumDistance;                          //@synthesize maximumDistance=_maximumDistance - In the implementation block
@property (assign,nonatomic) BOOL allowsExpandingTimeAttendance;              //@synthesize allowsExpandingTimeAttendance=_allowsExpandingTimeAttendance - In the implementation block
@property (assign,nonatomic) long long minimumAttendance;                     //@synthesize minimumAttendance=_minimumAttendance - In the implementation block
@property (nonatomic,retain) NSArray * disambiguationCriteria;                //@synthesize disambiguationCriteria=_disambiguationCriteria - In the implementation block
@property (nonatomic,retain) NSArray * highConfidenceCriteria;                //@synthesize highConfidenceCriteria=_highConfidenceCriteria - In the implementation block
@property (nonatomic,retain) NSArray * prohibitedCriteria;                    //@synthesize prohibitedCriteria=_prohibitedCriteria - In the implementation block
@property (nonatomic,readonly) BOOL hasMinimumAttendance; 
-(void)setMaximumDistance:(double)arg1 ;
-(NSString *)eventCategory;
-(double)maximumDistance;
-(BOOL)_hasSufficientTimeOverlapForEvent:(id)arg1 matchingOptions:(id)arg2 ;
-(BOOL)_isMatchingMeaningDisambiguationForEvent:(id)arg1 matchingOptions:(id)arg2 withHighConfidence:(BOOL*)arg3 ;
-(BOOL)isMatchingEvent:(id)arg1 matchingOptions:(id)arg2 withHighConfidence:(BOOL*)arg3 matchingDistance:(double*)arg4 ;
-(BOOL)hasMinimumAttendance;
-(void)setEventCategory:(NSString *)arg1 ;
-(double)minimumTimeAttendance;
-(void)setMinimumTimeAttendance:(double)arg1 ;
-(long long)minimumAttendance;
-(void)setMinimumAttendance:(long long)arg1 ;
-(BOOL)allowsExpandingTimeAttendance;
-(void)setAllowsExpandingTimeAttendance:(BOOL)arg1 ;
-(NSArray *)disambiguationCriteria;
-(void)setDisambiguationCriteria:(NSArray *)arg1 ;
-(NSArray *)highConfidenceCriteria;
-(void)setHighConfidenceCriteria:(NSArray *)arg1 ;
-(NSArray *)prohibitedCriteria;
-(void)setProhibitedCriteria:(NSArray *)arg1 ;
@end

