/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTStateDepictionOneState, RTStateModelLocation, RTMapItem, NSDate, NSString;

@interface RTStateDepiction : NSObject <NSSecureCoding> {

	long long _numOfDataPts;
	RTStateDepictionOneState* _clusterState;

}

@property (nonatomic,retain) RTStateDepictionOneState * clusterState;              //@synthesize clusterState=_clusterState - In the implementation block
@property (assign,nonatomic) long long numOfDataPts;                               //@synthesize numOfDataPts=_numOfDataPts - In the implementation block
@property (assign,nonatomic) unsigned long long mapItemSource; 
@property (nonatomic,retain) id<GEOMapItem> geoMapItem; 
@property (nonatomic,retain) RTStateModelLocation * location; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) unsigned long long typeSource; 
@property (nonatomic,retain) RTMapItem * mapItem; 
@property (nonatomic,retain) NSDate * geocodeDate; 
@property (nonatomic,copy) NSString * customLabel; 
+(BOOL)supportsSecureCoding;
+(long long)maximumNumberOfDataPoints;
+(double)quantizeTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)init;
-(RTStateModelLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setClusterState:(RTStateDepictionOneState *)arg1 ;
-(RTStateDepictionOneState *)clusterState;
-(RTMapItem *)mapItem;
-(void)setLocation:(RTStateModelLocation *)arg1 ;
-(unsigned long long)typeSource;
-(void)setGeoMapItem:(id<GEOMapItem>)arg1 ;
-(id)description;
-(NSString *)customLabel;
-(void)setCustomLabel:(NSString *)arg1 ;
-(void)setMapItem:(RTMapItem *)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id<GEOMapItem>)geoMapItem;
-(unsigned long long)mapItemSource;
-(void)setMapItemSource:(unsigned long long)arg1 ;
-(void)setTypeSource:(unsigned long long)arg1 ;
-(id)initWithLocation:(id)arg1 type:(long long)arg2 typeSource:(unsigned long long)arg3 customLabel:(id)arg4 mapItem:(id)arg5 ;
-(NSDate *)geocodeDate;
-(void)setGeocodeDate:(NSDate *)arg1 ;
-(void)_performIntegrityCheck;
-(void)_performErrorCorrection;
-(long long)numOfDataPts;
-(void)setNumOfDataPts:(long long)arg1 ;
-(id)lastEntyExit;
-(BOOL)exemptFromPurge;
-(id)getAllOneVisits;
-(void)submitEntry:(double)arg1 exit:(double)arg2 ;
-(double)getAggTimeScaleFactor:(double)arg1 predictionWindow:(double)arg2 ;
-(void)removeEntry:(double)arg1 exit:(double)arg2 ;
-(void)incrementNumOfDataPtsByInteger:(long long)arg1 ;
-(double)getLastVisit;
-(BOOL)cleanState:(double)arg1 ;
-(id)getRecentVisits:(double)arg1 ;
-(void)addOneVisitsFromStateDepiction:(id)arg1 ;
-(unsigned long long)getNumOfVisitsOverall;
-(id)getAggStateStat;
-(void)showState;
-(id)getEarliestLatestEntry;
-(id)getGetWeeklyStats:(double)arg1 numOfWeeks:(int)arg2 uniqueID:(id)arg3 ;
-(id)getPredState:(double)arg1 predictionWindow:(double)arg2 numOfWeeks:(int)arg3 uniqueID:(id)arg4 ;
-(void)removeAllVisitsExceptMostRecent;
-(id)_filterEntryExitData:(id)arg1 options:(id)arg2 ;
-(id)_referenceAdjustEntryExitDates:(id)arg1 options:(id)arg2 ;
-(id)_excludeEntryExitOutlierDates:(id)arg1 options:(id)arg2 ;
-(double)_calculateStandardDeviationForDates:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(double)calculateStandardDeviationWithOptions:(id)arg1 error:(id*)arg2 ;
@end

