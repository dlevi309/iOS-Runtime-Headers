/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@interface NSStoreMappingGenerator : NSObject
+(void)invalidate;
+(id)defaultMappingGenerator;
-(id)mappingsDictForConfigurationWithName:(id)arg1 inModel:(id)arg2 ;
-(id)externalNameForPropertyName:(id)arg1 ;
-(id)mappingForAttribute:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)mappingsForConfigurationWithName:(id)arg1 inModel:(id)arg2 ;
-(id)joinsForRelationship:(id)arg1 ;
-(id)internalNameForEntityName:(id)arg1 version:(int)arg2 ;
-(id)mappingForRelationship:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)mappingForEntity:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)internalNameForPropertyName:(id)arg1 version:(int)arg2 ;
-(id)externalNameForEntityName:(id)arg1 ;
-(id)primaryKeyForEntity:(id)arg1 ;
@end

