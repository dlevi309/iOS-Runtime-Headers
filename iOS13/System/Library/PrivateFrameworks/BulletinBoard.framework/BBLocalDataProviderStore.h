/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/BBLocalDataProviderFactoryStore.h>
#import <libobjc.A.dylib/BBDataProviderStore.h>

@protocol BBDataProviderStoreDelegate, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableArray, NSString;

@interface BBLocalDataProviderStore : NSObject <BBLocalDataProviderFactoryStore, BBDataProviderStore> {

	id<BBDataProviderStoreDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _dataProvidersBySectionID;
	NSMutableDictionary* _dataProvidersByUniversalSectionID;
	NSMutableArray* _localFactories;

}

@property (nonatomic,retain) NSMutableDictionary * dataProvidersBySectionID;                       //@synthesize dataProvidersBySectionID=_dataProvidersBySectionID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dataProvidersByUniversalSectionID;              //@synthesize dataProvidersByUniversalSectionID=_dataProvidersByUniversalSectionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * localFactories;                                      //@synthesize localFactories=_localFactories - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localDataProviderStoreWithDelegate:(id)arg1 dataProviderQueue:(id)arg2 ;
-(NSString *)debugDescription;
-(void)removeDataProviderWithSectionID:(id)arg1 ;
-(void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 universalSectionID:(id)arg4 ;
-(void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 ;
-(id)dataProviderForSectionID:(id)arg1 ;
-(void)performBlockOnDataProviders:(/*^block*/id)arg1 ;
-(void)loadAllDataProvidersAndPerformMigration:(BOOL)arg1 ;
-(id)debugDescriptionWithChildren:(unsigned long long)arg1 ;
-(id)dataProviderForUniversalSectionID:(id)arg1 ;
-(void)removeDataProvider:(id)arg1 ;
-(void)_queue_removeDataProvider:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 dataProviderQueue:(id)arg2 ;
-(void)_loadDataProviderPluginBundle:(id)arg1 performMigration:(BOOL)arg2 ;
-(void)_addDataProviderClass:(Class)arg1 performMigration:(BOOL)arg2 ;
-(void)_addLocalDataProviderFactoryOfClass:(Class)arg1 ;
-(void)_queue_addDataProvider:(id)arg1 performMigration:(BOOL)arg2 ;
-(void)addDataProvider:(id)arg1 performMigration:(BOOL)arg2 ;
-(NSMutableDictionary *)dataProvidersBySectionID;
-(void)setDataProvidersBySectionID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dataProvidersByUniversalSectionID;
-(void)setDataProvidersByUniversalSectionID:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)localFactories;
-(void)setLocalFactories:(NSMutableArray *)arg1 ;
@end

