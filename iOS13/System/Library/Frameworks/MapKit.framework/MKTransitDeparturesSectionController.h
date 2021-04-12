/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKTransitSectionController.h>

@class NSString, NSArray, NSMapTable, NSDictionary, MKTransitDepartureServiceGapFormatter;

@interface MKTransitDeparturesSectionController : MKTransitSectionController {

	NSString* _direction;
	NSArray* _sequences;
	NSMapTable* _sequencesToInclude;
	NSDictionary* _serviceGapStrings;
	BOOL _needsFindRowForServiceGap;
	BOOL _needsFindDeparturesAreVehicleSpecific;
	BOOL _departuresAreVehicleSpecific;
	MKTransitDepartureServiceGapFormatter* _serviceGapFormatter;

}

@property (nonatomic,retain) MKTransitDepartureServiceGapFormatter * serviceGapFormatter;              //@synthesize serviceGapFormatter=_serviceGapFormatter - In the implementation block
@property (nonatomic,readonly) BOOL showOperatingHours; 
@property (nonatomic,readonly) BOOL departuresAreVehicleSpecific;                                      //@synthesize departuresAreVehicleSpecific=_departuresAreVehicleSpecific - In the implementation block
-(id)init;
-(id)sequences;
-(BOOL)departuresAreVehicleSpecific;
-(void)_setNeedsBuildRows;
-(id)_pagingFilter;
-(void)_buildRows;
-(id)initWithMapItem:(id)arg1 system:(id)arg2 ;
-(void)setDepartureCutoffDate:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 system:(id)arg2 direction:(id)arg3 ;
-(id)sequenceForRow:(long long)arg1 outIsNewLine:(out BOOL*)arg2 outNextLineIsSame:(out BOOL*)arg3 ;
-(void)_serviceGapDate:(out id*)arg1 string:(out id*)arg2 forSequence:(id)arg3 withDepartureIndex:(unsigned long long)arg4 ;
-(BOOL)_isDateLastDeparture:(id)arg1 withNextDepartureDate:(id)arg2 forSequence:(id)arg3 ;
-(MKTransitDepartureServiceGapFormatter *)serviceGapFormatter;
-(id)_nextLastDepartureDateForSequence:(id)arg1 afterDate:(id)arg2 ;
-(BOOL)showOperatingHours;
-(id)serviceGapDescriptionForRow:(long long)arg1 ;
-(void)setServiceGapFormatter:(MKTransitDepartureServiceGapFormatter *)arg1 ;
@end

