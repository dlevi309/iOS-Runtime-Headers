/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)resetCache;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(NSDate *)referenceDate;
-(id)_incidentsAffectingMuid:(unsigned long long)arg1 ;
-(id)incidentsForSystem:(id)arg1 ;
-(id)incidentsForLine:(id)arg1 ;
-(id)initWithLineItem:(id)arg1 ;
-(id)validIncidents;
-(id)incidentsForMapItem:(id)arg1 ;
-(id)incidentsForDepartureSequence:(id)arg1 ;
-(id)blockedIncidentEntities;
-(id)initWithMapItem:(id)arg1 ;
@end

