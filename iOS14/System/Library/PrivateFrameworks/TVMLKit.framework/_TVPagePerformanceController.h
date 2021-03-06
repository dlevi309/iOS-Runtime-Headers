/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@protocol _TVPagePerformanceDelegate;
#import <TVMLKit/TVMLKit-Structs.h>
@class NSMutableArray, NSDictionary;

@interface _TVPagePerformanceController : NSObject {

	timeval _baseTimeval;
	unsigned long long _baseAbsoluteTime;
	NSMutableArray* _templateEntries;
	BOOL _pageHasSubpages;
	BOOL _pageWasInterrupted;
	BOOL _pageWasUpdated;
	BOOL _pageIsLoading;
	id<_TVPagePerformanceDelegate> _delegate;
	unsigned long long _viewWillLoad;
	unsigned long long _viewDidLoad;
	unsigned long long _viewWillAppear;
	unsigned long long _viewDidAppear;
	unsigned long long _viewWillDisappear;
	unsigned long long _viewDidDisappear;
	unsigned long long _pageCompleteDuration;
	unsigned long long _pageSetupDuration;
	unsigned long long _pageRenderDuration;
	unsigned long long _pageResourceDuration;
	unsigned long long _pageTransitionDuration;

}

@property (assign,nonatomic) unsigned long long viewWillLoad;                             //@synthesize viewWillLoad=_viewWillLoad - In the implementation block
@property (assign,nonatomic) unsigned long long viewDidLoad;                              //@synthesize viewDidLoad=_viewDidLoad - In the implementation block
@property (assign,nonatomic) unsigned long long viewWillAppear;                           //@synthesize viewWillAppear=_viewWillAppear - In the implementation block
@property (assign,nonatomic) unsigned long long viewDidAppear;                            //@synthesize viewDidAppear=_viewDidAppear - In the implementation block
@property (assign,nonatomic) unsigned long long viewWillDisappear;                        //@synthesize viewWillDisappear=_viewWillDisappear - In the implementation block
@property (assign,nonatomic) unsigned long long viewDidDisappear;                         //@synthesize viewDidDisappear=_viewDidDisappear - In the implementation block
@property (assign,nonatomic) BOOL pageIsLoading;                                          //@synthesize pageIsLoading=_pageIsLoading - In the implementation block
@property (assign,nonatomic) BOOL pageHasSubpages;                                        //@synthesize pageHasSubpages=_pageHasSubpages - In the implementation block
@property (assign,nonatomic) BOOL pageWasInterrupted;                                     //@synthesize pageWasInterrupted=_pageWasInterrupted - In the implementation block
@property (assign,nonatomic) BOOL pageWasUpdated;                                         //@synthesize pageWasUpdated=_pageWasUpdated - In the implementation block
@property (assign,nonatomic) unsigned long long pageCompleteDuration;                     //@synthesize pageCompleteDuration=_pageCompleteDuration - In the implementation block
@property (assign,nonatomic) unsigned long long pageSetupDuration;                        //@synthesize pageSetupDuration=_pageSetupDuration - In the implementation block
@property (assign,nonatomic) unsigned long long pageRenderDuration;                       //@synthesize pageRenderDuration=_pageRenderDuration - In the implementation block
@property (assign,nonatomic) unsigned long long pageResourceDuration;                     //@synthesize pageResourceDuration=_pageResourceDuration - In the implementation block
@property (assign,nonatomic) unsigned long long pageTransitionDuration;                   //@synthesize pageTransitionDuration=_pageTransitionDuration - In the implementation block
@property (assign,nonatomic,__weak) id<_TVPagePerformanceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * metrics; 
+(void)postNotificationForImageProxy:(id)arg1 withLoadingStatus:(BOOL)arg2 ;
+(BOOL)isPerformanceUIEnabled;
-(NSDictionary *)metrics;
-(id)init;
-(unsigned long long)viewDidAppear;
-(id<_TVPagePerformanceDelegate>)delegate;
-(void)setViewDidAppear:(unsigned long long)arg1 ;
-(void)setDelegate:(id<_TVPagePerformanceDelegate>)arg1 ;
-(unsigned long long)viewDidLoad;
-(unsigned long long)viewWillAppear;
-(unsigned long long)viewWillDisappear;
-(unsigned long long)viewDidDisappear;
-(void)markViewWillLoad;
-(void)markViewDidLoad;
-(void)markViewWillAppear;
-(void)markViewDidAppear;
-(void)markViewWillDisappear;
-(void)markViewDidDisappear;
-(id)getEntryForTemplate:(id)arg1 ;
-(BOOL)pageWasUpdated;
-(void)_maybeDeliverMetrics;
-(unsigned long long)viewWillLoad;
-(void)setViewWillLoad:(unsigned long long)arg1 ;
-(void)setViewDidLoad:(unsigned long long)arg1 ;
-(void)setViewWillAppear:(unsigned long long)arg1 ;
-(void)setViewWillDisappear:(unsigned long long)arg1 ;
-(unsigned long long)templateDidComplete;
-(void)setPageWasInterrupted:(BOOL)arg1 ;
-(void)setViewDidDisappear:(unsigned long long)arg1 ;
-(void)setPageWasUpdated:(BOOL)arg1 ;
-(void)setPageIsLoading:(BOOL)arg1 ;
-(void)setPageHasSubpages:(BOOL)arg1 ;
-(void)_calculatePageDurations;
-(unsigned long long)pageCompleteDuration;
-(unsigned long long)pageSetupDuration;
-(unsigned long long)pageRenderDuration;
-(unsigned long long)pageResourceDuration;
-(unsigned long long)pageTransitionDuration;
-(void)setPageRenderDuration:(unsigned long long)arg1 ;
-(void)setPageCompleteDuration:(unsigned long long)arg1 ;
-(void)setPageSetupDuration:(unsigned long long)arg1 ;
-(void)setPageResourceDuration:(unsigned long long)arg1 ;
-(void)setPageTransitionDuration:(unsigned long long)arg1 ;
-(BOOL)pageWasInterrupted;
-(BOOL)_isMetricsReady;
-(id)buildPagePerformanceView;
-(BOOL)pageHasSubpages;
-(BOOL)pageIsLoading;
@end

