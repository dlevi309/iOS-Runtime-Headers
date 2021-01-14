/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/


@protocol SBSWidgetMetricsProviding;
@interface SBSWidgetMetricsService : NSObject {

	id<SBSWidgetMetricsProviding> _metricsProvider;

}

@property (nonatomic,__weak,readonly) id<SBSWidgetMetricsProviding> metricsProvider;              //@synthesize metricsProvider=_metricsProvider - In the implementation block
-(id)init;
-(id<SBSWidgetMetricsProviding>)metricsProvider;
-(id)initWithMetricsProvider:(id)arg1 ;
-(id)systemMetricsForWidget:(id)arg1 ;
-(id)previewMetricsSpecificationForBundleIdentifier:(id)arg1 ;
-(id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)dealloc;
@end

