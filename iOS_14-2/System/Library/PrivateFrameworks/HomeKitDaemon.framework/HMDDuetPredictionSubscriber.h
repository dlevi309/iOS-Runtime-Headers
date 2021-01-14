/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol HMDDuetSuggestionProvider, OS_dispatch_queue, HMDDuetPredictionSubscriberDataSource;
@class NSObject;

@interface HMDDuetPredictionSubscriber : HMFObject {

	int _duetPredictionsChangedNotificationToken;
	id<HMDDuetSuggestionProvider> _duetPredictionSuggester;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMDDuetPredictionSubscriberDataSource> _dataSource;

}

@property (readonly) id<HMDDuetSuggestionProvider> duetPredictionSuggester;              //@synthesize duetPredictionSuggester=_duetPredictionSuggester - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak) id<HMDDuetPredictionSubscriberDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) int duetPredictionsChangedNotificationToken;                          //@synthesize duetPredictionsChangedNotificationToken=_duetPredictionsChangedNotificationToken - In the implementation block
-(void)_registerForNotifications;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_unregisterForNotifications;
-(id<HMDDuetPredictionSubscriberDataSource>)dataSource;
-(void)setDataSource:(id<HMDDuetPredictionSubscriberDataSource>)arg1 ;
-(void)dealloc;
-(void)_fetchPredictionsFromDuetAndUpdateHomes;
-(id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2 duetSuggestionProvider:(id)arg3 ;
-(int)duetPredictionsChangedNotificationToken;
-(id<HMDDuetSuggestionProvider>)duetPredictionSuggester;
-(id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2 ;
-(void)setDuetPredictionsChangedNotificationToken:(int)arg1 ;
@end

