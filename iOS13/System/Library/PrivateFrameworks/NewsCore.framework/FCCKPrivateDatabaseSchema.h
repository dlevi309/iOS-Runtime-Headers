/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDictionary, NSArray;

@interface FCCKPrivateDatabaseSchema : NSObject {

	NSDictionary* _zoneSchemasByClientName;
	NSDictionary* _zoneSchemasByServerName;
	NSArray* _defaultZoneSchemas;

}
+(id)databaseSchemaWithZones:(id)arg1 ;
-(id)init;
-(void)enumerateZoneSchemasWithBlock:(/*^block*/id)arg1 ;
-(id)schemaForZoneWithClientName:(id)arg1 ;
-(id)schemaForZoneContainingClientRecordID:(id)arg1 ;
-(id)schemaForZoneWithServerName:(id)arg1 ;
-(id)schemaForZoneContainingServerRecordID:(id)arg1 ;
-(void)enumerateDefaultZoneSchemasWithBlock:(/*^block*/id)arg1 ;
-(id)initWithZoneSchemas:(id)arg1 ;
-(id)initWithSchemaDictionary:(id)arg1 ;
@end

