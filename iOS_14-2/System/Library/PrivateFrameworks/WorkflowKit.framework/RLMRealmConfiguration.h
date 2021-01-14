/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RLMSchema, NSString, NSURL, NSData, NSArray;

@interface RLMRealmConfiguration : NSObject <NSCopying> {

	Config* _config;
	BOOL _cache;
	BOOL _dynamic;
	/*^block*/id _migrationBlock;
	/*^block*/id _shouldCompactOnLaunch;
	RLMSchema* _customSchema;
	NSString* _pathOnDisk;

}

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
+(id)wf_configurationWithRealmURL:(id)arg1 ;
-(unsigned long long)schemaVersion;
-(Config*)config;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSData *)encryptionKey;
-(void)setCustomSchemaWithoutCopying:(id)arg1 ;
-(id)shouldCompactOnLaunch;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)cache;
-(id)init;
-(void)setObjectClasses:(NSArray *)arg1 ;
-(BOOL)readOnly;
-(id)syncConfiguration;
-(id)migrationBlock;
-(void)setShouldCompactOnLaunch:(id)arg1 ;
-(void)setMigrationBlock:(id)arg1 ;
-(void)setCache:(BOOL)arg1 ;
-(NSString *)inMemoryIdentifier;
-(NSURL *)fileURL;
-(void)setSchemaVersion:(unsigned long long)arg1 ;
-(void)setPathOnDisk:(NSString *)arg1 ;
-(id)description;
-(void)setInMemoryIdentifier:(NSString *)arg1 ;
-(unsigned char)schemaMode;
-(NSArray *)objectClasses;
-(NSString *)pathOnDisk;
-(void)setDisableFormatUpgrade:(BOOL)arg1 ;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(void)setDeleteRealmIfMigrationNeeded:(BOOL)arg1 ;
-(void)setDynamic:(BOOL)arg1 ;
-(BOOL)disableFormatUpgrade;
-(void)setCustomSchema:(RLMSchema *)arg1 ;
-(RLMSchema *)customSchema;
-(BOOL)deleteRealmIfMigrationNeeded;
-(void)setSchemaMode:(unsigned char)arg1 ;
-(BOOL)dynamic;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

