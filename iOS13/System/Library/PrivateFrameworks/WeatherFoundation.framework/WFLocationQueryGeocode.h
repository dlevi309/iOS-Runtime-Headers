/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/WFLocationQuery.h>

@class WFResponse, WFTaskIdentifier, MKLocalSearchCompletion, NSString, CLGeocoder, MKLocalSearch;

@interface WFLocationQueryGeocode : NSObject <WFLocationQuery> {

	BOOL _finished;
	WFTaskIdentifier* identifier;
	MKLocalSearchCompletion* _searchCompletion;
	NSString* _searchString;
	/*^block*/id _resultHandler;
	WFResponse* _response;
	CLGeocoder* _reverseGeocoder;
	MKLocalSearch* _search;
	CLLocationCoordinate2D _searchCoordinate;
	CLLocationCoordinate2D _unshiftedCoordinate;

}

@property (copy) id resultHandler;                                                    //@synthesize resultHandler=_resultHandler - In the implementation block
@property (retain) WFResponse * response;                                             //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) CLGeocoder * reverseGeocoder;                            //@synthesize reverseGeocoder=_reverseGeocoder - In the implementation block
@property (nonatomic,retain) MKLocalSearch * search;                                  //@synthesize search=_search - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D searchCoordinate;                 //@synthesize searchCoordinate=_searchCoordinate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D unshiftedCoordinate;              //@synthesize unshiftedCoordinate=_unshiftedCoordinate - In the implementation block
@property (readonly) MKLocalSearchCompletion * searchCompletion;                      //@synthesize searchCompletion=_searchCompletion - In the implementation block
@property (readonly) NSString * searchString;                                         //@synthesize searchString=_searchString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) WFTaskIdentifier * identifier; 
+(id)queryWithCoordinate:(CLLocationCoordinate2D)arg1 resultHandler:(/*^block*/id)arg2 ;
+(id)clReverseGeocoderCache;
+(id)mkLocalSearchGeoCodeCache;
+(id)queryWithDictionaryRepresentation:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(id)queryWithSearchCompletion:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)invalidateCaches;
+(id)queryWithSearchString:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(WFTaskIdentifier *)identifier;
-(void)cancel;
-(void)start;
-(void)setIdentifier:(WFTaskIdentifier *)arg1 ;
-(WFResponse *)response;
-(void)setResponse:(WFResponse *)arg1 ;
-(NSString *)searchString;
-(MKLocalSearch *)search;
-(void)setSearch:(MKLocalSearch *)arg1 ;
-(CLLocationCoordinate2D)searchCoordinate;
-(MKLocalSearchCompletion *)searchCompletion;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)initWithSearchString:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(CLGeocoder *)reverseGeocoder;
-(void)setReverseGeocoder:(CLGeocoder *)arg1 ;
-(void)setUnshiftedCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)initWithSearchCompletion:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setSearchCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)_reverseGeocoderLocation;
-(void)_startCLGeocoderReverseGeo;
-(id)_mkLocalSearchRequest;
-(void)_startMKLocalSearch;
-(void)_handleErrorResponse:(id)arg1 ;
-(void)handleSearchResponseWithLocation:(id)arg1 ;
-(CLLocationCoordinate2D)unshiftedCoordinate;
@end

