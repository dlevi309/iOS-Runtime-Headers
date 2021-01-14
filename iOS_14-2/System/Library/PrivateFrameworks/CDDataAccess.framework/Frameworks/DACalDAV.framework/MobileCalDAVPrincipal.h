/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

#import <DACalDAV/DACalDAV-Structs.h>
#import <libobjc.A.dylib/CoreDAVAccountInfoProvider.h>
#import <libobjc.A.dylib/CoreDAVOAuthInfoProvider.h>
#import <libobjc.A.dylib/CalDAVPrincipal.h>

@protocol CalDAVAccount;
@class NSString, NSSet, NSURL, NSDictionary, NSNumber, NSDateComponents, NSMutableDictionary, NSMutableSet, NSArray, CalDAVRefreshContext, AKAppleIDSession, MobileCalDAVAccount;

@interface MobileCalDAVPrincipal : NSObject <CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CalDAVPrincipal> {

	NSMutableDictionary* _calendarUserAddressesPerCalendar;
	BOOL _calendarsAreDirty;
	BOOL _isDelegate;
	BOOL _isWritable;
	BOOL _isEnabled;
	BOOL _canCreateCalendars;
	BOOL _isExpandPropertyReportSupported;
	BOOL _supportsCalendarUserSearch;
	BOOL _supportsFreebusy;
	BOOL _supportsSyncToken;
	BOOL _supportsPush;
	BOOL _shouldRefreshPrincipalSearchProperties;
	BOOL _shouldUpdatePushDelegate;
	BOOL _isDirty;
	NSURL* _calendarHomeURL;
	NSMutableSet* _deletedCalendarURLs;
	NSURL* _notificationCollectionURL;
	NSString* _notificationCollectionCTag;
	NSURL* _inboxURL;
	NSURL* _outboxURL;
	NSURL* _dropBoxURL;
	NSURL* _defaultCalendarURL;
	NSString* _uid;
	id<CalDAVAccount> _account;
	NSSet* _preferredCalendarUserAddresses;
	NSString* _fullName;
	NSString* _principalPath;
	NSString* _inboxCTag;
	NSString* _notificationURLString;
	NSDictionary* _pushTransports;
	NSString* _calendarHomePushKey;
	NSNumber* _quotaFreeBytes;
	NSString* _supportedCalendarComponentSets;
	NSURL* _preferredCalendarUserAddress;
	NSString* _preferredCalendarEmailAddress;
	NSString* _preferredCalendarPhoneNumber;
	NSSet* _addedCalendars;
	NSSet* _modifiedCalendars;
	NSArray* _calendarChangesToClear;
	CalDAVRefreshContext* _refreshContext;
	NSURL* _legacy_principalURL;
	AKAppleIDSession* _appleIDSession;

}

@property (nonatomic,retain) NSString * uid;                                                 //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) id<CalDAVAccount> account;                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) MobileCalDAVAccount * daAccount; 
@property (nonatomic,retain) NSURL * preferredCalendarUserAddress;                           //@synthesize preferredCalendarUserAddress=_preferredCalendarUserAddress - In the implementation block
@property (nonatomic,retain) NSString * preferredCalendarEmailAddress;                       //@synthesize preferredCalendarEmailAddress=_preferredCalendarEmailAddress - In the implementation block
@property (nonatomic,retain) NSString * preferredCalendarPhoneNumber;                        //@synthesize preferredCalendarPhoneNumber=_preferredCalendarPhoneNumber - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletedCalendarURLs;                             //@synthesize deletedCalendarURLs=_deletedCalendarURLs - In the implementation block
@property (nonatomic,retain) NSSet * addedCalendars;                                         //@synthesize addedCalendars=_addedCalendars - In the implementation block
@property (nonatomic,retain) NSSet * modifiedCalendars;                                      //@synthesize modifiedCalendars=_modifiedCalendars - In the implementation block
@property (nonatomic,retain) NSArray * calendarChangesToClear;                               //@synthesize calendarChangesToClear=_calendarChangesToClear - In the implementation block
@property (nonatomic,retain) CalDAVRefreshContext * refreshContext;                          //@synthesize refreshContext=_refreshContext - In the implementation block
@property (nonatomic,retain) NSURL * legacy_principalURL;                                    //@synthesize legacy_principalURL=_legacy_principalURL - In the implementation block
@property (nonatomic,retain) AKAppleIDSession * appleIDSession;                              //@synthesize appleIDSession=_appleIDSession - In the implementation block
@property (nonatomic,retain) NSSet * preferredCalendarUserAddresses;                         //@synthesize preferredCalendarUserAddresses=_preferredCalendarUserAddresses - In the implementation block
@property (nonatomic,readonly) NSDictionary * calendarUserAddressesPerCalendar; 
@property (nonatomic,retain) NSString * fullName;                                            //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSURL * calendarHomeURL;                                        //@synthesize calendarHomeURL=_calendarHomeURL - In the implementation block
@property (nonatomic,retain) NSString * calendarHomeSyncToken; 
@property (nonatomic,readonly) NSDictionary * subCalPropertiesByURL; 
@property (nonatomic,retain) NSString * principalPath;                                       //@synthesize principalPath=_principalPath - In the implementation block
@property (nonatomic,retain) NSURL * principalURL; 
@property (nonatomic,retain) NSURL * defaultCalendarURL;                                     //@synthesize defaultCalendarURL=_defaultCalendarURL - In the implementation block
@property (nonatomic,retain) NSURL * notificationCollectionURL;                              //@synthesize notificationCollectionURL=_notificationCollectionURL - In the implementation block
@property (nonatomic,retain) NSString * notificationCollectionCTag;                          //@synthesize notificationCollectionCTag=_notificationCollectionCTag - In the implementation block
@property (nonatomic,retain) NSURL * inboxURL;                                               //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,retain) NSString * inboxCTag;                                           //@synthesize inboxCTag=_inboxCTag - In the implementation block
@property (nonatomic,retain) NSURL * outboxURL;                                              //@synthesize outboxURL=_outboxURL - In the implementation block
@property (nonatomic,retain) NSURL * dropBoxURL;                                             //@synthesize dropBoxURL=_dropBoxURL - In the implementation block
@property (nonatomic,retain) NSString * notificationURLString;                               //@synthesize notificationURLString=_notificationURLString - In the implementation block
@property (nonatomic,retain) NSDictionary * pushTransports;                                  //@synthesize pushTransports=_pushTransports - In the implementation block
@property (nonatomic,retain) NSString * calendarHomePushKey;                                 //@synthesize calendarHomePushKey=_calendarHomePushKey - In the implementation block
@property (nonatomic,retain) NSNumber * quotaFreeBytes;                                      //@synthesize quotaFreeBytes=_quotaFreeBytes - In the implementation block
@property (nonatomic,retain) NSString * supportedCalendarComponentSets;                      //@synthesize supportedCalendarComponentSets=_supportedCalendarComponentSets - In the implementation block
@property (assign,nonatomic) BOOL isDelegate;                                                //@synthesize isDelegate=_isDelegate - In the implementation block
@property (assign,nonatomic) BOOL isWritable;                                                //@synthesize isWritable=_isWritable - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                                                 //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL canCreateCalendars;                                        //@synthesize canCreateCalendars=_canCreateCalendars - In the implementation block
@property (assign,nonatomic) BOOL isExpandPropertyReportSupported;                           //@synthesize isExpandPropertyReportSupported=_isExpandPropertyReportSupported - In the implementation block
@property (assign,nonatomic) BOOL supportsCalendarUserSearch;                                //@synthesize supportsCalendarUserSearch=_supportsCalendarUserSearch - In the implementation block
@property (assign,nonatomic) BOOL supportsFreebusy;                                          //@synthesize supportsFreebusy=_supportsFreebusy - In the implementation block
@property (assign,nonatomic) BOOL supportsSyncToken;                                         //@synthesize supportsSyncToken=_supportsSyncToken - In the implementation block
@property (nonatomic,readonly) BOOL supportsExtendedCalendarQuery; 
@property (nonatomic,readonly) NSSet * calendars; 
@property (nonatomic,readonly) NSString * APSTopic; 
@property (nonatomic,readonly) NSURL * APSSubscriptionURL; 
@property (nonatomic,readonly) NSString * APSEnv; 
@property (assign,nonatomic) BOOL supportsPush;                                              //@synthesize supportsPush=_supportsPush - In the implementation block
@property (assign,nonatomic) BOOL shouldRefreshPrincipalSearchProperties;                    //@synthesize shouldRefreshPrincipalSearchProperties=_shouldRefreshPrincipalSearchProperties - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdatePushDelegate;                                  //@synthesize shouldUpdatePushDelegate=_shouldUpdatePushDelegate - In the implementation block
@property (assign,nonatomic) BOOL isDirty;                                                   //@synthesize isDirty=_isDirty - In the implementation block
@property (assign,nonatomic) BOOL calendarsAreDirty;                                         //@synthesize calendarsAreDirty=_calendarsAreDirty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CoreDAVTaskManager> taskManager; 
@property (nonatomic,readonly) BOOL isMergeSync; 
@property (nonatomic,readonly) BOOL isEnabledForEvents; 
@property (nonatomic,readonly) BOOL isEnabledForTodos; 
@property (nonatomic,readonly) NSDateComponents * eventFilterStartDate; 
@property (nonatomic,readonly) NSDateComponents * eventFilterEndDate; 
+(BOOL)compareAddressURL:(id)arg1 localString:(id)arg2 ;
-(id)accountID;
-(BOOL)isEnabledForEvents;
-(void)setFullName:(NSString *)arg1 ;
-(id<CalDAVAccount>)account;
-(void)setUid:(NSString *)arg1 ;
-(BOOL)useSSL;
-(long long)port;
-(id)scheme;
-(NSString *)uid;
-(id)host;
-(NSString *)fullName;
-(void)setIsEnabled:(BOOL)arg1 ;
-(BOOL)isDelegate;
-(void)setAccount:(id<CalDAVAccount>)arg1 ;
-(CalDAVRefreshContext *)refreshContext;
-(BOOL)isDirty;
-(id)init;
-(id)userAgentHeader;
-(id)clientToken;
-(id)identityPersist;
-(void)setCalendarChangesToClear:(NSArray *)arg1 ;
-(void)setAddedCalendars:(NSSet *)arg1 ;
-(void)setModifiedCalendars:(NSSet *)arg1 ;
-(NSDictionary *)calendarUserAddressesPerCalendar;
-(NSURL *)preferredCalendarUserAddress;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(unsigned long long)oauthVariant;
-(NSString *)APSTopic;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 numUploadedElements:(long long)arg2 ;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;
-(void)noteTimeSpentInNetworking:(double)arg1 ;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSString *)APSEnv;
-(BOOL)supportsPush;
-(void)setSupportsPush:(BOOL)arg1 ;
-(BOOL)shouldUpdatePushDelegate;
-(void)setShouldUpdatePushDelegate:(BOOL)arg1 ;
-(void)setCalendarsAreDirty:(BOOL)arg1 ;
-(void)setRefreshContext:(CalDAVRefreshContext *)arg1 ;
-(void)setIsDelegate:(BOOL)arg1 ;
-(void)setCanCreateCalendars:(BOOL)arg1 ;
-(NSURL *)inboxURL;
-(CFURLStorageSessionRef)copyStorageSession;
-(void)clientTokenRequestedByServer;
-(id)serverRoot;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(id)serverComplianceClasses;
-(BOOL)handleCertificateError:(id)arg1 ;
-(id)additionalHeaderValues;
-(id)customConnectionProperties;
-(id)oauthInfoProvider;
-(NSURL *)principalURL;
-(id)password;
-(BOOL)shouldFailAllTasks;
-(BOOL)shouldUseOpportunisticSockets;
-(BOOL)handleTrustChallenge:(id)arg1 ;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 inQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(BOOL)shouldCompressRequests;
-(id)calendarOfType:(int)arg1 atURL:(id)arg2 withOptions:(id)arg3 ;
-(void)removecalendarWithURL:(id)arg1 ;
-(void)setPreferredCalendarUserAddresses:(NSSet *)arg1 ;
-(id)configuration;
-(void)setCalendarHomeURL:(NSURL *)arg1 ;
-(void)setDefaultCalendarURL:(NSURL *)arg1 ;
-(void)setNotificationCollectionURL:(NSURL *)arg1 ;
-(void)setNotificationCollectionCTag:(NSString *)arg1 ;
-(void)setInboxURL:(NSURL *)arg1 ;
-(void)setInboxCTag:(NSString *)arg1 ;
-(void)setOutboxURL:(NSURL *)arg1 ;
-(void)setDropBoxURL:(NSURL *)arg1 ;
-(void)setNotificationURLString:(NSString *)arg1 ;
-(void)setPushTransports:(NSDictionary *)arg1 ;
-(void)setCalendarHomePushKey:(NSString *)arg1 ;
-(void)setQuotaFreeBytes:(NSNumber *)arg1 ;
-(void)setSupportedCalendarComponentSets:(NSString *)arg1 ;
-(BOOL)isMergeSync;
-(BOOL)isEnabledForTodos;
-(NSDateComponents *)eventFilterStartDate;
-(NSDateComponents *)eventFilterEndDate;
-(void)setIsExpandPropertyReportSupported:(BOOL)arg1 ;
-(void)setSupportsFreebusy:(BOOL)arg1 ;
-(void)setSupportsCalendarUserSearch:(BOOL)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(BOOL)isWritable;
-(NSSet *)addedCalendars;
-(NSSet *)modifiedCalendars;
-(void)prepareCalendarsForSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)defaultEventCalendarTitle;
-(id)defaultTodoCalendarTitle;
-(NSDictionary *)subCalPropertiesByURL;
-(void)setSupportsSyncToken:(BOOL)arg1 ;
-(BOOL)clearCalendarChanges;
-(id)preferredCalendarUserAddressesForCalendar:(id)arg1 ;
-(void)removePreferredCalendarUserAddressesForCalendarWithIdentifier:(id)arg1 ;
-(void)setPreferredCalendarUserAddresses:(id)arg1 forCalendar:(id)arg2 ;
-(BOOL)calendarsAreDirty;
-(NSURL *)APSSubscriptionURL;
-(NSString *)preferredCalendarEmailAddress;
-(NSString *)preferredCalendarPhoneNumber;
-(BOOL)hasCalendarUserAddress:(id)arg1 ;
-(BOOL)shouldRefreshPrincipalSearchProperties;
-(void)setShouldRefreshPrincipalSearchProperties:(BOOL)arg1 ;
-(void)setLegacy_principalURL:(NSURL *)arg1 ;
-(AKAppleIDSession *)appleIDSession;
-(void)setAppleIDSession:(AKAppleIDSession *)arg1 ;
-(void)setCalendarHomeSyncToken:(NSString *)arg1 ;
-(BOOL)calendarUserAddressIsEquivalentToURL:(id)arg1 ;
-(id)oauth2Token;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(id)user;
-(void)removeCalendar:(id)arg1 ;
-(NSURL *)calendarHomeURL;
-(NSURL *)defaultCalendarURL;
-(NSURL *)notificationCollectionURL;
-(NSString *)notificationCollectionCTag;
-(NSString *)inboxCTag;
-(id<CoreDAVTaskManager>)taskManager;
-(BOOL)isEnabled;
-(void)setIsWritable:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg1 account:(id)arg2 ;
-(NSURL *)legacy_principalURL;
-(NSURL *)outboxURL;
-(NSURL *)dropBoxURL;
-(NSString *)notificationURLString;
-(NSDictionary *)pushTransports;
-(NSString *)calendarHomePushKey;
-(BOOL)isExpandPropertyReportSupported;
-(BOOL)supportsCalendarUserSearch;
-(BOOL)supportsSyncToken;
-(NSNumber *)quotaFreeBytes;
-(BOOL)_userAddressSet:(id)arg1 isEqualToSet:(id)arg2 ;
-(void)setPreferredCalendarUserAddress:(NSURL *)arg1 ;
-(void)setPreferredCalendarEmailAddress:(NSString *)arg1 ;
-(void)setPreferredCalendarPhoneNumber:(NSString *)arg1 ;
-(MobileCalDAVAccount *)daAccount;
-(BOOL)supportsExtendedCalendarQuery;
-(id)_startDateFromDaysToSync:(int)arg1 ;
-(id)_eventSyncEndDate;
-(NSMutableSet *)deletedCalendarURLs;
-(void)setDeletedCalendarURLs:(NSMutableSet *)arg1 ;
-(NSArray *)calendarChangesToClear;
-(BOOL)supportsFreebusy;
-(NSSet *)calendars;
-(id)getAppleIDSession;
-(id)calendarUserAddresses;
-(NSSet *)preferredCalendarUserAddresses;
-(void)setIsDirty:(BOOL)arg1 ;
-(NSString *)supportedCalendarComponentSets;
-(NSString *)calendarHomeSyncToken;
-(BOOL)canCreateCalendars;
@end
