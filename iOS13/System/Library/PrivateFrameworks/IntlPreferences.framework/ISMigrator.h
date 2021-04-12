/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
*/


@class NSString;

@interface ISMigrator : NSObject {

	unsigned long long _platform;
	NSString* _previousVersion;
	NSString* _currentVersion;
	unsigned long long _previousSchemaVersion;

}

@property (assign,nonatomic) unsigned long long platform;                           //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy) NSString * previousVersion;                              //@synthesize previousVersion=_previousVersion - In the implementation block
@property (nonatomic,copy) NSString * currentVersion;                               //@synthesize currentVersion=_currentVersion - In the implementation block
@property (assign,nonatomic) unsigned long long previousSchemaVersion;              //@synthesize previousSchemaVersion=_previousSchemaVersion - In the implementation block
+(unsigned long long)currentPlatform;
+(id)migratorFromVersion:(id)arg1 toVersion:(id)arg2 platform:(unsigned long long)arg3 ;
+(id)migratorFromVersion:(id)arg1 toVersion:(id)arg2 ;
+(id)migratorFromSchemaVersion:(unsigned long long)arg1 ;
-(unsigned long long)platform;
-(NSString *)currentVersion;
-(void)setCurrentVersion:(NSString *)arg1 ;
-(NSString *)previousVersion;
-(void)setPreviousVersion:(NSString *)arg1 ;
-(void)setPlatform:(unsigned long long)arg1 ;
-(void)setPreviousSchemaVersion:(unsigned long long)arg1 ;
-(id)performMigrationForPreferences:(id)arg1 ;
-(id)performMigrationForUserPreferences:(id)arg1 systemPreferences:(id)arg2 ;
-(BOOL)previousVersionIsOlderThanMacOS:(id)arg1 iOS:(id)arg2 watchOS:(id)arg3 tvOS:(id)arg4 ;
-(unsigned long long)previousSchemaVersion;
@end

