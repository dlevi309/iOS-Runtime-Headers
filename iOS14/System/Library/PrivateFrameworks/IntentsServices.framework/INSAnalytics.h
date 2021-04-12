/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)contextDictionaryForCommand:(id)arg1 ;
-(id<INSAnalyticsDataSource>)dataSource;
-(id)contextDictionaryForError:(id)arg1 ;
-(void)setDataSource:(id<INSAnalyticsDataSource>)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)_init;
-(void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3 ;
@end

