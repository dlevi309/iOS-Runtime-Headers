/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/ACHTemplateEntitySyncedTemplatesObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, ACHTemplateEntityWrapper, NSMutableSet, NSMutableDictionary, NSDictionary, NSHashTable, NSObject, NSArray, NSString;

@interface ACHTemplateStore : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, ACHTemplateEntitySyncedTemplatesObserver> {

	unsigned char _device;
	BOOL _initialFetchComplete;
	HDProfile* _profile;
	ACHTemplateEntityWrapper* _entityWrapper;
	NSMutableSet* _templates;
	NSMutableDictionary* _templatesByUniqueName;
	NSMutableDictionary* _templatesByKey;
	NSDictionary* _templatesReadyToAdd;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) ACHTemplateEntityWrapper * entityWrapper;                       //@synthesize entityWrapper=_entityWrapper - In the implementation block
@property (assign,nonatomic) unsigned char device;                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSMutableSet * templates;                                       //@synthesize templates=_templates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * templatesByUniqueName;                    //@synthesize templatesByUniqueName=_templatesByUniqueName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * templatesByKey;                           //@synthesize templatesByKey=_templatesByKey - In the implementation block
@property (nonatomic,retain) NSDictionary * templatesReadyToAdd;                             //@synthesize templatesReadyToAdd=_templatesReadyToAdd - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;                 //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> synchronizationQueue;              //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
@property (assign,nonatomic) BOOL initialFetchComplete;                                      //@synthesize initialFetchComplete=_initialFetchComplete - In the implementation block
@property (nonatomic,readonly) NSArray * allTemplates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(unsigned char)device;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
-(void)setSynchronizationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDevice:(unsigned char)arg1 ;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableSet *)templates;
-(NSArray *)allTemplates;
-(void)daemonReady:(id)arg1 ;
-(NSDictionary *)templatesReadyToAdd;
-(void)setTemplatesReadyToAdd:(NSDictionary *)arg1 ;
-(BOOL)_queue_addTemplates:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 triggerSync:(BOOL)arg4 error:(id*)arg5 ;
-(NSMutableDictionary *)templatesByUniqueName;
-(NSMutableDictionary *)templatesByKey;
-(BOOL)initialFetchComplete;
-(ACHTemplateEntityWrapper *)entityWrapper;
-(void)setInitialFetchComplete:(BOOL)arg1 ;
-(void)_addTemplatesToLocalCollections:(id)arg1 ;
-(void)_notifyObserversOfInitialFetchCompletion;
-(id)_queue_templatesFilteredForDuplicates:(id)arg1 ;
-(BOOL)_isValidTemplate:(id)arg1 ;
-(BOOL)_queue_addTemplatesToDatabase:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id*)arg4 ;
-(void)_notifyObserversOfNewTemplates:(id)arg1 ;
-(BOOL)removeTemplates:(id)arg1 error:(id*)arg2 ;
-(void)_notifyObserversOfRemovedTemplates:(id)arg1 ;
-(BOOL)_removeTemplatesFromDatabase:(id)arg1 error:(id*)arg2 ;
-(void)_removeTemplatesFromLocalCollections:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)templateEntityDidReceiveSyncedTemplates:(id)arg1 provenance:(long long)arg2 ;
-(id)initWithProfile:(id)arg1 entityWrapper:(id)arg2 device:(unsigned char)arg3 ;
-(id)templateForUniqueName:(id)arg1 ;
-(id)templateForTemplateKey:(unsigned long long)arg1 ;
-(id)availableTemplatesForDateComponents:(id)arg1 countryCode:(id)arg2 ;
-(void)loadAllTemplatesFromDatabaseIfNecessary;
-(void)addTemplates:(id)arg1 ;
-(BOOL)addTemplates:(id)arg1 databaseContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeAllTemplates:(id*)arg1 ;
-(void)setEntityWrapper:(ACHTemplateEntityWrapper *)arg1 ;
-(void)setTemplates:(NSMutableSet *)arg1 ;
-(void)setTemplatesByUniqueName:(NSMutableDictionary *)arg1 ;
-(void)setTemplatesByKey:(NSMutableDictionary *)arg1 ;
@end

