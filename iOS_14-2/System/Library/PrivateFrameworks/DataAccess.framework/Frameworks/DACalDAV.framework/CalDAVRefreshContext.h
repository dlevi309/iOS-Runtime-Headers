/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@class NSError, CalDAVDBChangeTrackingHelper;

@interface CalDAVRefreshContext : NSObject {

	BOOL _isForced;
	BOOL _wasUserRequested;
	BOOL _wasDueToPush;
	BOOL _isDisabledAccount;
	BOOL _isCalendarsOnly;
	BOOL _didDownloadEvents;
	BOOL _didSaveDatabase;
	BOOL _shouldSave;
	BOOL _shouldSaveAccounts;
	BOOL _calendarFailedToSync;
	BOOL _shouldRetry;
	int _retryTime;
	double _startTime;
	unsigned long long _numDownloadedElements;
	unsigned long long _numUploadedElements;
	NSError* _error;
	unsigned long long _localItems;
	CalDAVDBChangeTrackingHelper* _changeTracker;

}

@property (assign,nonatomic) BOOL isForced;                                             //@synthesize isForced=_isForced - In the implementation block
@property (assign,nonatomic) BOOL wasUserRequested;                                     //@synthesize wasUserRequested=_wasUserRequested - In the implementation block
@property (assign,nonatomic) BOOL wasDueToPush;                                         //@synthesize wasDueToPush=_wasDueToPush - In the implementation block
@property (assign,nonatomic) BOOL isDisabledAccount;                                    //@synthesize isDisabledAccount=_isDisabledAccount - In the implementation block
@property (assign,nonatomic) BOOL isCalendarsOnly;                                      //@synthesize isCalendarsOnly=_isCalendarsOnly - In the implementation block
@property (assign,nonatomic) BOOL didDownloadEvents;                                    //@synthesize didDownloadEvents=_didDownloadEvents - In the implementation block
@property (assign,nonatomic) BOOL didSaveDatabase;                                      //@synthesize didSaveDatabase=_didSaveDatabase - In the implementation block
@property (assign,nonatomic) BOOL shouldSave;                                           //@synthesize shouldSave=_shouldSave - In the implementation block
@property (assign,nonatomic) BOOL shouldSaveAccounts;                                   //@synthesize shouldSaveAccounts=_shouldSaveAccounts - In the implementation block
@property (assign,nonatomic) BOOL calendarFailedToSync;                                 //@synthesize calendarFailedToSync=_calendarFailedToSync - In the implementation block
@property (assign,nonatomic) double startTime;                                          //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) unsigned long long numDownloadedElements;                  //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
@property (assign,nonatomic) unsigned long long numUploadedElements;                    //@synthesize numUploadedElements=_numUploadedElements - In the implementation block
@property (assign,nonatomic) BOOL shouldRetry;                                          //@synthesize shouldRetry=_shouldRetry - In the implementation block
@property (assign,nonatomic) int retryTime;                                             //@synthesize retryTime=_retryTime - In the implementation block
@property (nonatomic,retain) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long localItems;                             //@synthesize localItems=_localItems - In the implementation block
@property (nonatomic,retain) CalDAVDBChangeTrackingHelper * changeTracker;              //@synthesize changeTracker=_changeTracker - In the implementation block
+(id)defaultContext;
-(void)setIsDisabledAccount:(BOOL)arg1 ;
-(void)setChangeTracker:(CalDAVDBChangeTrackingHelper *)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(BOOL)shouldSaveAccounts;
-(BOOL)calendarFailedToSync;
-(unsigned long long)numDownloadedElements;
-(BOOL)isCalendarsOnly;
-(BOOL)isDisabledAccount;
-(BOOL)wasDueToPush;
-(void)setShouldRetry:(BOOL)arg1 ;
-(void)setLocalItems:(unsigned long long)arg1 ;
-(void)setIsCalendarsOnly:(BOOL)arg1 ;
-(CalDAVDBChangeTrackingHelper *)changeTracker;
-(void)setError:(NSError *)arg1 ;
-(BOOL)shouldSave;
-(NSError *)error;
-(void)setShouldSave:(BOOL)arg1 ;
-(void)setShouldSaveAccounts:(BOOL)arg1 ;
-(void)setCalendarFailedToSync:(BOOL)arg1 ;
-(BOOL)shouldRetry;
-(int)retryTime;
-(void)setRetryTime:(int)arg1 ;
-(BOOL)isForced;
-(void)setIsForced:(BOOL)arg1 ;
-(BOOL)wasUserRequested;
-(void)setWasUserRequested:(BOOL)arg1 ;
-(void)setWasDueToPush:(BOOL)arg1 ;
-(BOOL)didDownloadEvents;
-(void)setDidDownloadEvents:(BOOL)arg1 ;
-(BOOL)didSaveDatabase;
-(void)setDidSaveDatabase:(BOOL)arg1 ;
-(void)setNumDownloadedElements:(unsigned long long)arg1 ;
-(unsigned long long)numUploadedElements;
-(unsigned long long)localItems;
-(void)setNumUploadedElements:(unsigned long long)arg1 ;
-(double)startTime;
@end

