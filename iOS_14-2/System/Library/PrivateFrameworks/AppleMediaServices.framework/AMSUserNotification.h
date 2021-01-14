/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>

@class ACAccount, NSURL, NSArray, NSString, AMSUserNotificationAction, NSDictionary, NSDate, NSSet, NSMutableDictionary;

@interface AMSUserNotification : NSObject <AMSBagConsumer> {

	BOOL _explicitContent;
	BOOL _anonymizeMetrics;
	BOOL _shouldSuppressDefaultAction;
	ACAccount* _account;
	NSURL* _artworkUrl;
	NSURL* _videoUrl;
	NSArray* _buttonActions;
	NSString* _centerBundleIdentifier;
	AMSUserNotificationAction* _defaultAction;
	NSString* _identifier;
	NSString* _informativeText;
	NSString* _logKey;
	NSDictionary* _metricsEvent;
	NSDate* _scheduledTime;
	NSSet* _subsections;
	NSString* _subtitle;
	NSString* _title;
	NSMutableDictionary* _userInfo;
	long long _intent;
	NSString* _categoryIdentifier;
	NSString* _threadIdentifier;

}

@property (assign,nonatomic) BOOL anonymizeMetrics;                                  //@synthesize anonymizeMetrics=_anonymizeMetrics - In the implementation block
@property (assign,nonatomic) long long intent;                                       //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) NSString * categoryIdentifier;                          //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressDefaultAction;                       //@synthesize shouldSuppressDefaultAction=_shouldSuppressDefaultAction - In the implementation block
@property (nonatomic,retain) NSString * threadIdentifier;                            //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSURL * artworkUrl;                                     //@synthesize artworkUrl=_artworkUrl - In the implementation block
@property (nonatomic,retain) NSURL * videoUrl;                                       //@synthesize videoUrl=_videoUrl - In the implementation block
@property (nonatomic,retain) NSArray * buttonActions;                                //@synthesize buttonActions=_buttonActions - In the implementation block
@property (nonatomic,retain) NSString * centerBundleIdentifier;                      //@synthesize centerBundleIdentifier=_centerBundleIdentifier - In the implementation block
@property (nonatomic,retain) AMSUserNotificationAction * defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
@property (assign,nonatomic) BOOL explicitContent;                                   //@synthesize explicitContent=_explicitContent - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * informativeText;                             //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,retain) NSString * logKey;                                      //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSDictionary * metricsEvent;                            //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (nonatomic,retain) NSDate * scheduledTime;                                 //@synthesize scheduledTime=_scheduledTime - In the implementation block
@property (nonatomic,retain) NSSet * subsections;                                    //@synthesize subsections=_subsections - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(BOOL)shouldHandleNotificationResponse:(id)arg1 ;
+(BOOL)shouldDeleteNotificationForPayload:(id)arg1 outIdentifier:(id*)arg2 scheduledOnly:(BOOL*)arg3 ;
+(id)notificationWithPayload:(id)arg1 andConfig:(id)arg2 ;
+(void)handleServiceExtensionNotificationRequest:(id)arg1 bag:(id)arg2 withContentHandler:(/*^block*/id)arg3 ;
+(id)_serverFriendlyFormatter;
+(id)_identifierFromPayload:(id)arg1 ;
+(BOOL)_canParseNotificationWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
+(void)openAppUsingBundleIdentifier:(id)arg1 ;
+(long long)explicitEnabledForCenterBundleID:(id)arg1 ;
+(id)_downloadAssetAtUrl:(id)arg1 withIdentifier:(id)arg2 logKey:(id)arg3 bag:(id)arg4 ;
+(id)handleNotificationResponse:(id)arg1 bag:(id)arg2 ;
+(id)_cachedImagePathForIdentifier:(id)arg1 assetURL:(id)arg2 ;
+(id)handleNotificationResponse:(id)arg1 bagContract:(id)arg2 ;
+(id)notificationCenter:(id)arg1 didChangeSettings:(id)arg2 bag:(id)arg3 ;
+(id)notificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 bag:(id)arg3 ;
+(BOOL)shouldHandleServiceExtensionNotificationRequest:(id)arg1 ;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(void)setButtonActions:(NSArray *)arg1 ;
-(long long)intent;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(ACAccount *)account;
-(NSString *)threadIdentifier;
-(id)initWithTitle:(id)arg1 ;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(NSString *)categoryIdentifier;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setShouldSuppressDefaultAction:(BOOL)arg1 ;
-(NSMutableDictionary *)userInfo;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIntent:(long long)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(NSURL *)videoUrl;
-(id)initWithTitle:(id)arg1 intent:(long long)arg2 ;
-(void)setCenterBundleIdentifier:(NSString *)arg1 ;
-(id)initWithPayload:(id)arg1 andConfig:(id)arg2 ;
-(AMSUserNotificationAction *)defaultAction;
-(NSArray *)buttonActions;
-(void)addButtonAction:(id)arg1 ;
-(id)initWithUNNotification:(id)arg1 ;
-(id)createUNNotificationContent;
-(id)createUNNotificationRequestFromContent:(id)arg1 ;
-(NSDate *)scheduledTime;
-(NSURL *)artworkUrl;
-(BOOL)anonymizeMetrics;
-(void)setArtworkUrl:(NSURL *)arg1 ;
-(void)setVideoUrl:(NSURL *)arg1 ;
-(id)_generatePayload;
-(BOOL)shouldSuppressDefaultAction;
-(id)determineSelectedActionFromResponse:(id)arg1 error:(id*)arg2 ;
-(id)handleSelectedButton:(id)arg1 bag:(id)arg2 ;
-(NSString *)centerBundleIdentifier;
-(BOOL)explicitContent;
-(id)createUNNotificationActions;
-(id)handleSelectedButton:(id)arg1 bagContract:(id)arg2 ;
-(id)initWithNSUserNotification:(id)arg1 ;
-(id)createNSUserNotification;
-(void)setExplicitContent:(BOOL)arg1 ;
-(void)setScheduledTime:(NSDate *)arg1 ;
-(void)setSubsections:(NSSet *)arg1 ;
-(void)setAnonymizeMetrics:(BOOL)arg1 ;
-(NSDictionary *)metricsEvent;
-(void)setMetricsEvent:(NSDictionary *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)informativeText;
-(void)setInformativeText:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)logKey;
-(NSSet *)subsections;
-(void)setDefaultAction:(AMSUserNotificationAction *)arg1 ;
@end

