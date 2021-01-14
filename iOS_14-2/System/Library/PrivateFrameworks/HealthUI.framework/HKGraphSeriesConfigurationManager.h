/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSMutableDictionary;

@interface HKGraphSeriesConfigurationManager : NSObject {

	NSMutableDictionary* _zoomLevelConfigurationManagers;

}
-(id)init;
-(void)reset;
-(id)allDisplayTypes;
-(void)removeConfigurationsForDisplayType:(id)arg1 ;
-(id)configurationForDisplayType:(id)arg1 zoom:(long long)arg2 ;
-(void)addConfiguration:(id)arg1 zoom:(long long)arg2 ;
-(id)allDisplayTypesForZoom:(long long)arg1 ;
-(id)configurationForGraphSeries:(id)arg1 zoom:(long long)arg2 ;
-(id)allGraphSeriesForZoom:(long long)arg1 ;
-(long long)_zoomLevelForGraphZoom:(long long)arg1 ;
-(id)_configurationManagerForZoom:(long long)arg1 ;
@end

