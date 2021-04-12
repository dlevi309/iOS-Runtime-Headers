/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <WeatherFoundation/WFTask.h>

@class NSString, MKLocalSearchCompletion, WFLocation;

@interface WFGeocodeRequest : WFTask {

	/*^block*/id _resultHandler;
	NSString* _searchString;
	MKLocalSearchCompletion* _autocompleteSearchResult;
	WFLocation* _geocodedResult;
	CLLocationCoordinate2D _coordinate;

}

@property (retain) NSString * searchString;                                         //@synthesize searchString=_searchString - In the implementation block
@property (retain) MKLocalSearchCompletion * autocompleteSearchResult;              //@synthesize autocompleteSearchResult=_autocompleteSearchResult - In the implementation block
@property (assign) CLLocationCoordinate2D coordinate;                               //@synthesize coordinate=_coordinate - In the implementation block
@property (retain) WFLocation * geocodedResult;                                     //@synthesize geocodedResult=_geocodedResult - In the implementation block
@property (readonly) id resultHandler;                                              //@synthesize resultHandler=_resultHandler - In the implementation block
@property (readonly) NSString * searchTerm; 
-(id)resultHandler;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
-(void)setAutocompleteSearchResult:(MKLocalSearchCompletion *)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(NSString *)searchTerm;
-(id)description;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)cleanup;
-(WFLocation *)geocodedResult;
-(void)setSearchString:(NSString *)arg1 ;
-(MKLocalSearchCompletion *)autocompleteSearchResult;
-(id)initWithSearchString:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 resultHandler:(/*^block*/id)arg2 ;
-(NSString *)searchString;
-(void)setGeocodedResult:(WFLocation *)arg1 ;
-(id)initWithSearchCompletion:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

