/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(RTMapItemProviderReverseGeocodeParameters *)parameters;
-(void)setParameters:(RTMapItemProviderReverseGeocodeParameters *)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 mapServiceManager:(id)arg2 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(id)initWithMapServiceManager:(id)arg1 parameters:(id)arg2 ;
@end

