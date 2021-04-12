/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@interface EDPersistenceDatabaseSchema : NSObject
+(id)schema;
+(id)propertyMapper;
+(id)protectedSchema;
+(id)mailboxesTableName;
+(id)propertiesTableSchema;
+(id)partialMailboxesTableSchema;
+(id)additionalSchemaProviders;
+(id)objectPropertyMapperForSchema:(id)arg1 protectedSchema:(id)arg2 ;
+(void)_initializeSchemas;
+(id)_schemaProviders;
+(id)_schemaWithPopulationBlock:(/*^block*/id)arg1 ;
+(id)_protectedSchemaProviders;
+(id)propertiesTableName;
+(void)ef_resetOnceTokens;
@end

