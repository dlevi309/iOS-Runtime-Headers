/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol SGSeekable;
@class SGLazyPurgeableResult, _PASNotificationToken;

@interface SGFlightData : NSObject {

	id<SGSeekable> _flightsFh;
	SGLazyPurgeableResult* _flightDataOffsets;
	id<SGSeekable> _flightsUpdateFh;
	SGLazyPurgeableResult* _flightUpdateDataOffsets;
	id<SGSeekable> _airportsFh;
	SGLazyPurgeableResult* _airportDataOffsets;
	id<SGSeekable> _airportsUpdateFh;
	SGLazyPurgeableResult* _airportUpdateDataOffsets;
	_PASNotificationToken* _assetUpdateToken;
	SGLazyPurgeableResult* _carrierNames;
	SGLazyPurgeableResult* _carrierCodesByName;
	SGLazyPurgeableResult* _carrierUpdateNames;
	SGLazyPurgeableResult* _carrierUpdateCodesByName;

}
+(id)sharedInstance;
+(id)sanitizeAirportName:(id)arg1 ;
+(id)airportNameNoiseKeywords;
-(id)init;
-(void)dealloc;
-(void)updateFlights;
-(void)updateAirports;
-(void)updateCarriers;
-(id)airportIataCodesForDataOffset:(id)arg1 ;
-(id)airportIataCodes;
-(id)namesForAirport:(id)arg1 withDataOffset:(id)arg2 andFileHandle:(id)arg3 ;
-(id)namesForAirport:(id)arg1 ;
-(id)bestLocalizedNameForAirport:(id)arg1 ;
-(id)timezoneOlsonCodeForAirport:(id)arg1 withDataOffset:(id)arg2 andFileHandle:(id)arg3 ;
-(id)timezoneOlsonCodeForAirport:(id)arg1 ;
-(id)latitudeAndLongitudeForAirport:(id)arg1 withDataOffset:(id)arg2 andFileHandle:(id)arg3 ;
-(id)latitudeAndLongitudeForAirport:(id)arg1 ;
-(id)carrierIataCodes;
-(id)carrierIataCodeForCarrierName:(id)arg1 ;
-(id)nameForCarrier:(id)arg1 ;
-(id)airportsServicedByCarrier:(id)arg1 flightNumber:(unsigned short)arg2 withDataOffset:(id)arg3 andFileHandle:(id)arg4 ;
-(id)airportsServicedByCarrier:(id)arg1 flightNumber:(unsigned short)arg2 ;
-(id)airportCodeForAirportName:(id)arg1 flightCarrier:(id)arg2 flightNumber:(unsigned short)arg3 outputInfos:(id)arg4 ;
-(id)airportCodeForAirportName:(id)arg1 flightCarrier:(id)arg2 flightNumber:(unsigned short)arg3 otherKnownFlightsToAirport:(id)arg4 outputInfos:(id)arg5 ;
@end

