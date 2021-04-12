/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoBooksComplicationsCompanion.bundle/NanoBooksComplicationsCompanion
*/

#import <ClockComplications/CLKCComplicationBundleDataSource.h>
#import <libobjc.A.dylib/NBComplicationSharedDataSourceObserver.h>

@class CLKComplicationTemplate, NBComplicationSharedDataSource;

@interface NanoBooksComplicationBundleDataSource : CLKCComplicationBundleDataSource <NBComplicationSharedDataSourceObserver> {

	BOOL _paused;
	BOOL _needsInvalidate;
	BOOL _wantsRecentBookName;
	CLKComplicationTemplate* _switcherTemplate;
	NBComplicationSharedDataSource* _dataSource;

}

@property (nonatomic,retain) CLKComplicationTemplate * switcherTemplate;               //@synthesize switcherTemplate=_switcherTemplate - In the implementation block
@property (nonatomic,retain) NBComplicationSharedDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                              //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL needsInvalidate;                                     //@synthesize needsInvalidate=_needsInvalidate - In the implementation block
@property (assign,nonatomic) BOOL wantsRecentBookName;                                 //@synthesize wantsRecentBookName=_wantsRecentBookName - In the implementation block
+(id)localizedAppName;
+(id)appIdentifier;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)pause;
-(void)resume;
-(BOOL)isPaused;
-(NBComplicationSharedDataSource *)dataSource;
-(void)setDataSource:(NBComplicationSharedDataSource *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)_invalidateIfNeeded;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(BOOL)supportsTapAction;
-(id)currentSwitcherTemplate;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineStartDateWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEndDateWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)sharedDataSourceDidChange;
-(BOOL)needsInvalidate;
-(BOOL)wantsRecentBookName;
-(void)setNeedsInvalidate:(BOOL)arg1 ;
-(void)mq_invalidateIfNeeded;
-(void)setSwitcherTemplate:(CLKComplicationTemplate *)arg1 ;
-(CLKComplicationTemplate *)switcherTemplate;
-(void)setWantsRecentBookName:(BOOL)arg1 ;
@end

