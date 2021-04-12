/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@class NSDictionary;

@interface PMLTrainingDatabaseMigrations : NSObject {

	NSDictionary* _migrations;

}

@property (nonatomic,readonly) NSDictionary * migrations;              //@synthesize migrations=_migrations - In the implementation block
@property (nonatomic,readonly) unsigned maxVersion; 
+(id)skipFromZeroSchema:(unsigned*)arg1 ;
+(id)mockMigrationsByAddingQueries:(id)arg1 ;
-(id)init;
-(NSDictionary *)migrations;
-(unsigned)maxVersion;
-(id)initWithMigrations:(id)arg1 ;
@end

