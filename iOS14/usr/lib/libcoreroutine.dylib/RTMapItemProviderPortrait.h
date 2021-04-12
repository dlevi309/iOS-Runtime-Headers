/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTMapItemProviderBase.h>
#import <libobjc.A.dylib/RTMapItemProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, RTMapServiceManager, RTMapItemProviderPortraitParameters, RTPersonalizationPortraitManager, NSString;

@interface RTMapItemProviderPortrait : RTMapItemProviderBase <RTMapItemProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	RTMapServiceManager* _mapServiceManager;
	RTMapItemProviderPortraitParameters* _parameters;
	RTPersonalizationPortraitManager* _personalizationPortraitManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                                        //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,copy,readonly) RTMapItemProviderPortraitParameters * parameters;                        //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) RTPersonalizationPortraitManager * personalizationPortraitManager;              //@synthesize personalizationPortraitManager=_personalizationPortraitManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RTMapItemProviderPortraitParameters *)parameters;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapServiceManager:(id)arg3 personalizationPortraitManager:(id)arg4 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapServiceManager:(id)arg3 parameters:(id)arg4 personalizationPortraitManager:(id)arg5 ;
-(RTPersonalizationPortraitManager *)personalizationPortraitManager;
-(void)setPersonalizationPortraitManager:(RTPersonalizationPortraitManager *)arg1 ;
-(id)_mapItemsForLocation:(id)arg1 withNames:(id)arg2 withinDistance:(double)arg3 options:(id)arg4 error:(id*)arg5 ;
@end

