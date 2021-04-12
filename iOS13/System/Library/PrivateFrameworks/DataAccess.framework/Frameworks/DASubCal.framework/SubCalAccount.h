/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
*/

#import <DataAccess/DAAccount.h>
#import <libobjc.A.dylib/SubCalValidationTaskDelegate.h>

@class NSData, NSString, NSDictionary, NSURL, DACoreDAVTaskManager;

@interface SubCalAccount : DAAccount <SubCalValidationTaskDelegate> {

	BOOL _isManagedCalendar;
	BOOL _isHolidaySubscribedCalendar;
	BOOL _didTrySSL;
	int _subCalAccountVersion;
	NSData* _tmpICSData;

}

@property (assign,nonatomic) BOOL didTrySSL;                                     //@synthesize didTrySSL=_didTrySSL - In the implementation block
@property (nonatomic,retain) NSData * tmpICSData;                                //@synthesize tmpICSData=_tmpICSData - In the implementation block
@property (assign,nonatomic) BOOL shouldRemoveAlarms; 
@property (nonatomic,retain) NSString * syncId; 
@property (nonatomic,retain) NSDictionary * externalRepresentation; 
@property (nonatomic,readonly) NSURL * subscriptionURL; 
@property (nonatomic,retain) NSString * calDAVURLString; 
@property (nonatomic,readonly) NSString * calendarExternalId; 
@property (assign,nonatomic) BOOL isManagedCalendar;                             //@synthesize isManagedCalendar=_isManagedCalendar - In the implementation block
@property (assign,nonatomic) BOOL isHolidaySubscribedCalendar;                   //@synthesize isHolidaySubscribedCalendar=_isHolidaySubscribedCalendar - In the implementation block
@property (assign,nonatomic) BOOL subscribedURLSanitized; 
@property (nonatomic,readonly) DACoreDAVTaskManager * taskManager; 
@property (assign,nonatomic) int subCalAccountVersion;                           //@synthesize subCalAccountVersion=_subCalAccountVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHost:(id)arg1 ;
-(id)accountDescription;
-(void)setAccountDescription:(id)arg1 ;
-(DACoreDAVTaskManager *)taskManager;
-(NSDictionary *)externalRepresentation;
-(void)setExternalRepresentation:(NSDictionary *)arg1 ;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(BOOL)isHolidaySubscribedCalendar;
-(void)setSyncId:(NSString *)arg1 ;
-(NSString *)syncId;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1 ;
-(void)removeDBSyncData;
-(id)onBehalfOfBundleIdentifier;
-(BOOL)upgradeAccount;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(BOOL)isSubscribedCalendarAccount;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(NSURL *)subscriptionURL;
-(NSString *)calDAVURLString;
-(void)setCalDAVURLString:(NSString *)arg1 ;
-(BOOL)shouldRemoveAlarms;
-(void)setShouldRemoveAlarms:(BOOL)arg1 ;
-(void)setSubscribedURLSanitized:(BOOL)arg1 ;
-(BOOL)isManagedCalendar;
-(void)_checkValidityWithConsumer:(id)arg1 quickValidate:(BOOL)arg2 forceSSL:(BOOL)arg3 ;
-(void)setDidTrySSL:(BOOL)arg1 ;
-(void)_checkValidityWithConsumer:(id)arg1 quickValidate:(BOOL)arg2 ;
-(void)setTmpICSData:(NSData *)arg1 ;
-(BOOL)didTrySSL;
-(id)_tmpICSCalendarPath;
-(BOOL)subscribedURLSanitized;
-(void)handleTrustChallenge:(id)arg1 forTask:(id)arg2 ;
-(void)handleTrustChallenge:(id)arg1 forTask:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)subCalValidationTask:(id)arg1 finishedWithError:(id)arg2 calendarName:(id)arg3 calendarData:(id)arg4 ;
-(NSString *)calendarExternalId;
-(void)quickValidate:(id)arg1 ;
-(void)saveTmpICSData;
-(NSData *)tmpICSData;
-(void)clearTmpICSData;
-(void)upgradeAccountSpecificPropertiesOnAccount:(id)arg1 inStore:(id)arg2 parentAccount:(id)arg3 ;
-(void)refreshAllCalendars:(BOOL)arg1 ;
-(BOOL)hasSubscribedCalendarAtURL:(id)arg1 ;
-(void)setIsManagedCalendar:(BOOL)arg1 ;
-(void)setIsHolidaySubscribedCalendar:(BOOL)arg1 ;
-(int)subCalAccountVersion;
-(void)setSubCalAccountVersion:(int)arg1 ;
@end

