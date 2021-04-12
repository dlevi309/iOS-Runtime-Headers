/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol GEOTransitSystem;
@class MKMapItem, MKTransitSectionPagingFilter, NSSet, NSDate;

@interface MKTransitSectionController : NSObject {

	MKMapItem* _mapItem;
	MKTransitSectionPagingFilter* __pagingFilter;
	NSSet* _linesToShow;
	unsigned long long _numberOfRows;
	unsigned long long _numberOfFilteredRows;
	unsigned long long _numberOfFilteredLines;
	BOOL _needsBuildRows;
	id<GEOTransitSystem> _system;
	NSDate* _departureCutoffDate;
	NSDate* _expiredHighFrequencyCutoffDate;
	NSSet* _incidentEntitiesToExclude;

}

@property (nonatomic,readonly) id<GEOTransitSystem> system;                               //@synthesize system=_system - In the implementation block
@property (nonatomic,retain) NSDate * departureCutoffDate;                                //@synthesize departureCutoffDate=_departureCutoffDate - In the implementation block
@property (nonatomic,retain) NSDate * expiredHighFrequencyCutoffDate;                     //@synthesize expiredHighFrequencyCutoffDate=_expiredHighFrequencyCutoffDate - In the implementation block
@property (nonatomic,retain) NSSet * incidentEntitiesToExclude;                           //@synthesize incidentEntitiesToExclude=_incidentEntitiesToExclude - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFilteredLines;                  //@synthesize numberOfFilteredLines=_numberOfFilteredLines - In the implementation block
@property (nonatomic,readonly) MKTransitSectionPagingFilter * _pagingFilter;              //@synthesize _pagingFilter=__pagingFilter - In the implementation block
-(id)init;
-(unsigned long long)numberOfRows;
-(id<GEOTransitSystem>)system;
-(void)_setNeedsBuildRows;
-(MKTransitSectionPagingFilter *)_pagingFilter;
-(BOOL)_needsBuildRows;
-(void)_buildRows;
-(NSDate *)departureCutoffDate;
-(id)initWithMapItem:(id)arg1 system:(id)arg2 ;
-(void)setDepartureCutoffDate:(NSDate *)arg1 ;
-(void)setExpiredHighFrequencyCutoffDate:(NSDate *)arg1 ;
-(void)setIncidentEntitiesToExclude:(NSSet *)arg1 ;
-(void)incrementPagingFilter;
-(BOOL)hasFilteredRows;
-(BOOL)hasFilteredLines;
-(id)linesToShow;
-(NSDate *)expiredHighFrequencyCutoffDate;
-(NSSet *)incidentEntitiesToExclude;
-(unsigned long long)numberOfFilteredLines;
@end

