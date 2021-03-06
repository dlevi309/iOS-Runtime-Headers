/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


@interface VUIDebugDefaults : NSObject {

	BOOL _debugUIEnabled;
	BOOL _metricsLoggingEnabled;
	BOOL _metricsExpandedLoggingEnabled;
	BOOL _metricsLogLocationAndImpressions;
	BOOL _metricsPageRenderLoggingEnabled;
	BOOL _enableDemoMode;
	BOOL _gdprFirstTimeFlowEnabled;
	BOOL _gdprWhatsNewFlowEnabled;
	BOOL _debugRefreshEventLogEnabled;

}

@property (assign,nonatomic) BOOL debugUIEnabled;                                //@synthesize debugUIEnabled=_debugUIEnabled - In the implementation block
@property (assign,nonatomic) BOOL metricsLoggingEnabled;                         //@synthesize metricsLoggingEnabled=_metricsLoggingEnabled - In the implementation block
@property (assign,nonatomic) BOOL metricsExpandedLoggingEnabled;                 //@synthesize metricsExpandedLoggingEnabled=_metricsExpandedLoggingEnabled - In the implementation block
@property (assign,nonatomic) BOOL metricsLogLocationAndImpressions;              //@synthesize metricsLogLocationAndImpressions=_metricsLogLocationAndImpressions - In the implementation block
@property (assign,nonatomic) BOOL metricsPageRenderLoggingEnabled;               //@synthesize metricsPageRenderLoggingEnabled=_metricsPageRenderLoggingEnabled - In the implementation block
@property (assign,nonatomic) BOOL enableDemoMode;                                //@synthesize enableDemoMode=_enableDemoMode - In the implementation block
@property (assign,nonatomic) BOOL gdprFirstTimeFlowEnabled;                      //@synthesize gdprFirstTimeFlowEnabled=_gdprFirstTimeFlowEnabled - In the implementation block
@property (assign,nonatomic) BOOL gdprWhatsNewFlowEnabled;                       //@synthesize gdprWhatsNewFlowEnabled=_gdprWhatsNewFlowEnabled - In the implementation block
@property (assign,nonatomic) BOOL debugRefreshEventLogEnabled;                   //@synthesize debugRefreshEventLogEnabled=_debugRefreshEventLogEnabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setDebugUIEnabled:(BOOL)arg1 ;
-(BOOL)enableDemoMode;
-(BOOL)gdprFirstTimeFlowEnabled;
-(BOOL)gdprWhatsNewFlowEnabled;
-(BOOL)metricsPageRenderLoggingEnabled;
-(BOOL)metricsExpandedLoggingEnabled;
-(BOOL)metricsLoggingEnabled;
-(BOOL)debugUIEnabled;
-(void)setMetricsLoggingEnabled:(BOOL)arg1 ;
-(void)setMetricsExpandedLoggingEnabled:(BOOL)arg1 ;
-(BOOL)metricsLogLocationAndImpressions;
-(void)setMetricsLogLocationAndImpressions:(BOOL)arg1 ;
-(void)setMetricsPageRenderLoggingEnabled:(BOOL)arg1 ;
-(void)setEnableDemoMode:(BOOL)arg1 ;
-(void)setGdprFirstTimeFlowEnabled:(BOOL)arg1 ;
-(void)setGdprWhatsNewFlowEnabled:(BOOL)arg1 ;
-(BOOL)debugRefreshEventLogEnabled;
-(void)setDebugRefreshEventLogEnabled:(BOOL)arg1 ;
@end

