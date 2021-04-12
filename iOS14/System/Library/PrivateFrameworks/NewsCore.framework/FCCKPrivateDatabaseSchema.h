/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDictionary, NSArray;

@interface FCCKPrivateDatabaseSchema : NSObject {

	NSDictionary* _zoneSchemasByClientName;
	NSDictionary* _zoneSchemasByServerName;
	NSArray* _defaultZoneSchemas;

}
+(id)databaseSchemaWithZones:(id)arg1 ;
-(void)enumerateZoneSchemasWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)schemaForZoneContainingServerRecordID:(id)arg1 ;
-(void)enumerateDefaultZoneSchemasWithBlock:(/*^block*/id)arg1 ;
-(id)initWithSchemaDictionary:(id)arg1 ;
-(id)schemaForZoneContainingClientRecordID:(id)arg1 ;
-(id)schemaForZoneWithClientName:(id)arg1 ;
-(id)schemaForZoneWithServerName:(id)arg1 ;
-(id)initWithZoneSchemas:(id)arg1 ;
@end

