/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTMapItemProviderBase.h>
#import <libobjc.A.dylib/RTMapItemProvider.h>

@class RTPersonalizationPortraitManager, RTMapServiceManager, RTMapItemProviderProactiveExpertsParameters, NSString;

@interface RTMapItemProviderProactiveExperts : RTMapItemProviderBase <RTMapItemProvider> {

	RTPersonalizationPortraitManager* _personalizationPortraitManager;
	RTMapServiceManager* _mapServiceManager;
	RTMapItemProviderProactiveExpertsParameters* _parameters;

}

@property (nonatomic,retain) RTPersonalizationPortraitManager * personalizationPortraitManager;              //@synthesize personalizationPortraitManager=_personalizationPortraitManager - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                                        //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,copy,readonly) RTMapItemProviderProactiveExpertsParameters * parameters;                //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RTMapItemProviderProactiveExpertsParameters *)parameters;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(id)init;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapServiceManager:(id)arg3 personalizationPortraitManager:(id)arg4 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapServiceManager:(id)arg3 parameters:(id)arg4 personalizationPortraitManager:(id)arg5 ;
-(id)_recentLocationsFrom:(id)arg1 error:(id*)arg2 ;
-(id)_filterConnectionLocations:(id)arg1 location:(id)arg2 distance:(double)arg3 error:(id*)arg4 ;
-(id)_mapItemsWithConnectionsLocations:(id)arg1 options:(id)arg2 ;
-(RTPersonalizationPortraitManager *)personalizationPortraitManager;
-(void)setPersonalizationPortraitManager:(RTPersonalizationPortraitManager *)arg1 ;
@end

