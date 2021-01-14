/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

@class NSString, NSSet, NSURL, NSDictionary, NSNumber, NSDateComponents;


@protocol CalDAVPrincipal <NSObject,CoreDAVAccountInfoProvider>
@property (nonatomic,readonly) NSString * uid; 
@property (nonatomic,readonly) id<CalDAVAccount> account; 
@property (nonatomic,readonly) id<CoreDAVTaskManager> taskManager; 
@property (nonatomic,retain) NSSet * preferredCalendarUserAddresses; 
@property (nonatomic,retain) NSString * fullName; 
@property (nonatomic,retain) NSURL * calendarHomeURL; 
@property (nonatomic,retain) NSString * calendarHomeSyncToken; 
@property (nonatomic,retain) NSURL * principalURL; 
@property (nonatomic,retain) NSURL * defaultCalendarURL; 
@property (nonatomic,retain) NSURL * notificationCollectionURL; 
@property (nonatomic,retain) NSString * notificationCollectionCTag; 
@property (nonatomic,retain) NSURL * inboxURL; 
@property (nonatomic,retain) NSString * inboxCTag; 
@property (nonatomic,retain) NSURL * outboxURL; 
@property (nonatomic,retain) NSURL * dropBoxURL; 
@property (nonatomic,retain) NSString * notificationURLString; 
@property (nonatomic,retain) NSDictionary * pushTransports; 
@property (nonatomic,retain) NSString * calendarHomePushKey; 
@property (nonatomic,retain) NSNumber * quotaFreeBytes; 
@property (nonatomic,retain) NSString * supportedCalendarComponentSets; 
@property (assign,nonatomic) BOOL isDelegate; 
@property (assign,nonatomic) BOOL isWritable; 
@property (assign,nonatomic) BOOL canCreateCalendars; 
@property (assign,nonatomic) BOOL isEnabled; 
@property (nonatomic,readonly) BOOL isMergeSync; 
@property (nonatomic,readonly) BOOL isEnabledForEvents; 
@property (nonatomic,readonly) BOOL isEnabledForTodos; 
@property (nonatomic,readonly) NSDateComponents * eventFilterStartDate; 
@property (nonatomic,readonly) NSDateComponents * eventFilterEndDate; 
@property (assign,nonatomic) BOOL isExpandPropertyReportSupported; 
@property (assign,nonatomic) BOOL supportsFreebusy; 
@property (assign,nonatomic) BOOL supportsCalendarUserSearch; 
@property (nonatomic,readonly) BOOL supportsExtendedCalendarQuery; 
@property (nonatomic,readonly) NSSet * calendars; 
@property (nonatomic,readonly) NSSet * addedCalendars; 
@property (nonatomic,readonly) NSSet * modifiedCalendars; 
@property (nonatomic,readonly) NSSet * deletedCalendarURLs; 
@optional
-(void)prepareCalendarsForSyncWithCompletionBlock:(/*^block*/id)arg1;
-(id)defaultEventCalendarTitle;
-(id)defaultTodoCalendarTitle;

@required
-(BOOL)isEnabledForEvents;
-(void)setFullName:(id)arg1;
-(id<CalDAVAccount>)account;
-(NSString *)uid;
-(NSString *)fullName;
-(void)setIsEnabled:(BOOL)arg1;
-(BOOL)isDelegate;
-(void)setIsDelegate:(BOOL)arg1;
-(void)setCanCreateCalendars:(BOOL)arg1;
-(NSURL *)inboxURL;
-(void)setPrincipalURL:(id)arg1;
-(NSURL *)principalURL;
-(id)calendarOfType:(int)arg1 atURL:(id)arg2 withOptions:(id)arg3;
-(void)removecalendarWithURL:(id)arg1;
-(void)setPreferredCalendarUserAddresses:(id)arg1;
-(void)setCalendarHomeURL:(id)arg1;
-(void)setDefaultCalendarURL:(id)arg1;
-(void)setNotificationCollectionURL:(id)arg1;
-(void)setNotificationCollectionCTag:(id)arg1;
-(void)setInboxURL:(id)arg1;
-(void)setInboxCTag:(id)arg1;
-(void)setOutboxURL:(id)arg1;
-(void)setDropBoxURL:(id)arg1;
-(void)setNotificationURLString:(id)arg1;
-(void)setPushTransports:(id)arg1;
-(void)setCalendarHomePushKey:(id)arg1;
-(void)setQuotaFreeBytes:(id)arg1;
-(void)setSupportedCalendarComponentSets:(id)arg1;
-(BOOL)isMergeSync;
-(BOOL)isEnabledForTodos;
-(NSDateComponents *)eventFilterStartDate;
-(NSDateComponents *)eventFilterEndDate;
-(void)setIsExpandPropertyReportSupported:(BOOL)arg1;
-(void)setSupportsFreebusy:(BOOL)arg1;
-(void)setSupportsCalendarUserSearch:(BOOL)arg1;
-(BOOL)isWritable;
-(NSSet *)addedCalendars;
-(NSSet *)modifiedCalendars;
-(void)setCalendarHomeSyncToken:(id)arg1;
-(void)removeCalendar:(id)arg1;
-(NSURL *)calendarHomeURL;
-(NSURL *)defaultCalendarURL;
-(NSURL *)notificationCollectionURL;
-(NSString *)notificationCollectionCTag;
-(NSString *)inboxCTag;
-(id<CoreDAVTaskManager>)taskManager;
-(BOOL)isEnabled;
-(void)setIsWritable:(BOOL)arg1;
-(NSURL *)outboxURL;
-(NSURL *)dropBoxURL;
-(NSString *)notificationURLString;
-(NSDictionary *)pushTransports;
-(NSString *)calendarHomePushKey;
-(BOOL)isExpandPropertyReportSupported;
-(BOOL)supportsCalendarUserSearch;
-(NSNumber *)quotaFreeBytes;
-(BOOL)supportsExtendedCalendarQuery;
-(NSSet *)deletedCalendarURLs;
-(BOOL)supportsFreebusy;
-(NSSet *)calendars;
-(NSSet *)preferredCalendarUserAddresses;
-(NSString *)supportedCalendarComponentSets;
-(NSString *)calendarHomeSyncToken;
-(BOOL)canCreateCalendars;

@end

