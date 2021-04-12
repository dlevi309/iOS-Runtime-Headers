/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
*/

#import <SymptomAnalytics/SymptomAnalytics-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AnalyticsWorkspaceHealthDelegate;
@class NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel, NSXPCConnection, NSBundle, NSError;

@interface AnalyticsWorkspace : NSObject <NSCopying> {

	NSString* backingStore;
	BOOL readOnly;
	BOOL pathKnownToFail;
	NSString* storeKind;
	NSString* storeProt;
	BOOL __persistent;
	BOOL _forceIntegrityCheck;
	BOOL _forceDestroyPersistentStore;
	BOOL _forceDeleteFile;
	BOOL _integrityCheckFailed;
	NSPersistentStoreCoordinator* __persistentStoreCoordinator;
	NSManagedObjectContext* __mainObjectContext;
	NSManagedObjectModel* __objectModel;
	/*^block*/id __resetCompletionBlock;
	NSXPCConnection* __connection;
	id<AnalyticsWorkspaceHealthDelegate> _healthDelegate;
	NSString* _objectModelName;
	NSBundle* _objectModelResidentBundle;
	NSError* _persistentStoreError;

}

@property (nonatomic,retain) NSError * persistentStoreError;                                                  //@synthesize persistentStoreError=_persistentStoreError - In the implementation block
@property (nonatomic,readonly) BOOL persistent;                                                               //@synthesize _persistent=__persistent - In the implementation block
@property (nonatomic,retain) id<AnalyticsWorkspaceHealthDelegate> healthDelegate;                             //@synthesize healthDelegate=_healthDelegate - In the implementation block
@property (assign,nonatomic) BOOL forceIntegrityCheck;                                                        //@synthesize forceIntegrityCheck=_forceIntegrityCheck - In the implementation block
@property (assign,nonatomic) BOOL forceDestroyPersistentStore;                                                //@synthesize forceDestroyPersistentStore=_forceDestroyPersistentStore - In the implementation block
@property (assign,nonatomic) BOOL forceDeleteFile;                                                            //@synthesize forceDeleteFile=_forceDeleteFile - In the implementation block
@property (nonatomic,retain) NSString * objectModelName;                                                      //@synthesize objectModelName=_objectModelName - In the implementation block
@property (nonatomic,retain) NSBundle * objectModelResidentBundle;                                            //@synthesize objectModelResidentBundle=_objectModelResidentBundle - In the implementation block
@property (nonatomic,readonly) BOOL integrityCheckFailed;                                                     //@synthesize integrityCheckFailed=_integrityCheckFailed - In the implementation block
@property (nonatomic,retain,readonly) NSManagedObjectModel * objectModel;                                     //@synthesize _objectModel=__objectModel - In the implementation block
@property (nonatomic,retain,readonly) NSManagedObjectContext * mainObjectContext;                             //@synthesize _mainObjectContext=__mainObjectContext - In the implementation block
@property (nonatomic,retain,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize _persistentStoreCoordinator=__persistentStoreCoordinator - In the implementation block
@property (nonatomic,retain,readonly) NSXPCConnection * connection;                                           //@synthesize _connection=__connection - In the implementation block
@property (nonatomic,copy) id resetCompletionBlock;                                                           //@synthesize _resetCompletionBlock=__resetCompletionBlock - In the implementation block
+(void)initialize;
+(id)defaultWorkspace;
+(id)workspaceWithName:(id)arg1 atPath:(id)arg2 objectModelName:(id)arg3 objectModelBundle:(id)arg4 useReadOnly:(BOOL)arg5 ;
+(id)workspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(BOOL)arg3 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(NSXPCConnection *)connection;
-(BOOL)save;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(BOOL)persistent;
-(id)initWorkspaceWithName:(id)arg1 atPath:(id)arg2 useReadOnly:(BOOL)arg3 ;
-(NSManagedObjectModel *)objectModel;
-(id)_initWithName:(id)arg1 inMemory:(BOOL)arg2 useReadOnly:(BOOL)arg3 customModelName:(id)arg4 loadModelFromBundle:(id)arg5 ;
-(id)initWorkspaceWithName:(id)arg1 atPath:(id)arg2 objectModelName:(id)arg3 objectModelBundle:(id)arg4 useReadOnly:(BOOL)arg5 ;
-(NSString *)objectModelName;
-(NSBundle *)objectModelResidentBundle;
-(BOOL)_primePath:(id)arg1 ;
-(id)createNewContext;
-(NSManagedObjectContext *)mainObjectContext;
-(id)resetCompletionBlock;
-(id)_cloneInternal:(id)arg1 intoWorkspace:(id)arg2 ancestry:(id)arg3 iteration:(unsigned long long)arg4 mustFail:(BOOL*)arg5 ;
-(id)initInMemoryWorkspaceWithName:(id)arg1 customModelName:(id)arg2 objectModelBundle:(id)arg3 ;
-(id)initWorkspaceWithService:(id)arg1 ;
-(BOOL)setCustomPersistenceProperties:(id)arg1 ;
-(void)setResetCompletionBlock:(id)arg1 ;
-(BOOL)canCloneObjectsOfType:(id)arg1 ;
-(void)enumerateResidentObjectsOfType:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)cloneObject:(id)arg1 intoWorkspace:(id)arg2 ;
-(id<AnalyticsWorkspaceHealthDelegate>)healthDelegate;
-(void)setHealthDelegate:(id<AnalyticsWorkspaceHealthDelegate>)arg1 ;
-(BOOL)forceIntegrityCheck;
-(void)setForceIntegrityCheck:(BOOL)arg1 ;
-(BOOL)forceDestroyPersistentStore;
-(void)setForceDestroyPersistentStore:(BOOL)arg1 ;
-(BOOL)forceDeleteFile;
-(void)setForceDeleteFile:(BOOL)arg1 ;
-(void)setObjectModelName:(NSString *)arg1 ;
-(void)setObjectModelResidentBundle:(NSBundle *)arg1 ;
-(BOOL)integrityCheckFailed;
-(NSError *)persistentStoreError;
-(void)setPersistentStoreError:(NSError *)arg1 ;
@end

