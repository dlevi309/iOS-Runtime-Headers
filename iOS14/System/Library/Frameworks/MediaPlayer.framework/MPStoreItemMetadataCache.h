/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class CPLRUDictionary, NSMapTable;

@interface MPStoreItemMetadataCache : NSObject {

	CPLRUDictionary* _itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
	NSMapTable* _itemIdentifierToCompositeStoreItemMetadataMapTable;

}

@property (nonatomic,readonly) long long count; 
-(id)metadataForItemIdentifier:(id)arg1 ;
-(long long)count;
-(id)addMetadata:(id)arg1 forItemIdentifier:(id)arg2 ;
-(id)metadataForItemIdentifier:(id)arg1 ignoreExpiration:(BOOL)arg2 ;
-(void)removeExpiredMetadata;
-(id)initWithCacheSize:(long long)arg1 ;
@end

