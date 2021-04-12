/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoBooksComplicationsCompanion.bundle/NanoBooksComplicationsCompanion
*/

#import <ClockComplications/CLKCComplicationBundleDataSource.h>
#import <libobjc.A.dylib/NBComplicationSharedDataSourceObserver.h>

@class NBComplicationSharedDataSource;

@interface NanoBooksComplicationBundleDataSource : CLKCComplicationBundleDataSource <NBComplicationSharedDataSourceObserver> {

	BOOL _paused;
	BOOL _needsInvalidate;
	BOOL _wantsRecentBookName;
	NBComplicationSharedDataSource* _dataSource;

}

@property (nonatomic,retain) NBComplicationSharedDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                              //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL needsInvalidate;                                     //@synthesize needsInvalidate=_needsInvalidate - In the implementation block
@property (assign,nonatomic) BOOL wantsRecentBookName;                                 //@synthesize wantsRecentBookName=_wantsRecentBookName - In the implementation block
+(id)appIdentifier;
+(id)localizedAppName;
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(void)pause;
-(void)setPaused:(BOOL)arg1 ;
-(NBComplicationSharedDataSource *)dataSource;
-(id)description;
-(void)setDataSource:(NBComplicationSharedDataSource *)arg1 ;
-(void)resume;
-(BOOL)isPaused;
-(void)dealloc;
-(void)_invalidateIfNeeded;
-(void)getTimelineEndDateWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(id)sampleTemplate;
-(BOOL)supportsTapAction;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)sharedDataSourceDidChange;
-(BOOL)needsInvalidate;
-(BOOL)wantsRecentBookName;
-(void)setNeedsInvalidate:(BOOL)arg1 ;
-(void)mq_invalidateIfNeeded;
-(void)setWantsRecentBookName:(BOOL)arg1 ;
@end

