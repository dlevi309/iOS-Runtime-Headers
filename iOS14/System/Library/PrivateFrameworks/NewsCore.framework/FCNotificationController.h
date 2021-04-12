/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>

@protocol FCCoreConfigurationManager;
@class NSString, FCUserInfo, FCCommandQueue;

@interface FCNotificationController : NSObject <FCUserInfoObserving> {

	BOOL _publisherNotificationsAllowed;
	BOOL _appleNewsNotificationsAllowed;
	BOOL _shouldUseNewsUINotificationHandling;
	NSString* _notificationsUserID;
	NSString* _deviceToken;
	FCUserInfo* _userInfo;
	FCCommandQueue* _commandQueue;
	id<FCCoreConfigurationManager> _configurationManager;

}

@property (nonatomic,retain) FCUserInfo * userInfo;                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) FCCommandQueue * commandQueue;                                    //@synthesize commandQueue=_commandQueue - In the implementation block
@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,copy) NSString * notificationsUserID;                                     //@synthesize notificationsUserID=_notificationsUserID - In the implementation block
@property (nonatomic,copy) NSString * deviceToken;                                             //@synthesize deviceToken=_deviceToken - In the implementation block
@property (assign,nonatomic) BOOL publisherNotificationsAllowed;                               //@synthesize publisherNotificationsAllowed=_publisherNotificationsAllowed - In the implementation block
@property (assign,nonatomic) BOOL appleNewsNotificationsAllowed;                               //@synthesize appleNewsNotificationsAllowed=_appleNewsNotificationsAllowed - In the implementation block
@property (assign,nonatomic) BOOL shouldUseNewsUINotificationHandling;                         //@synthesize shouldUseNewsUINotificationHandling=_shouldUseNewsUINotificationHandling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(void)setUserInfo:(FCUserInfo *)arg1 ;
-(FCCommandQueue *)commandQueue;
-(FCUserInfo *)userInfo;
-(void)setEndOfAudioTrackNotificationsEnabled:(BOOL)arg1 ;
-(id)init;
-(BOOL)registerNotificationsForTagID:(id)arg1 isPaid:(BOOL)arg2 ;
-(void)registerDeviceToken:(id)arg1 ;
-(void)setPublisherNotificationsAllowed:(BOOL)arg1 ;
-(NSString *)notificationsUserID;
-(void)userInfoDidChangeNotificationsUserID:(id)arg1 ;
-(BOOL)publisherNotificationsAllowed;
-(id)appendBreakingNewsIfNeededToChannelIDs:(id)arg1 ;
-(NSString *)deviceToken;
-(void)_registerDeviceToken:(id)arg1 ;
-(void)setShouldUseNewsUINotificationHandling:(BOOL)arg1 ;
-(BOOL)appleNewsNotificationsAllowed;
-(void)setNewIssueNotificationsEnabled:(BOOL)arg1 ;
-(id)initWithUserInfo:(id)arg1 commandQueue:(id)arg2 configurationManager:(id)arg3 publisherNotificationsAllowed:(BOOL)arg4 appleNewsNotificationsAllowed:(BOOL)arg5 ;
-(BOOL)setMarketingNotificationsEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)shouldUseNewsUINotificationHandling;
-(void)setNotificationsUserID:(NSString *)arg1 ;
-(void)setCommandQueue:(FCCommandQueue *)arg1 ;
-(void)refreshNotificationsFromAppleNews;
-(void)setAppleNewsNotificationsAllowed:(BOOL)arg1 ;
-(BOOL)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 ;
-(BOOL)unregisterNotificationsForTagID:(id)arg1 ;
-(void)dealloc;
-(void)setDeviceToken:(NSString *)arg1 ;
@end

