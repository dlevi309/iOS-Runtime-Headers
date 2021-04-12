/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class CPLRUDictionary, NSMapTable;

@interface MPStoreItemMetadataCache : NSObject {

	CPLRUDictionary* _itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
	NSMapTable* _itemIdentifierToCompositeStoreItemMetadataMapTable;

}

@property (nonatomic,readonly) long long count; 
-(long long)count;
-(id)initWithCacheSize:(long long)arg1 ;
-(id)addMetadata:(id)arg1 forItemIdentifier:(id)arg2 ;
-(id)metadataForItemIdentifier:(id)arg1 ;
-(id)metadataForItemIdentifier:(id)arg1 ignoreExpiration:(BOOL)arg2 ;
-(void)removeExpiredMetadata;
@end

