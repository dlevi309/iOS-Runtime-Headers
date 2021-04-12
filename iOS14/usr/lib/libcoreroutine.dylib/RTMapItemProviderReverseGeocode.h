/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTMapItemProvider.h>

@class RTMapServiceManager, RTMapItemProviderReverseGeocodeParameters, NSString;

@interface RTMapItemProviderReverseGeocode : NSObject <RTMapItemProvider> {

	RTMapServiceManager* _mapServiceManager;
	RTMapItemProviderReverseGeocodeParameters* _parameters;

}

@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                             //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,retain) RTMapItemProviderReverseGeocodeParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RTMapItemProviderReverseGeocodeParameters *)parameters;
-(void)setParameters:(RTMapItemProviderReverseGeocodeParameters *)arg1 ;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(id)init;
-(id)initWithDefaultsManager:(id)arg1 mapServiceManager:(id)arg2 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initWithMapServiceManager:(id)arg1 parameters:(id)arg2 ;
@end

