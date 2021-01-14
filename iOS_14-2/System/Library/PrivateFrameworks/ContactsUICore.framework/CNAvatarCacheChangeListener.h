/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@protocol CNAvatarCacheChangeListenerDelegate, CNScheduler;
@class CNContactStore, NSNotificationCenter, NSData;

@interface CNAvatarCacheChangeListener : NSObject {

	CNContactStore* _store;
	id<CNAvatarCacheChangeListenerDelegate> _delegate;
	NSNotificationCenter* _notificationCenter;
	id<CNScheduler> _rawPreprocessor;
	id<CNScheduler> _preprocessor;
	NSData* _currentHistoryToken;

}

@property (nonatomic,readonly) CNContactStore * store;                                               //@synthesize store=_store - In the implementation block
@property (nonatomic,__weak,readonly) id<CNAvatarCacheChangeListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                            //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> rawPreprocessor;                                      //@synthesize rawPreprocessor=_rawPreprocessor - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> preprocessor;                                         //@synthesize preprocessor=_preprocessor - In the implementation block
@property (nonatomic,copy) NSData * currentHistoryToken;                                             //@synthesize currentHistoryToken=_currentHistoryToken - In the implementation block
-(NSData *)currentHistoryToken;
-(id)init;
-(NSNotificationCenter *)notificationCenter;
-(CNContactStore *)store;
-(id<CNAvatarCacheChangeListenerDelegate>)delegate;
-(void)start;
-(void)stop;
-(id)description;
-(void)setCurrentHistoryToken:(NSData *)arg1 ;
-(id)initWithContactStore:(id)arg1 delegate:(id)arg2 ;
-(void)loadCurrentHistoryToken;
-(id<CNScheduler>)rawPreprocessor;
-(void)databaseChanged:(id)arg1 ;
-(id)makeDatabaseChangedTask;
-(id<CNScheduler>)preprocessor;
-(id)makeReportingTaskWithIdentifiers:(id)arg1 ;
-(id)makeAnalysisTask;
@end

