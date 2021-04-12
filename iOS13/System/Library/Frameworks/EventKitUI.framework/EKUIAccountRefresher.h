/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKUIAccountRefresherDelegate;
@class CalendarModel, NSDate, NSSet;

@interface EKUIAccountRefresher : NSObject {

	CalendarModel* _model;
	BOOL _sourcesCurrentlySyncing;
	NSDate* _refreshStartDate;
	BOOL _refreshing;
	id<EKUIAccountRefresherDelegate> _delegate;
	NSSet* _refreshingSources;

}

@property (assign,nonatomic,__weak) id<EKUIAccountRefresherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL refreshing;                                             //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,readonly) NSSet * refreshingSources;                                   //@synthesize refreshingSources=_refreshingSources - In the implementation block
@property (nonatomic,readonly) BOOL allAccountsOffline; 
-(id<EKUIAccountRefresherDelegate>)delegate;
-(void)setDelegate:(id<EKUIAccountRefresherDelegate>)arg1 ;
-(void)refresh;
-(void)_syncDidStart;
-(void)_eventStoreChanged:(id)arg1 ;
-(BOOL)_areAnySourcesCurrentlySyncing;
-(void)_syncDidEnd;
-(void)_cancelSyncStartTimeout;
-(BOOL)_allSourcesRefreshed;
-(void)_syncCompleted;
-(void)_beginSyncStartTimeout;
-(BOOL)sourceFinishedRefreshing:(id)arg1 ;
-(void)_beginMaximumTimeElapsedTimeout;
-(void)_cancelMaximumTimeElapsedTimeout;
-(void)_syncStartTimeoutExpired;
-(void)_refreshControlMaximumVisibleTimeElapsed;
-(BOOL)allAccountsOffline;
-(NSSet *)refreshingSources;
-(id)initWithCalendarModel:(id)arg1 ;
-(BOOL)refreshing;
@end

