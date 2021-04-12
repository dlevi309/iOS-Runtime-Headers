/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_newMetadataModelV2;
+(id)_newMetadataModelV3;
+(unsigned long long)ancillaryEntityCount;
+(id)identifyModelForStore:(id)arg1 withConnection:(id)arg2 hasOldMetadataTables:(BOOL*)arg3 ;
+(void)_invalidateStaticCaches;
+(id)_newMetadataModelV4;
+(id)_newMetadataModelV10;
+(id)ancillaryModelNamespace;
+(BOOL)currentMetadataVersionHashesMatchCachedMetadataVersionHashes:(id)arg1 ;
+(id)_newMetadataModelV9;
+(id)_newMetadataModelV7;
+(BOOL)doesMetadataModel:(id)arg1 matchConnection:(id)arg2 hasOldMetadataTables:(BOOL*)arg3 ;
+(id)allMetadataModels;
+(id)_newMetadataModelV5;
+(id)_newMetadataModelV6;
+(id)newMetadataModelForFrameworkVersion:(id)arg1 ;
+(unsigned long long)ancillaryEntityOffset;
+(BOOL)checkAndRepairSchemaOfStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)_newMetadataModelV1;
+(id)_newMetadataModelV8;
@end

