/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)debugDescription;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)dataProviderForSectionID:(id)arg1 ;
-(void)noteSettingsChanged:(id)arg1 forSectionID:(id)arg2 ;
-(void)performBlockOnDataProviders:(/*^block*/id)arg1 ;
-(id)universalSectionIDForSectionID:(id)arg1 ;
-(id)localSectionIdentifierFromDismissalSectionIdentifer:(id)arg1 ;
-(void)loadAllDataProvidersAndPerformMigration:(BOOL)arg1 ;
-(void)reloadIdentityForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)rebuildSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(id)debugDescriptionWithChildren:(unsigned long long)arg1 ;
-(void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2 ;
-(void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2 ;
-(id)_queue_getSectionInfoForSectionID:(id)arg1 ;
-(id)_configureSectionInfo:(id)arg1 forDataProvider:(id)arg2 ;
-(id)_queue_dataProviderForUniversalSectionID:(id)arg1 ;
-(id)parentSectionDataProviderFactoryForSectionID:(id)arg1 ;
-(id)_configureDataProvider:(id)arg1 performMigration:(BOOL)arg2 ;
@end

