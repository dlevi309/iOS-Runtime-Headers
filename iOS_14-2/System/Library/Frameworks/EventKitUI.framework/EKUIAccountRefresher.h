/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKUIAccountRefresherDelegate;
@class CalendarModel, NSDate, NSArray;

@interface EKUIAccountRefresher : NSObject {

	CalendarModel* _model;
	BOOL _currentlySyncing;
	NSDate* _refreshStartDate;
	NSArray* _refreshingSources;
	NSArray* _refreshingCalendars;
	BOOL _refreshing;
	id<EKUIAccountRefresherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EKUIAccountRefresherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL refreshing;                                             //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,readonly) BOOL allAccountsOffline; 
-(void)_eventStoreChanged:(id)arg1 ;
-(void)refresh;
-(id<EKUIAccountRefresherDelegate>)delegate;
-(void)_syncDidEnd;
-(void)setDelegate:(id<EKUIAccountRefresherDelegate>)arg1 ;
-(BOOL)refreshing;
-(BOOL)_areAnySourcesCurrentlySyncing;
-(BOOL)_areAnyCalendarsCurrentlySyncing;
-(void)_cancelSyncStartTimeout;
-(BOOL)_allSourcesRefreshed;
-(BOOL)_allCalendarsRefreshed;
-(void)_syncCompleted;
-(void)_beginSyncStartTimeout;
-(BOOL)sourceFinishedRefreshing:(id)arg1 ;
-(BOOL)calendarFinishedRefreshing:(id)arg1 ;
-(void)_beginMaximumTimeElapsedTimeout;
-(void)_cancelMaximumTimeElapsedTimeout;
-(void)_syncStartTimeoutExpired;
-(void)_refreshControlMaximumVisibleTimeElapsed;
-(BOOL)allAccountsOffline;
-(void)_syncDidStart;
-(id)initWithCalendarModel:(id)arg1 ;
@end

