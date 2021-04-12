/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RLMSchema, NSString, NSArray, NSURL, NSData;

@interface RLMRealmConfiguration : NSObject <NSCopying> {

	Config* _config;
	BOOL _cache;
	BOOL _dynamic;
	/*^block*/id _migrationBlock;
	/*^block*/id _shouldCompactOnLaunch;
	RLMSchema* _customSchema;
	NSString* _pathOnDisk;

}

@property (nonatomic,readonly) NSArray * allRealmFileURLs; 
@property (assign,nonatomic) BOOL cache;                                     //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) BOOL dynamic;                                   //@synthesize dynamic=_dynamic - In the implementation block
@property (assign,nonatomic) BOOL disableFormatUpgrade; 
@property (nonatomic,copy) RLMSchema * customSchema;                         //@synthesize customSchema=_customSchema - In the implementation block
@property (nonatomic,copy) NSString * pathOnDisk;                            //@synthesize pathOnDisk=_pathOnDisk - In the implementation block
@property (nonatomic,copy) NSURL * fileURL; 
@property (nonatomic,copy) NSString * inMemoryIdentifier; 
@property (nonatomic,copy) NSData * encryptionKey; 
@property (assign,nonatomic) BOOL readOnly; 
@property (assign,nonatomic) unsigned long long schemaVersion; 
@property (nonatomic,copy) id migrationBlock;                                //@synthesize migrationBlock=_migrationBlock - In the implementation block
@property (assign,nonatomic) BOOL deleteRealmIfMigrationNeeded; 
@property (nonatomic,copy) id shouldCompactOnLaunch;                         //@synthesize shouldCompactOnLaunch=_shouldCompactOnLaunch - In the implementation block
@property (nonatomic,copy) NSArray * objectClasses; 
+(id)defaultConfiguration;
+(void)setDefaultConfiguration:(id)arg1 ;
+(id)rawDefaultConfiguration;
+(void)resetRealmConfigurationState;
+(id)wf_shortcutsDirectoryURL;
+(id)wf_inMemoryConfigurationWithIdentifier:(id)arg1 ;
+(id)wf_systemShortcutsConfiguration;
+(id)wf_appStoreShortcutsConfiguration;
+(id)wf_workflowConfiguration;
+(id)wf_inMemoryConfiguration;
+(id)wf_configurationWithDirectoryURL:(id)arg1 filename:(id)arg2 ;
+(id)wf_configurationWithAppGroupIdentifier:(id)arg1 filename:(id)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Config*)config;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(unsigned long long)schemaVersion;
-(void)setCache:(BOOL)arg1 ;
-(BOOL)cache;
-(BOOL)readOnly;
-(void)setReadOnly:(BOOL)arg1 ;
-(void)setDynamic:(BOOL)arg1 ;
-(void)setSchemaVersion:(unsigned long long)arg1 ;
-(NSData *)encryptionKey;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(BOOL)dynamic;
-(RLMSchema *)customSchema;
-(id)migrationBlock;
-(void)setCustomSchema:(RLMSchema *)arg1 ;
-(BOOL)deleteRealmIfMigrationNeeded;
-(id)shouldCompactOnLaunch;
-(NSString *)inMemoryIdentifier;
-(void)setInMemoryIdentifier:(NSString *)arg1 ;
-(void)setDeleteRealmIfMigrationNeeded:(BOOL)arg1 ;
-(NSArray *)objectClasses;
-(void)setObjectClasses:(NSArray *)arg1 ;
-(BOOL)disableFormatUpgrade;
-(void)setDisableFormatUpgrade:(BOOL)arg1 ;
-(unsigned char)schemaMode;
-(void)setSchemaMode:(unsigned char)arg1 ;
-(NSString *)pathOnDisk;
-(void)setShouldCompactOnLaunch:(id)arg1 ;
-(void)setCustomSchemaWithoutCopying:(id)arg1 ;
-(id)syncConfiguration;
-(void)setMigrationBlock:(id)arg1 ;
-(void)setPathOnDisk:(NSString *)arg1 ;
-(NSArray *)allRealmFileURLs;
@end

