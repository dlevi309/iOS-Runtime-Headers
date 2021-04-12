/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
*/

#import <DataAccess/DAAccount.h>
#import <libobjc.A.dylib/SubCalValidationTaskDelegate.h>

@class NSData, NSString, NSDictionary, NSURL, DACoreDAVTaskManager;

@interface SubCalAccount : DAAccount <SubCalValidationTaskDelegate> {

	BOOL _isManagedCalendar;
	BOOL _isHolidaySubscribedCalendar;
	int _subCalAccountVersion;
	NSData* _tmpICSData;

}

@property (nonatomic,retain) NSData * tmpICSData;                                //@synthesize tmpICSData=_tmpICSData - In the implementation block
@property (assign,nonatomic) BOOL shouldRemoveAlarms; 
@property (assign,nonatomic) BOOL shouldRemoveAttachments; 
@property (nonatomic,retain) NSString * syncId; 
@property (nonatomic,retain) NSDictionary * externalRepresentation; 
@property (nonatomic,readonly) NSURL * subscriptionURL; 
@property (nonatomic,retain) NSString * calDAVURLString; 
@property (nonatomic,readonly) NSString * calendarExternalId; 
@property (assign,nonatomic) double refreshInterval; 
@property (assign,nonatomic) BOOL useFTP; 
@property (assign,nonatomic) BOOL isManagedCalendar;                             //@synthesize isManagedCalendar=_isManagedCalendar - In the implementation block
@property (assign,nonatomic) BOOL isHolidaySubscribedCalendar;                   //@synthesize isHolidaySubscribedCalendar=_isHolidaySubscribedCalendar - In the implementation block
@property (assign,nonatomic) BOOL subscribedURLSanitized; 
@property (assign,nonatomic) BOOL allowInsecureConnection; 
@property (nonatomic,readonly) DACoreDAVTaskManager * taskManager; 
@property (assign,nonatomic) int subCalAccountVersion;                           //@synthesize subCalAccountVersion=_subCalAccountVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)accountDescription;
-(void)setHost:(id)arg1 ;
-(void)setAccountDescription:(id)arg1 ;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(BOOL)accountHasSignificantPropertyChangesWithChangeInfo:(id)arg1 ;
-(void)removeDBSyncData;
-(id)onBehalfOfBundleIdentifier;
-(void)setExternalRepresentation:(NSDictionary *)arg1 ;
-(NSString *)syncId;
-(BOOL)upgradeAccount;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(BOOL)isHolidaySubscribedCalendar;
-(BOOL)useFTP;
-(BOOL)isSubscribedCalendarAccount;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(void)setRefreshInterval:(double)arg1 ;
-(NSDictionary *)externalRepresentation;
-(NSString *)calDAVURLString;
-(void)setCalDAVURLString:(NSString *)arg1 ;
-(BOOL)shouldRemoveAlarms;
-(void)setShouldRemoveAlarms:(BOOL)arg1 ;
-(NSURL *)subscriptionURL;
-(void)setSubscribedURLSanitized:(BOOL)arg1 ;
-(double)refreshInterval;
-(DACoreDAVTaskManager *)taskManager;
-(void)setSyncId:(NSString *)arg1 ;
-(BOOL)isManagedCalendar;
-(void)_checkValidityWithConsumer:(id)arg1 quickValidate:(BOOL)arg2 ;
-(void)setTmpICSData:(NSData *)arg1 ;
-(id)_tmpICSCalendarPath;
-(BOOL)subscribedURLSanitized;
-(void)handleTrustChallenge:(id)arg1 forTask:(id)arg2 ;
-(void)handleTrustChallenge:(id)arg1 forTask:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)subCalValidationTask:(id)arg1 finishedWithError:(id)arg2 calendarName:(id)arg3 document:(id)arg4 calendarData:(id)arg5 ;
-(void)subCalValidationTask:(id)arg1 downloadProgressedTo:(long long)arg2 outOf:(long long)arg3 ;
-(NSString *)calendarExternalId;
-(void)quickValidate:(id)arg1 ;
-(void)saveTmpICSData;
-(NSData *)tmpICSData;
-(void)clearTmpICSData;
-(BOOL)allowInsecureConnection;
-(void)setAllowInsecureConnection:(BOOL)arg1 ;
-(void)upgradeAccountSpecificPropertiesOnAccount:(id)arg1 inStore:(id)arg2 parentAccount:(id)arg3 ;
-(BOOL)shouldRemoveAttachments;
-(void)setShouldRemoveAttachments:(BOOL)arg1 ;
-(void)setUseFTP:(BOOL)arg1 ;
-(void)refreshAllCalendars:(BOOL)arg1 ;
-(BOOL)hasSubscribedCalendarAtURL:(id)arg1 ;
-(void)setIsManagedCalendar:(BOOL)arg1 ;
-(void)setIsHolidaySubscribedCalendar:(BOOL)arg1 ;
-(int)subCalAccountVersion;
-(void)setSubCalAccountVersion:(int)arg1 ;
@end

