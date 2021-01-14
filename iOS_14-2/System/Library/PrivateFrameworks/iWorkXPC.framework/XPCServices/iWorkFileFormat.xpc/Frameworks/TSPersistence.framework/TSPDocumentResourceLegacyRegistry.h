/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@class NSDictionary;

@interface TSPDocumentResourceLegacyRegistry : NSObject {

	NSDictionary* _metadataDictionary;

}

@property (readonly) NSDictionary * metadataDictionary; 
+(id)sharedSageRegistry;
+(id)sharedTangierRegistry;
-(id)init;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(NSDictionary *)metadataDictionary;
-(id)documentResourceLegacyInfoForApplicationRelativePath:(id)arg1 ;
-(id)initWithMetadataURL:(id)arg1 ;
-(id)metadataDictionaryKeyForRelativePath:(id)arg1 ;
@end

