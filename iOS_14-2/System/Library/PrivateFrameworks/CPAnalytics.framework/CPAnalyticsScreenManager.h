/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDynamicPropertyProvider.h>

@class NSSet, CPAnalytics, NSString, NSMutableArray, NSDate;

@interface CPAnalyticsScreenManager : NSObject <CPAnalyticsDynamicPropertyProvider> {

	long long _screensViewCount;
	NSSet* _namesOfViewsToTrack;
	CPAnalytics* _cpAnalyticsInstance;
	long long _appVisiblePeriodSignpostID;
	NSSet* _namesOfViewsToIgnore;
	NSString* _currentTabIdentifierDescription;
	NSString* _pendingTabIdentifierDescription;
	NSMutableArray* _currentlyOpenViews;
	unsigned long long _priorViewsMaxIndex;
	NSMutableArray* _priorViews;
	NSDate* _currentScreenStartTime;
	long long _foregroundEventCount;

}

@property (assign,nonatomic,__weak) CPAnalytics * cpAnalyticsInstance;                //@synthesize cpAnalyticsInstance=_cpAnalyticsInstance - In the implementation block
@property (assign,nonatomic) long long appVisiblePeriodSignpostID;                    //@synthesize appVisiblePeriodSignpostID=_appVisiblePeriodSignpostID - In the implementation block
@property (nonatomic,retain) NSSet * namesOfViewsToTrack;                             //@synthesize namesOfViewsToTrack=_namesOfViewsToTrack - In the implementation block
@property (nonatomic,retain) NSSet * namesOfViewsToIgnore;                            //@synthesize namesOfViewsToIgnore=_namesOfViewsToIgnore - In the implementation block
@property (nonatomic,retain) NSString * currentTabIdentifierDescription;              //@synthesize currentTabIdentifierDescription=_currentTabIdentifierDescription - In the implementation block
@property (nonatomic,retain) NSString * pendingTabIdentifierDescription;              //@synthesize pendingTabIdentifierDescription=_pendingTabIdentifierDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentlyOpenViews;                     //@synthesize currentlyOpenViews=_currentlyOpenViews - In the implementation block
@property (nonatomic,readonly) unsigned long long priorViewsMaxIndex;                 //@synthesize priorViewsMaxIndex=_priorViewsMaxIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * priorViews;                             //@synthesize priorViews=_priorViews - In the implementation block
@property (nonatomic,retain) NSDate * currentScreenStartTime;                         //@synthesize currentScreenStartTime=_currentScreenStartTime - In the implementation block
@property (assign,nonatomic) long long screensViewCount;                              //@synthesize screensViewCount=_screensViewCount - In the implementation block
@property (assign,nonatomic) long long foregroundEventCount;                          //@synthesize foregroundEventCount=_foregroundEventCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_viewNameFromCombined:(id)arg1 ;
+(BOOL)_isValidTabIdentifierChangedEvent:(id)arg1 ;
+(BOOL)_isValidScreenViewEvent:(id)arg1 ;
+(id)_combinedViewName:(id)arg1 withID:(id)arg2 ;
-(void)_updateTabTracking:(id)arg1 ;
-(void)processEvent:(id)arg1 ;
-(CPAnalytics *)cpAnalyticsInstance;
-(long long)appVisiblePeriodSignpostID;
-(void)updateWithConfig:(id)arg1 ;
-(void)setCurrentScreenStartTime:(NSDate *)arg1 ;
-(id)lastScreenName;
-(long long)screensViewCount;
-(void)setCurrentlyOpenViews:(NSMutableArray *)arg1 ;
-(void)setNamesOfViewsToIgnore:(NSSet *)arg1 ;
-(void)setCurrentTabIdentifierDescription:(NSString *)arg1 ;
-(void)setScreensViewCount:(long long)arg1 ;
-(id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3 ;
-(void)_trackView:(id)arg1 withEventName:(id)arg2 viewID:(id)arg3 eventTime:(id)arg4 ;
-(NSSet *)namesOfViewsToTrack;
-(void)setCpAnalyticsInstance:(CPAnalytics *)arg1 ;
-(void)_updateCurrentScreenToViewName:(id)arg1 withEventTime:(id)arg2 ;
-(void)_sendCPAnalyticsScreenViewEventWithEndTime:(id)arg1 ;
-(void)_updateAppLifeCycle:(id)arg1 ;
-(unsigned long long)priorViewsMaxIndex;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)_resetSessionWithTime:(id)arg1 ;
-(void)_initializeScreenViewTrackers:(id)arg1 ;
-(id)_screenViewNameAt:(unsigned long long)arg1 ;
-(void)registerSystemProperties:(id)arg1 ;
-(void)_updateCurrentTabIdentifier:(id)arg1 ;
-(void)setNamesOfViewsToTrack:(NSSet *)arg1 ;
-(NSDate *)currentScreenStartTime;
-(NSMutableArray *)currentlyOpenViews;
-(NSString *)currentTabIdentifierDescription;
-(NSMutableArray *)priorViews;
-(void)setForegroundEventCount:(long long)arg1 ;
-(void)setPriorViews:(NSMutableArray *)arg1 ;
-(NSString *)pendingTabIdentifierDescription;
-(long long)foregroundEventCount;
-(NSSet *)namesOfViewsToIgnore;
-(id)currentScreenViewName;
-(void)_updateScreenTracking:(id)arg1 ;
-(void)_handleUnknownViewIfNeeded:(id)arg1 ;
-(void)setPendingTabIdentifierDescription:(NSString *)arg1 ;
-(void)setAppVisiblePeriodSignpostID:(long long)arg1 ;
@end

