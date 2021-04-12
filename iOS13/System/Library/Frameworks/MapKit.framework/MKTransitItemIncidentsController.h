/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol GEOTransitLineItem;
@class MKMapItem, NSArray, NSMutableDictionary, NSSet, NSDate;

@interface MKTransitItemIncidentsController : NSObject {

	MKMapItem* _mapItem;
	id<GEOTransitLineItem> _lineItem;
	NSArray* _validIncidents;
	NSMutableDictionary* _incidentsForDepartureSequence;
	NSMutableDictionary* _incidentsForSystem;
	NSMutableDictionary* _incidentsForLine;
	NSMutableDictionary* _incidentsForMapItem;
	NSSet* _blockedIncidentEntities;
	NSDate* _referenceDate;

}

@property (nonatomic,retain) NSDate * referenceDate;              //@synthesize referenceDate=_referenceDate - In the implementation block
-(NSDate *)referenceDate;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(void)resetCache;
-(id)_incidentsAffectingMuid:(unsigned long long)arg1 ;
-(id)incidentsForSystem:(id)arg1 ;
-(id)incidentsForLine:(id)arg1 ;
-(id)initWithLineItem:(id)arg1 ;
-(id)validIncidents;
-(id)incidentsForMapItem:(id)arg1 ;
-(id)incidentsForDepartureSequence:(id)arg1 ;
-(id)blockedIncidentEntities;
@end

