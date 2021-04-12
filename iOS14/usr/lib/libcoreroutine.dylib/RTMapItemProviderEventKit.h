/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTMapItemProviderBase.h>
#import <libobjc.A.dylib/RTMapItemProvider.h>

@class RTEventManager, RTMapServiceManager, RTMapItemProviderEventKitParameters, NSString;

@interface RTMapItemProviderEventKit : RTMapItemProviderBase <RTMapItemProvider> {

	RTEventManager* _eventManager;
	RTMapServiceManager* _mapServiceManager;
	RTMapItemProviderEventKitParameters* _parameters;

}

@property (nonatomic,retain) RTEventManager * eventManager;                                        //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                              //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,copy,readonly) RTMapItemProviderEventKitParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RTMapItemProviderEventKitParameters *)parameters;
-(RTEventManager *)eventManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)setEventManager:(RTEventManager *)arg1 ;
-(id)init;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 eventManager:(id)arg3 mapServiceManager:(id)arg4 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 eventManager:(id)arg3 mapServiceManager:(id)arg4 parameters:(id)arg5 ;
@end

