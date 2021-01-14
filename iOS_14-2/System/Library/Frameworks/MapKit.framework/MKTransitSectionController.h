/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)linesToShow;
-(void)_buildRows;
-(id)init;
-(void)_setNeedsBuildRows;
-(MKTransitSectionPagingFilter *)_pagingFilter;
-(BOOL)_needsBuildRows;
-(NSDate *)departureCutoffDate;
-(id)initWithMapItem:(id)arg1 system:(id)arg2 ;
-(BOOL)hasFilteredRows;
-(void)setDepartureCutoffDate:(NSDate *)arg1 ;
-(void)setExpiredHighFrequencyCutoffDate:(NSDate *)arg1 ;
-(void)setIncidentEntitiesToExclude:(NSSet *)arg1 ;
-(void)incrementPagingFilter;
-(BOOL)hasFilteredLines;
-(NSDate *)expiredHighFrequencyCutoffDate;
-(NSSet *)incidentEntitiesToExclude;
-(unsigned long long)numberOfFilteredLines;
-(unsigned long long)numberOfRows;
-(id<GEOTransitSystem>)system;
@end

