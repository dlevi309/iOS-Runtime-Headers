/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@class NSDictionary;

@interface TSPDocumentResourceRegistry : NSObject {

	NSDictionary* _metadataDictionary;

}

@property (readonly) NSDictionary * metadataDictionary; 
+(id)sharedRegistry;
-(id)init;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(NSDictionary *)metadataDictionary;
-(id)documentResourceInfosForTags:(id)arg1 ;
-(id)documentResourceInfoForDigestString:(id)arg1 locator:(id)arg2 ;
-(id)localStrategyProviderForDocumentResourceInfos:(id)arg1 ;
-(id)initWithMetadataURL:(id)arg1 ;
@end

