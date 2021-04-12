/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(CLLocationCoordinate2D)coordinate;
-(void)cleanup;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(id)resultHandler;
-(NSString *)searchTerm;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)initWithSearchString:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(id)initWithSearchCompletion:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)handleCancellation;
-(MKLocalSearchCompletion *)autocompleteSearchResult;
-(void)setGeocodedResult:(WFLocation *)arg1 ;
-(WFLocation *)geocodedResult;
-(void)setAutocompleteSearchResult:(MKLocalSearchCompletion *)arg1 ;
@end

