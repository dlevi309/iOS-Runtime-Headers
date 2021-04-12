/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/UNSNotificationRepositoryObserver.h>
#import <libobjc.A.dylib/UNSNotificationCategoryRepositoryObserver.h>
#import <libobjc.A.dylib/UNSNotificationTopicRepositoryObserver.h>
#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class BBSectionIcon, BBSectionInfo, BSCFBundle, UNSNotificationSourceDescription, UNSApplicationLauncher, UNSDaemonLauncher, UNSNotificationRepository, UNSNotificationCategoryRepository, UNSNotificationTopicRepository, UNSAttachmentsService, UNSLocalizationService, BBDataProviderProxy, NSObject, NSMutableDictionary, NSString;

@interface UNSDefaultDataProvider : NSObject <UNSNotificationRepositoryObserver, UNSNotificationCategoryRepositoryObserver, UNSNotificationTopicRepositoryObserver, BBRemoteDataProvider> {

	BBSectionIcon* _sectionIcon;
	BBSectionInfo* _effectiveSectionInfo;
	BSCFBundle* _bundle;
	BOOL _suppressUserAuthorizationPrompt;
	UNSNotificationSourceDescription* _notificationSourceDescription;
	UNSApplicationLauncher* _appLauncher;
	UNSDaemonLauncher* _daemonLauncher;
	UNSNotificationRepository* _notificationRepository;
	UNSNotificationCategoryRepository* _categoryRepository;
	UNSNotificationTopicRepository* _topicRepository;
	UNSAttachmentsService* _attachmentsService;
	UNSLocalizationService* _localizationService;
	BBDataProviderProxy* _proxy;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _categoryToParamSubType;

}

@property (nonatomic,retain) BBDataProviderProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)notificationRecords;
-(void)uninstall;
-(void)setProxy:(BBDataProviderProxy *)arg1 ;
-(id)sectionIdentifier;
-(id)universalSectionIdentifier;
-(id)_silenceActionForCategory:(id)arg1 ;
-(BBDataProviderProxy *)proxy;
-(id)_allBulletinsWithMaxCount:(unsigned long long)arg1 sinceDate:(id)arg2 ;
-(void)_handleBulletinActionResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_queue_withdrawBulletinForNotification:(id)arg1 ;
-(id)_sectionIconVariantForImageName:(id)arg1 bundlePath:(id)arg2 format:(long long)arg3 precomposed:(BOOL)arg4 ;
-(BOOL)_isResourceValidForPath:(id)arg1 withContainerPath:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)_queue_bulletinForNotification:(id)arg1 ;
-(id)_actionsFromActionRecords:(id)arg1 ;
-(void)dataProviderDidLoad;
-(void)notificationRepository:(id)arg1 didDiscoverContentOnFirstUnlockForBundleIdentifier:(id)arg2 ;
-(BOOL)syncsBulletinDismissal;
-(id)_queue_applicableSectionInfosForSubsectionIDs:(id)arg1 ;
-(id)sortDescriptors;
-(void)_queue_modifyBulletinForNotification:(id)arg1 ;
-(void)_setNotificationSourceDescription:(id)arg1 ;
-(id)_supplementaryActionsForForCategoryRecord:(id)arg1 ;
-(id)defaultSubsectionInfos;
-(BOOL)_queue_supportsCriticalAlertsForSubsectionIDs:(id)arg1 ;
-(id)sectionParameters;
-(id)_unarchiveNotificationFromData:(id)arg1 ;
-(void)setEffectiveSectionInfo:(id)arg1 ;
-(id)_actionFromActionRecord:(id)arg1 ;
-(id)initWithNotificationSourceDescription:(id)arg1 applicationLauncher:(id)arg2 daemonLauncher:(id)arg3 categoryRepository:(id)arg4 notificationRepository:(id)arg5 topicRepository:(id)arg6 attachmentsService:(id)arg7 localizationService:(id)arg8 queue:(id)arg9 ;
-(void)handleBulletinActionResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)sectionIcon;
-(id)_topicForIdentifier:(id)arg1 ;
-(id)_soundsDirectoryPathForContainerBasePath:(id)arg1 ;
-(void)_queue_notificationRepositoryDidPerformUpdates:(id)arg1 ;
-(id)_dismissActionForCategory:(id)arg1 ;
-(void)_addAttachments:(id)arg1 toBulletinRequest:(id)arg2 ;
-(id)_allCategories;
-(id)_localizeClientString:(id)arg1 inBundle:(id)arg2 ;
-(void)invalidate;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(id)_defaultActionWithNotification:(id)arg1 ;
-(void)_queue_addBulletinForNotification:(id)arg1 ;
-(id)_categoryForIdentifier:(id)arg1 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned long long)arg1 lastClearedInfo:(id)arg2 ;
-(void)setNotificationSourceDescription:(id)arg1 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(id)_sectionIconForNotificationSourceDescription:(id)arg1 ;
-(void)topicRepository:(id)arg1 didChangeTopicsForBundleIdentifier:(id)arg2 ;
-(id)sectionDisplayName;
-(void)categoryRepository:(id)arg1 didChangeCategoriesForBundleIdentifier:(id)arg2 ;
-(id)_pathForSoundName:(id)arg1 ;
-(void)dealloc;
@end

