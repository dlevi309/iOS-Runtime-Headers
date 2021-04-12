/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/SLPlaceDataSource.h>

@protocol SLPlaceDataSourceDelegate;
@class CLLocationManager, NSMutableData, NSHTTPURLResponse, NSURLConnection, CLLocation, NSObject, ACAccount, NSString;

@interface SLFacebookPlaceManager : NSObject <CLLocationManagerDelegate, SLPlaceDataSource> {

	CLLocationManager* _locationManager;
	double _timeout;
	BOOL _isCanceled;
	BOOL _isUpdatingLocation;
	BOOL _disableTimeout;
	NSMutableData* _placeData;
	NSHTTPURLResponse* _urlResponse;
	NSURLConnection* _urlConnection;
	/*^block*/id _queuedSearchRequest;
	CLLocation* _currentLocation;
	NSObject*<SLPlaceDataSourceDelegate> _delegate;
	ACAccount* _account;

}

@property (retain) CLLocation * currentLocation;                               //@synthesize currentLocation=_currentLocation - In the implementation block
@property (readonly) double currentLocationAccuracy; 
@property (__weak) NSObject*<SLPlaceDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) ACAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<SLPlaceDataSourceDelegate>)delegate;
-(void)setDelegate:(NSObject*<SLPlaceDataSourceDelegate>)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)locationDidTimeout;
-(void)fetchPlaces;
-(void)cancelPlaceFetch;
-(void)fetchPlacesWithSearchString:(id)arg1 ;
-(void)_handleResponse:(id)arg1 error:(id)arg2 ;
-(double)distanceFromCurrentLocationToPlace:(id)arg1 ;
-(id)_placesArrayWithPlacesData:(id)arg1 ;
-(id)initWithLocationManager:(id)arg1 account:(id)arg2 desiredAccuracy:(double)arg3 timeout:(double)arg4 ;
-(double)currentLocationAccuracy;
@end

