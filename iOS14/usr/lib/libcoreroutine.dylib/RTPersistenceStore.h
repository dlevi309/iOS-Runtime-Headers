/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSPersistentStoreDescription, RTPersistenceMigrator, NSMutableDictionary, NSCloudKitMirroringDelegate, NSCloudKitMirroringDelegateOptions, NSURL;

@interface RTPersistenceStore : NSObject {

	NSPersistentStoreDescription* _storeDescription;
	BOOL _mirroringDelegateIntialized;
	RTPersistenceMigrator* _migrator;
	NSMutableDictionary* _userInfo;
	NSCloudKitMirroringDelegate* _mirroringDelegate;
	NSCloudKitMirroringDelegateOptions* _mirroringDelegateOptions;
	unsigned long long _state;
	long long _mirroringDelegateState;

}

@property (nonatomic,retain) NSCloudKitMirroringDelegate * mirroringDelegate;                            //@synthesize mirroringDelegate=_mirroringDelegate - In the implementation block
@property (nonatomic,retain) NSCloudKitMirroringDelegateOptions * mirroringDelegateOptions;              //@synthesize mirroringDelegateOptions=_mirroringDelegateOptions - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long mirroringDelegateState;                                           //@synthesize mirroringDelegateState=_mirroringDelegateState - In the implementation block
@property (nonatomic,retain) RTPersistenceMigrator * migrator;                                           //@synthesize migrator=_migrator - In the implementation block
@property (readonly) NSPersistentStoreDescription * storeDescription;                                    //@synthesize storeDescription=_storeDescription - In the implementation block
@property (readonly) NSURL * URL; 
@property (readonly) NSMutableDictionary * userInfo;                                                     //@synthesize userInfo=_userInfo - In the implementation block
+(id)storeBaseName:(id)arg1 ;
-(BOOL)error:(id*)arg1 code:(unsigned long long)arg2 ;
-(NSCloudKitMirroringDelegate *)mirroringDelegate;
-(id)storeName;
-(void)setMigrator:(RTPersistenceMigrator *)arg1 ;
-(NSMutableDictionary *)userInfo;
-(id)init;
-(void)setMirroringDelegate:(NSCloudKitMirroringDelegate *)arg1 ;
-(NSCloudKitMirroringDelegateOptions *)mirroringDelegateOptions;
-(RTPersistenceMigrator *)migrator;
-(NSPersistentStoreDescription *)storeDescription;
-(NSURL *)URL;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(id)cachedModelWithError:(id*)arg1 ;
-(BOOL)removeStoreAtURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)onMirroringDelegateInitialization:(id)arg1 ;
-(BOOL)updateMetadata:(id)arg1 context:(id)arg2 coordinator:(id)arg3 error:(id*)arg4 ;
-(BOOL)addToCoordinator:(id)arg1 lightweightMigration:(BOOL)arg2 vacuum:(BOOL)arg3 allowMirroring:(BOOL)arg4 error:(id*)arg5 ;
-(id)retrieveMetadataWithCoordinator:(id)arg1 error:(id*)arg2 ;
-(id)storeBaseName;
-(BOOL)performVacuumWithCoordinator:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateMetadata:(id)arg1 coordinator:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeFromCoordinator:(id)arg1 error:(id*)arg2 ;
-(BOOL)destroyWithCoordinator:(id)arg1 error:(id*)arg2 ;
-(id)initWithStoreDescription:(id)arg1 ;
-(id)storeURLsMatchingStoreName;
-(id)_validateKeys:(id)arg1 ;
-(BOOL)openWithCoordinator:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(void)setMirroringDelegateOptions:(NSCloudKitMirroringDelegateOptions *)arg1 ;
-(long long)mirroringDelegateState;
-(id)_normalizeError:(id)arg1 storeDescription:(id)arg2 ;
-(BOOL)error:(id*)arg1 inError:(id)arg2 ;
-(void)setMirroringDelegateState:(long long)arg1 ;
-(id)storeURLsMatchingStoreNameAtURL:(id)arg1 ;
-(BOOL)rekeyWithCoordinator:(id)arg1 keyData:(id)arg2 error:(id*)arg3 ;
@end

