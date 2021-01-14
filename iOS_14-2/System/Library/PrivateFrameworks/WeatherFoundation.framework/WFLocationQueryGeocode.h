/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (retain) WFTaskIdentifier * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryWithSearchString:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(id)mkLocalSearchGeoCodeCache;
+(id)queryWithSearchCompletion:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)invalidateCaches;
+(id)queryWithDictionaryRepresentation:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(id)queryWithCoordinate:(CLLocationCoordinate2D)arg1 resultHandler:(/*^block*/id)arg2 ;
+(id)clReverseGeocoderCache;
-(id)resultHandler;
-(CLLocationCoordinate2D)searchCoordinate;
-(void)setReverseGeocoder:(CLGeocoder *)arg1 ;
-(CLLocationCoordinate2D)unshiftedCoordinate;
-(void)start;
-(void)setSearchCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)_reverseGeocoderLocation;
-(MKLocalSearch *)search;
-(void)_startMKLocalSearch;
-(WFResponse *)response;
-(void)setResponse:(WFResponse *)arg1 ;
-(void)handleSearchResponseWithLocation:(id)arg1 ;
-(void)_handleErrorResponse:(id)arg1 ;
-(void)setSearch:(MKLocalSearch *)arg1 ;
-(CLGeocoder *)reverseGeocoder;
-(id)_mkLocalSearchRequest;
-(void)setIdentifier:(WFTaskIdentifier *)arg1 ;
-(WFTaskIdentifier *)identifier;
-(void)_startCLGeocoderReverseGeo;
-(void)cancel;
-(void)setResultHandler:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setUnshiftedCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 resultHandler:(/*^block*/id)arg2 ;
-(NSString *)searchString;
-(MKLocalSearchCompletion *)searchCompletion;
-(id)initWithSearchCompletion:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

