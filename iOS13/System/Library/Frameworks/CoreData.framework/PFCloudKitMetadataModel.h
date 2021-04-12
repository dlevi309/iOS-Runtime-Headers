/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/_PFAncillaryModelFactory.h>

@class NSString;

@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)ancillaryModelNamespace;
+(id)_newMetadataModelV1;
+(id)_newMetadataModelV2;
+(id)_newMetadataModelV3;
+(id)_newMetadataModelV4;
+(id)_newMetadataModelV5;
+(id)_newMetadataModelV6;
+(id)_newMetadataModelV7;
+(id)_newMetadataModelV8;
+(id)newMetadataModelForFrameworkVersion:(id)arg1 ;
+(id)allMetadataModels;
+(BOOL)doesMetadataModel:(id)arg1 matchConnection:(id)arg2 hasOldMetadataTables:(BOOL*)arg3 ;
+(unsigned long long)ancillaryEntityOffset;
+(void)addAttributes:(id)arg1 toPropertiesOfEntity:(id)arg2 ;
+(void)addRelationships:(id)arg1 toPropertiesOfEntity:(id)arg2 ;
+(BOOL)checkAndRepairSchemaOfStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)currentMetadataVersionHashesMatchCachedMetadataVersionHashes:(id)arg1 ;
+(id)identifyModelForStore:(id)arg1 withConnection:(id)arg2 hasOldMetadataTables:(BOOL*)arg3 ;
+(unsigned long long)ancillaryEntityCount;
@end

