/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTMapItemProviderBase.h>
#import <libobjc.A.dylib/RTMapItemProvider.h>

@class RTMapsSupportManager, RTMapItemProviderMapsSupportParameters, NSString;

@interface RTMapItemProviderMapsSupport : RTMapItemProviderBase <RTMapItemProvider> {

	RTMapsSupportManager* _mapsSupportManager;
	RTMapItemProviderMapsSupportParameters* _parameters;

}

@property (nonatomic,retain) RTMapsSupportManager * mapsSupportManager;                               //@synthesize mapsSupportManager=_mapsSupportManager - In the implementation block
@property (nonatomic,copy,readonly) RTMapItemProviderMapsSupportParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RTMapItemProviderMapsSupportParameters *)parameters;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapsSupportManager:(id)arg3 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(RTMapsSupportManager *)mapsSupportManager;
-(void)setMapsSupportManager:(RTMapsSupportManager *)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapsSupportManager:(id)arg3 parameters:(id)arg4 ;
-(double)confidenceFromMapItemSource:(unsigned long long)arg1 ;
@end

