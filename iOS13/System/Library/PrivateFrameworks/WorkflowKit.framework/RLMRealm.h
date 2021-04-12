/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class NSHashTable, RLMSchema, RLMRealmConfiguration;

@interface RLMRealm : NSObject {

	shared_ptr<realm::Realm>* _realm;
	RLMSchemaInfo* _info;
	unique_ptr<RLMResultsSetInfo, std::__1::default_delete<RLMResultsSetInfo> >* _resultsSetInfo;
	NSHashTable* _collectionEnumerators;
	BOOL _sendingNotifications;
	BOOL _dynamic;
	RLMSchema* _schema;
	NSHashTable* _notificationHandlers;

}

@property (nonatomic,retain) NSHashTable * notificationHandlers;                   //@synthesize notificationHandlers=_notificationHandlers - In the implementation block
@property (nonatomic,readonly) Group* group; 
@property (nonatomic,readonly) BOOL dynamic;                                       //@synthesize dynamic=_dynamic - In the implementation block
@property (nonatomic,retain) RLMSchema * schema;                                   //@synthesize schema=_schema - In the implementation block
@property (nonatomic,readonly) BOOL inWriteTransaction; 
@property (nonatomic,readonly) RLMRealmConfiguration * configuration; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic) BOOL autorefresh; 
+(id)defaultRealm;
+(id)realmWithConfiguration:(id)arg1 error:(id*)arg2 ;
+(BOOL)isCoreDebug;
+(id)realmWithURL:(id)arg1 ;
+(id)asyncOpenWithConfiguration:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
+(id)realmWithSharedRealm:(shared_ptr<realm::Realm>*)arg1 schema:(id)arg2 ;
+(id)uncachedSchemalessRealmWithConfiguration:(id)arg1 error:(id*)arg2 ;
+(void)resetRealmState;
+(unsigned long long)schemaVersionAtURL:(id)arg1 encryptionKey:(id)arg2 error:(id*)arg3 ;
+(BOOL)performMigrationForConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(void)invalidate;
-(BOOL)isEmpty;
-(BOOL)compact;
-(RLMSchema *)schema;
-(Group*)group;
-(RLMRealmConfiguration *)configuration;
-(BOOL)refresh;
-(void)deleteObject:(id)arg1 ;
-(id)initPrivate;
-(void)setSchema:(RLMSchema *)arg1 ;
-(id)allObjects:(id)arg1 ;
-(BOOL)dynamic;
-(void)addObjects:(id)arg1 ;
-(void)deleteAllObjects;
-(void)transactionWithBlock:(/*^block*/id)arg1 ;
-(void)beginWriteTransaction;
-(id)createObject:(id)arg1 withValue:(id)arg2 ;
-(id)addNotificationBlock:(/*^block*/id)arg1 ;
-(void)verifyNotificationsAreSupported:(BOOL)arg1 ;
-(void)verifyThread;
-(NSHashTable *)notificationHandlers;
-(BOOL)commitWriteTransaction:(id*)arg1 ;
-(BOOL)transactionWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)detachAllEnumerators;
-(void)cancelWriteTransaction;
-(void)addOrUpdateObject:(id)arg1 ;
-(id)objects:(id)arg1 where:(id)arg2 args:(char*)arg3 ;
-(id)objects:(id)arg1 withPredicate:(id)arg2 ;
-(BOOL)inWriteTransaction;
-(BOOL)autorefresh;
-(void)setAutorefresh:(BOOL)arg1 ;
-(void)sendNotifications:(id)arg1 ;
-(void)commitWriteTransaction;
-(BOOL)commitWriteTransactionWithoutNotifying:(id)arg1 error:(id*)arg2 ;
-(id)resolveThreadSafeReference:(id)arg1 ;
-(void)addOrUpdateObjects:(id)arg1 ;
-(void)deleteObjects:(id)arg1 ;
-(id)objects:(id)arg1 where:(id)arg2 ;
-(id)objectWithClassName:(id)arg1 forPrimaryKey:(id)arg2 ;
-(BOOL)writeCopyToURL:(id)arg1 encryptionKey:(id)arg2 error:(id*)arg3 ;
-(void)registerEnumerator:(id)arg1 ;
-(void)unregisterEnumerator:(id)arg1 ;
-(void)setNotificationHandlers:(NSHashTable *)arg1 ;
@end

