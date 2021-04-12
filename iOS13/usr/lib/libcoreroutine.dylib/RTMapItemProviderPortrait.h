/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(RTMapItemProviderPortraitParameters *)parameters;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapServiceManager:(id)arg3 personalizationPortraitManager:(id)arg4 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapServiceManager:(id)arg3 parameters:(id)arg4 personalizationPortraitManager:(id)arg5 ;
-(RTPersonalizationPortraitManager *)personalizationPortraitManager;
-(void)setPersonalizationPortraitManager:(RTPersonalizationPortraitManager *)arg1 ;
-(id)_mapItemsForLocation:(id)arg1 withNames:(id)arg2 withinDistance:(double)arg3 options:(id)arg4 error:(id*)arg5 ;
@end

