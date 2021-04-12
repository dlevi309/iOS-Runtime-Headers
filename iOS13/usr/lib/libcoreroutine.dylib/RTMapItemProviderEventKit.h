/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(RTMapItemProviderEventKitParameters *)parameters;
-(RTEventManager *)eventManager;
-(void)setEventManager:(RTEventManager *)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 eventManager:(id)arg3 mapServiceManager:(id)arg4 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 eventManager:(id)arg3 mapServiceManager:(id)arg4 parameters:(id)arg5 ;
@end

