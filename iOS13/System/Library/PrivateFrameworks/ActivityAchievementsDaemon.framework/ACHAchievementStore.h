/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <libobjc.A.dylib/ACHTemplateStoreObserving.h>
#import <libobjc.A.dylib/ACHEarnedInstanceStoreObserving.h>
#import <libobjc.A.dylib/ACHAchievementProgressEngineObserving.h>
#import <libobjc.A.dylib/ACHTemplateAssetRegistryDelegate.h>

@protocol OS_dispatch_queue;
@class ACHTemplateStore, ACHEarnedInstanceStore, ACHTemplateAssetRegistry, ACHAchievementProgressEngine, NSMutableDictionary, NSHashTable, NSObject, NSString;

@interface ACHAchievementStore : NSObject <ACHTemplateStoreObserving, ACHEarnedInstanceStoreObserving, ACHAchievementProgressEngineObserving, ACHTemplateAssetRegistryDelegate> {

	BOOL _templateStoreDidFinishInitialFetch;
	BOOL _earnedInstanceStoreDidFinishInitialFetch;
	ACHTemplateStore* _templateStore;
	ACHEarnedInstanceStore* _earnedInstanceStore;
	ACHTemplateAssetRegistry* _templateAssetRegistry;
	ACHAchievementProgressEngine* _progressProvider;
	NSMutableDictionary* _achievementsByTemplateUniqueName;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (nonatomic,retain) ACHTemplateStore * templateStore;                                    //@synthesize templateStore=_templateStore - In the implementation block
@property (nonatomic,retain) ACHEarnedInstanceStore * earnedInstanceStore;                        //@synthesize earnedInstanceStore=_earnedInstanceStore - In the implementation block
@property (nonatomic,retain) ACHTemplateAssetRegistry * templateAssetRegistry;                    //@synthesize templateAssetRegistry=_templateAssetRegistry - In the implementation block
@property (nonatomic,retain) ACHAchievementProgressEngine * progressProvider;                     //@synthesize progressProvider=_progressProvider - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * achievementsByTemplateUniqueName;              //@synthesize achievementsByTemplateUniqueName=_achievementsByTemplateUniqueName - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                             //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;                      //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> synchronizationQueue;                   //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
@property (assign,nonatomic) BOOL templateStoreDidFinishInitialFetch;                             //@synthesize templateStoreDidFinishInitialFetch=_templateStoreDidFinishInitialFetch - In the implementation block
@property (assign,nonatomic) BOOL earnedInstanceStoreDidFinishInitialFetch;                       //@synthesize earnedInstanceStoreDidFinishInitialFetch=_earnedInstanceStoreDidFinishInitialFetch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
-(void)setSynchronizationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ACHAchievementProgressEngine *)progressProvider;
-(void)setProgressProvider:(ACHAchievementProgressEngine *)arg1 ;
-(ACHEarnedInstanceStore *)earnedInstanceStore;
-(ACHTemplateStore *)templateStore;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(void)setEarnedInstanceStore:(ACHEarnedInstanceStore *)arg1 ;
-(void)_notifyObserversOfInitialFetchCompletion;
-(void)templateStore:(id)arg1 didAddNewTemplates:(id)arg2 ;
-(void)templateStore:(id)arg1 didRemoveTemplates:(id)arg2 ;
-(void)templateStoreDidFinishInitialFetch:(id)arg1 ;
-(void)templateAssetRegistry:(id)arg1 didUpdateResourcesForTemplatesWithSourceName:(id)arg2 ;
-(BOOL)templateStoreDidFinishInitialFetch;
-(BOOL)earnedInstanceStoreDidFinishInitialFetch;
-(NSMutableDictionary *)achievementsByTemplateUniqueName;
-(id)_queue_ephemeralMonthlyChallengeAchievementForTemplateUniqueName:(id)arg1 earnedInstance:(id)arg2 ;
-(ACHTemplateAssetRegistry *)templateAssetRegistry;
-(void)progressProviderDidUpdateProgressValues:(id)arg1 ;
-(void)_queue_addTemplatesToLocalStore:(id)arg1 ;
-(void)setTemplateStoreDidFinishInitialFetch:(BOOL)arg1 ;
-(void)_queue_removeTemplatesFromLocalStore:(id)arg1 ;
-(void)_queue_addEarnedInstancesToLocalStore:(id)arg1 ;
-(void)setEarnedInstanceStoreDidFinishInitialFetch:(BOOL)arg1 ;
-(void)_queue_removeEarnedInstancesFromLocalStore:(id)arg1 ;
-(BOOL)_queue_addProgressAndGoalToAchievement:(id)arg1 ;
-(void)_notifyObserversOfNewAchievements:(id)arg1 ;
-(void)_notifyObserversOfRemovedAchievements:(id)arg1 ;
-(void)_queue_populateResourcesForAchievementsWithTemplateSourceName:(id)arg1 ;
-(void)_notifyObserversOfUpdatedAchievements:(id)arg1 ;
-(void)earnedInstanceStore:(id)arg1 didAddNewEarnedInstances:(id)arg2 ;
-(void)earnedInstanceStore:(id)arg1 didRemoveEarnedInstances:(id)arg2 ;
-(void)earnedInstanceStoreDidFinishInitialFetch:(id)arg1 ;
-(id)initWithTemplateStore:(id)arg1 earnedInstanceStore:(id)arg2 templateAssetRegistry:(id)arg3 progressProvider:(id)arg4 ;
-(void)loadAllAchievementsFromDatabaseIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)allAchievements;
-(id)achievementWithTemplateUniqueName:(id)arg1 ;
-(id)ephemeralAchievementWithTemplateUniqueName:(id)arg1 ;
-(void)recalculateProgressForAllAchievements;
-(void)setTemplateAssetRegistry:(ACHTemplateAssetRegistry *)arg1 ;
-(void)setAchievementsByTemplateUniqueName:(NSMutableDictionary *)arg1 ;
@end

