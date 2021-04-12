/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


@class CLGeocoderInternal, CLSilo;

@interface CLGeocoder : NSObject {

	CLGeocoderInternal* _internal;

}

@property (setter=_setResponseSilo:) CLSilo * _responseSilo; 
@property (getter=isGeocoding,nonatomic,readonly) BOOL geocoding; 
+(id)_timeZoneAtLocation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_setResponseSilo:(id)arg1 ;
-(void)reverseGeocodeLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CLSilo *)_responseSilo;
-(void)reverseGeocodeLocation:(id)arg1 preferredLocale:(id)arg2 heading:(double)arg3 localResultsOnly:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)isGeocoding;
-(void)_notifyNoResult;
-(void)_ticket:(id)arg1 didReturnError:(id)arg2 partialResultForLocation:(id)arg3 ;
-(void)_ticket:(id)arg1 didReturnGeoMapItems:(id)arg2 ;
-(void)_ensureMainThreadExecutionContextForBlock:(/*^block*/id)arg1 ;
-(void)geocodeAddressDictionary:(id)arg1 preferredLocale:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_ticket:(id)arg1 didReturnError:(id)arg2 ;
-(void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 preferredLocale:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_notifyCancel;
-(void)_notifyResult:(id)arg1 ;
-(void)_notifyError:(id)arg1 ;
-(void)_notifyResult:(id)arg1 error:(id)arg2 ;
-(void)reverseGeocodeLocation:(id)arg1 localResultsOnly:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reverseGeocodeLocation:(id)arg1 preferredLocale:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 localResultsOnly:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)geocodeAddressDictionary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)geocodeAddressString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelGeocode;
-(void)_notifyPartialResult:(id)arg1 ;
-(void)geocodePostalAddress:(id)arg1 preferredLocale:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)geocodePostalAddress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

