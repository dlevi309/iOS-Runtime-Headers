/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/BBDataProviderStoreDelegate.h>

@protocol BBDataProviderManagerDelegate, OS_dispatch_queue;
@class BBLocalDataProviderStore, BBRemoteDataProviderConnectionResolver, NSObject, NSMutableDictionary, NSString;

@interface BBDataProviderManager : NSObject <BBDataProviderStoreDelegate> {

	id<BBDataProviderManagerDelegate> _delegate;
	BBLocalDataProviderStore* _localDataProviderStore;
	BBRemoteDataProviderConnectionResolver* _remoteDataProviderResolver;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _loadQueueSuspended;
	NSObject*<OS_dispatch_queue> _loadDataProviderQueue;
	NSMutableDictionary* _parentFactoriesBySectionID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)performBlockOnDataProviders:(/*^block*/id)arg1 ;
-(id)debugDescriptionWithChildren:(unsigned long long)arg1 ;
-(void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2 ;
-(id)_configureDataProvider:(id)arg1 performMigration:(BOOL)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)dataProviderForSectionID:(id)arg1 ;
-(NSString *)debugDescription;
-(id)localSectionIdentifiersFromDismissalSectionIdentifer:(id)arg1 ;
-(id)parentSectionDataProviderFactoryForSectionID:(id)arg1 ;
-(id)_configureSectionInfo:(id)arg1 forDataProvider:(id)arg2 ;
-(id)rebuildSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(id)universalSectionIDForSectionID:(id)arg1 ;
-(void)reloadIdentityForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_queue_getSectionInfoForSectionID:(id)arg1 ;
-(void)noteSettingsChanged:(id)arg1 forSectionID:(id)arg2 ;
-(id)_queue_dataProvidersForUniversalSectionID:(id)arg1 ;
-(void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2 ;
-(void)dealloc;
-(void)loadAllDataProvidersAndPerformMigration:(BOOL)arg1 ;
@end

