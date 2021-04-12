/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
*/


@protocol OS_dispatch_queue, INSAnalyticsDataSource;
@class NSObject, NSHashTable;

@interface INSAnalytics : NSObject {

	NSObject*<OS_dispatch_queue> _observerQueue;
	id<INSAnalyticsDataSource> _dataSource;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;                                   //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) id<INSAnalyticsDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)sharedAnalytics;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id<INSAnalyticsDataSource>)dataSource;
-(void)setDataSource:(id<INSAnalyticsDataSource>)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3 ;
-(id)contextDictionaryForCommand:(id)arg1 ;
-(id)contextDictionaryForError:(id)arg1 ;
@end

