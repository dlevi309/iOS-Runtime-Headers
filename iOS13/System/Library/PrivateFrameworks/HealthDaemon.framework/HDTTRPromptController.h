/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_os_log;
@class HDProfile, NSObject, NSString;

@interface HDTTRPromptController : NSObject {

	HDProfile* _profile;
	NSObject*<OS_os_log> _loggingCategory;
	AB _isPresenting;
	BOOL _canRepromptOnSameBuild;
	NSString* _name;
	double _minimumPromptInterval;
	long long _maximumErrorCount;
	NSString* _notificationTitle;
	NSString* _notificationMessage;
	NSString* _radarTitle;
	NSString* _radarDescription;
	/*^block*/id _unitTest_willPresentTTRAlertHandler;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double minimumPromptInterval;                      //@synthesize minimumPromptInterval=_minimumPromptInterval - In the implementation block
@property (assign,nonatomic) long long maximumErrorCount;                       //@synthesize maximumErrorCount=_maximumErrorCount - In the implementation block
@property (assign,nonatomic) BOOL canRepromptOnSameBuild;                       //@synthesize canRepromptOnSameBuild=_canRepromptOnSameBuild - In the implementation block
@property (nonatomic,copy) NSString * notificationTitle;                        //@synthesize notificationTitle=_notificationTitle - In the implementation block
@property (nonatomic,copy) NSString * notificationMessage;                      //@synthesize notificationMessage=_notificationMessage - In the implementation block
@property (nonatomic,copy) NSString * radarTitle;                               //@synthesize radarTitle=_radarTitle - In the implementation block
@property (nonatomic,copy) NSString * radarDescription;                         //@synthesize radarDescription=_radarDescription - In the implementation block
@property (nonatomic,copy) id unitTest_willPresentTTRAlertHandler;              //@synthesize unitTest_willPresentTTRAlertHandler=_unitTest_willPresentTTRAlertHandler - In the implementation block
+(id)nameForDomainName:(id)arg1 ;
+(id)_persistedValueKeys;
+(id)formattedPersistedValuesForDomainName:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)description;
-(NSString *)name;
-(void)setNotificationMessage:(NSString *)arg1 ;
-(NSString *)notificationMessage;
-(id)_keyValueDomain;
-(NSString *)radarDescription;
-(NSString *)notificationTitle;
-(void)setNotificationTitle:(NSString *)arg1 ;
-(void)setRadarDescription:(NSString *)arg1 ;
-(id)_errorUserInfoKeyErrorDate;
-(id)_errorUserInfoKeyReason;
-(void)_presentTTRPromptForErrors:(id)arg1 lastPromptBuild:(id)arg2 lastPromptDate:(id)arg3 currentBuild:(id)arg4 ;
-(id)initWithProfile:(id)arg1 domainName:(id)arg2 loggingCategory:(id)arg3 ;
-(void)promptIfRequiredForReason:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(BOOL)unitTest_setLastPromptDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)unitTest_setLastPromptBuild:(id)arg1 error:(id*)arg2 ;
-(double)minimumPromptInterval;
-(void)setMinimumPromptInterval:(double)arg1 ;
-(long long)maximumErrorCount;
-(void)setMaximumErrorCount:(long long)arg1 ;
-(BOOL)canRepromptOnSameBuild;
-(void)setCanRepromptOnSameBuild:(BOOL)arg1 ;
-(NSString *)radarTitle;
-(void)setRadarTitle:(NSString *)arg1 ;
-(id)unitTest_willPresentTTRAlertHandler;
-(void)setUnitTest_willPresentTTRAlertHandler:(id)arg1 ;
@end

