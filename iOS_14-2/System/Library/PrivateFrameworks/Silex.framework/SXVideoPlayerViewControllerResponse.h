/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class SXVideoAnalyticsRouter, SXVideoPlayerVisibilityMonitor;

@interface SXVideoPlayerViewControllerResponse : NSObject {

	BOOL _shouldAutoplay;
	BOOL _expectVideoPlayerViewController;
	SXVideoAnalyticsRouter* _analyticsRouter;
	SXVideoPlayerVisibilityMonitor* _visibilityMonitor;

}

@property (assign,nonatomic) BOOL shouldAutoplay;                                             //@synthesize shouldAutoplay=_shouldAutoplay - In the implementation block
@property (assign,nonatomic) BOOL expectVideoPlayerViewController;                            //@synthesize expectVideoPlayerViewController=_expectVideoPlayerViewController - In the implementation block
@property (nonatomic,retain) SXVideoAnalyticsRouter * analyticsRouter;                        //@synthesize analyticsRouter=_analyticsRouter - In the implementation block
@property (nonatomic,retain) SXVideoPlayerVisibilityMonitor * visibilityMonitor;              //@synthesize visibilityMonitor=_visibilityMonitor - In the implementation block
-(void)setShouldAutoplay:(BOOL)arg1 ;
-(BOOL)shouldAutoplay;
-(SXVideoPlayerVisibilityMonitor *)visibilityMonitor;
-(void)setVisibilityMonitor:(SXVideoPlayerVisibilityMonitor *)arg1 ;
-(SXVideoAnalyticsRouter *)analyticsRouter;
-(void)setAnalyticsRouter:(SXVideoAnalyticsRouter *)arg1 ;
-(BOOL)expectVideoPlayerViewController;
-(void)setExpectVideoPlayerViewController:(BOOL)arg1 ;
@end

