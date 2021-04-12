/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithMigrations:(id)arg1 ;
-(NSDictionary *)migrations;
-(unsigned)maxVersion;
@end

